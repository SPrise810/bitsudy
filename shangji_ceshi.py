# a=int(input("请输入任意一个正整数:"))
# while(a!=1):
#     if(a%2==0):
#         a/=2
#     else:
#         a=a*3+1
#     print(f"经处理后，目前的值为{a}")
# while(1):
#     a=float(input("请输入您所使用的通话时间： "))
#     value=0.500
#     if(a<=3):
#         print(f"您应当缴纳的电话费用为{value}")
#     else:
#         while(a-3>0):
#             value=value+0.15
#             a-=1
#         print(f"您应当缴纳的电话费用为{value}")
# list1=[11,22,33,44,55,66,77]
# list2=[22,23,45,67,77,44]
# list3=[]
# list3=set(list1)^set(list2)
# print(list3)

# 做出函数y=sin(x)和y=cos(x)的图像
# 在x在[-10,10]之间的曲线
# 横坐标取值间隔为0.1，横坐标刻度范围：-10到10；
# 横坐标为：x，纵坐标为y；

# 图形标题为y=sin(x)线的样式：红色'-.'，并用*标记数据点；
# 图形标题为y=cos(x)线的样式：绿色'--'，并用上三角标记数据点；
# 线宽为2(linewidth)。

import matplotlib.pyplot as plt
import numpy as np
plt.xlabel("x")
plt.ylabel("y")
plt.title("正弦函数和余弦函数图像")
plt.xlim(-10,10)
plt.ylim(-10,10)
x=np.arange(-10,10,0.1)
y1 = np.sin(x)
y2=np.cos(x)
plt.xticks(x[::1])
plt.plot(x,y1,'r-.',linewidth=2,marker='*')
plt.plot(x,y2,'g--',linewidth=2,marker='^')
plt.savefig("图像.png")
plt.show()