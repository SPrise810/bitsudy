import numpy as np
import cv2
import pytesseract
import os

def drawlines(img, dic_points):
    color = (0, 255, 0)  # 颜色形式为BGR  BLUE,GREEN,RED三原色

    # 将已经记录的顶点进行复制
    points = dic_points['ps'][:]
    # 追加一个鼠标的移动动点
    points.append(dic_points['p_move'])  # 加入动点
    if len(points) > 0 and len(points) < 5:
        # 这里我们描述的是前三个点
        # 顶点有四个加上移动点是5个
        # 当我们在前三个顶点的时候，时0~4，第四个顶点则len为5了
        for i in range(len(points) - 1):
            cv2.circle(img, points[i], 4, color, cv2.FILLED)  # 画圆点
            # 参数分别为图像 顶点坐标，半径，颜色，  实心（圆点）
            cv2.line(img, points[i], points[i + 1], color, 1)  # 画线（连接圆点与圆点）
            # 参数 ：  图片 圆点     下一个圆点   颜色   线的粗细
    elif len(points) >= 5:
        # 确定了最后一个顶点，即第四个顶点，此时已经确认照片文字边界，我们通过循环将其圆点和线连接，主要是最后一个圆点的连接
        for i in range(3):
            cv2.circle(img, points[i], 4, color, cv2.FILLED)  # 画点
            cv2.line(img, points[i], points[i + 1], color, 1)  # 画线

            cv2.circle(img, points[3], 4, color, cv2.FILLED)  # 将第四个点画起来
            cv2.line(img, points[3], points[0], color, 1)  # 连接起始圆点和终点


#通过鼠标双击进行顶点坐标收集
def points_collet(event,x,y,flags,param):
    #参数解析： 鼠标动作，分别坐标xy，event的组合参数，param即我们所需要使用的参数
    #在主程序中我们可以看到param =dic_points字典
    #字典中含有两个变量
    # 一个是ps(points)四个图像顶点  用列表存储
    # 另一个是一个是ps_move  记录一个运动点
    dic_points=param#将字典传入

    # 左键双击时
    if event == cv2.EVENT_LBUTTONDBLCLK: #进入条件，开始进行第一个点的存储
        if len(dic_points['ps'])>=4:
            #顶点的数量>=4时，说明顶点坐标在上一个图片内容中已经存储，我们需要新一轮的记录
            dic_points['ps']=[]#进行初始化
            dic_points['ps'].append((x,y))#将第一个坐标存储
        else:
            #顶点数量<=4，说明顶点坐标没有问题，是当前照片的顶点内容，可以进行顶点存储
            dic_points['ps'].append((x,y))

        #鼠标移动
    if event==cv2.EVENT_MOUSEMOVE:
        #如果鼠标移动，那么就将鼠标运动的位置存放在p_move变量当中
        dic_points['p_move']=(x,y)


#将照片通过顶点排序
# 进行图片平整度调节
def reorder(points):
    points=np.array(points)
    ordered_points=np.zeros([4,2]) #4个点，2个坐标

    #顶点排序
    #将横纵坐标相加
    #最小为左上角，最大为右下角
    add=np.sum(points,axis=1)
    ordered_points[0]=points[np.argmin(add)]#左上角
    ordered_points[3]=points[np.argmax(add)]#右下角
    #将横纵坐标相减 diff 为 后减前 即y-x
    #最小为右上角，最大为左下角
    diff =np.diff(points,axis=1)
    ordered_points[1]=points[np.argmin(diff)]#右上角
    ordered_points[2]=points[np.argmax(diff)]#左下角
    return ordered_points

#实现图像的仿射变换，矫正图像
#ordered_points: 需要变换的4个顶点
#size_wraped: 变换后  图像的大小(W,H)
def getWarp(img,ordered_points,size_wraped):
    w,h=size_wraped#宽和高

    #源图像坐标点
    ps1=np.float32(ordered_points)

    #目标图像坐标点
    ps2=np.float32([[0,0],[w,0],[0,h],[w,h]])

    #计算仿射矩阵
    matrix=cv2.getPerspectiveTransform(ps1,ps2)

    #进行矫正及仿射变换
    imgOutput=cv2.warpPerspective(img,matrix,(w,h))

    #对边界进行简单裁剪
    imgCropped =imgOutput[20:imgOutput.shape[0]-20,20:imgOutput.shape[1]-20]
                                         #上下剪20   左右剪20
    imgCropped=cv2.resize(imgCropped,(w,h))
    #调整图像大小到目标命令
    return imgCropped
def store(text):
    f = open('C:\\Users\\SP\\source\\repos\\bitsudy\\zonghe_sheji\\information.txt.txt', "x")
    f.write(txt)
'''main程序 '''
#初始化坐标的字典
dic_points={}
dic_points["ps"]=[]#列表
dic_points["p_move"]=()#元组，不可被修改

#设置回调函数
cv2.namedWindow('image')
cv2.setMouseCallback('image',points_collet,param=dic_points)

#需要扫描的文件
file_scan="paper.jpg"

#扫描文件的大小
size_wraped=(420,600)#近似A4纸张的比例大小

#固定tesseract的位置
pytesseract.pytesseract.tesseract_cmd='C:\\Users\\SP\\source\\tesseract.exe'

while True:
    img=cv2.imread(file_scan)#读入照片数据

    drawlines(img,dic_points)

    key=cv2.waitKey(10)&0xFF# 获取按键键值
    cv2.imshow('image',img)#展示照片

    if key==ord('q'):#退出
        break
    if key==ord('w'):#进行操作
        key=0
        if len(dic_points['ps'])==4:#是否已经收集到四个顶点

            #图像仿射变换
            ordered_points=reorder(dic_points['ps'])#进行顶点排序
            img_Warped=getWarp(img,ordered_points,size_wraped)
            #对我的图像进行矫正，参数：图像，排序顶点，图像大小
            cv2.imshow("ImageWarped",img_Warped)
            #经过仿射变换显示校正后的图像

            #首先进行颜色变换
            img_Warped_RGB=cv2.cvtColor(img_Warped,cv2.COLOR_BGR2RGB)#转移颜色模式
            #文字识别
            txt=pytesseract.image_to_string(img_Warped_RGB,lang='chi_sim')
            #参数     ：RGB图像  以及  语言模型
            print(txt)
            store(txt)
            #存储文件信息











