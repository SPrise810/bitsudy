"""
数据类型：
数值  3  3.14   3.5
字符串    "hello"  "3.5"   "12312313"
列表   [1,4,5,9]
元组  (1,3,5)
类    book
布尔型数据  True,False

常用运算符：
%   求模运算（取余数）
**   幂运算   x**y返回的是x的y次幂
//  整除运算，即返回商的整数部分
+
-
=
!=
==

转义字符：
\n  \t 啦这些东西
如果不想在字符串中打印可以用前缀r
print(r"\n nishabiba")
print("nishabiba")

常用字符串函数：
假设变量名称为a
a.upper() 全大写
a.lower()全小写
a.strip()去掉字符串首尾空白 中间不去除
a.lstrip()去左边空白
a.rstrip()去右边空白
a.replace("abc","def")  替换字符串
a.split(",")  分割
这些不改变a本身，而是得到一个新的字符串

数值运算函数：
abs(a)  返回a的绝对值
divmod(a,b)  同时返回商和余数  （整数）
pow(a,b[,z])  省略z时，x**y
              不省略z时，（x**y）%z
round(x,[:d])四舍五入，d是保留小数位数，默认为0
max(a,b,c,d,e,f)  返回其中的最大值
min(。。。。)同上 返回最小值

math库中的函数：
import math
print(math.sqrt(100))  打印平方根
math.sin()  三角函数（用弧度）
math.log() 对数

"""

# 一些实例，自行体会
#split 将字符串分割成子字符串，将结果作为字符串数组返回
# a="asd asdsa ada"
# print(a.split(" "))

"""
第二章  控制和循环结构
pass语句
不想用此条件就pass

a=10
if a>10:
  print("haha")
else:
  pass
  
for 循环：
for 变量 in 字符串/范围/集合等
range(star,end,step)函数
range(100)  0-99
range(1,101)  1-100

while循环：
while 判断条件：
   代码

\r  回到当前行的首位，\n 换行到下一行首位
在倒计时里用了

"""

# b="ssamba"
# for a in b:
#     if a=='m':
#         continue
#     print(a)
# b="ssamba"
# print("\n")
# for a in b:
#     if a=='m':
#         break
#     print(a)

# random 随机值函数

"""哥来做个示范"""
# import random #调用
# while True:
#     # a=random.randint(1,9)  #1-9数字
#     a=random.random() #0-1之间的数字，不含1
#     print(a)

"""进度条，还挺好玩的嘿嘿"""
# import time
# for i in range(10,0,-1):
#     # print(f'\r倒计时{format(i)}',end=' ') #这是哥常用的形式
#     print('\r倒计时{}'.format(i),end=' ')
#     time.sleep(1)

# import time
# shij=10
# intv=0.25
# for i in range(0,int(shij/intv)):
#     list=['\\','|','/','-']
#     ind=i%4
#     print('\r倒计时{}{}'.format(int(shij-i*intv),list[ind]),end='')
#     time.sleep(intv)
# print('\r加载完成！')
"""hhhhhhhh,太好玩了"""

"""
#第三章 组合数据类型： 
#列表： 列表里面可以是不同的数据类型
# 列表可以进行一系列序列操作：  索引，切片，加，乘，检查成员等
#li1=[]  和  l1=list()   表示空列
列表元素从0开始，如果是[-1]那么就表示从负向取
len()测长度的函数
append()函数，向列表末尾添加元素
remove()方法删除元素
pop()删除元素
insert()插入元素
建议回去看看蟒蛇的学习资料
切片好好学学
"""
# a=[2,3,4,5,6,7]
# print(len(a))


##

#
#
#
#

#
#
#
#
#
#
#
##
##
#
#

#
#


###
#

























