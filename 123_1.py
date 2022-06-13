# 家人们重中之重，屏蔽代码快捷键是crtl  +  /
#
# #程序一，赋值变量并打印其内容
# message="嗨嗨，来了嗷，老八蜜汁小汉堡，秘制小汉堡\n"
# print(message)
#
# #创建变量我们在PYTHON里的创建方法非常的简单
# #变量名称只包含数字 字母 下划线
# #变量的命名不能使用数字开头但是可以用下划线
# 1111111111111111111111111111111111111111111111111111
# 然后我们学习3个函数，修改字符串的大小写
# title()------首字母大写
#   upper() -----全大写
#     lower()  -----全小写
#
# 使用示例
# message="嗨嗨，来了嗷，HAnberger\n"
# print(message.lower())
# print(message.upper())
# ## 2222222222222222222222222222222222222222222222222222
#
# #测试f字符串以及花括号的应用,一般来说都是结合运用的，
# #f字符串的效果就是   在 字符串 中  显示我们变量名字中存储的值
# 在花括号内的所有值都可以被显示，这个不用慌
# 花括号的含义就是 圈出我们的变量名
#
# first_name="ada"
# last_name="lovelace"
# full_name=f"{first_name}{last_name}"
# print(full_name)
# 33333333333333333333333333333333333333333333333333333
# 删除空白
# 函数名称strip()
# 分为两类，一个是lstrip删除左侧空白,另一个是rstrip删除右侧空白
# a='   python '
# print(a.rstrip())
# b="   giao  "
# print(b.lstrip())
# c="  hehe   "
# print(c.strip())#删除所有空白
# 444444444444444444444444444444444444444444444444444444
# 列表介绍1
# 访问列表元素1
# 使用列表中的值1
# 介绍1
# bicycles=['trek','cannondale','redline','specialized']
# 2访问列表元素
# print(bicycles)
# print(bicycles[0])
# print(bicycles[0].title())
# print(bicycles[4])#错误示范#在python中，我们的列表即为我们所熟悉的数组，其索引即是我们元素的序号，仍为从0开始
# 如果我们想要输出列表里面最后一个元素，我们就可以用负数来表示
# print(bicycles[-1])
# ############################
# 3使用列表中的元素如下
# message=f"my first bicycles was a {bicycles[0].title()}."
# print(message)
# print(f"my first bicycles was a {bicycles[0].title()}.")
# #55555555555555555555555555555555555555555555555555555
# 修改列表元素
# 1替换  直接赋值  2 添加 append（在列表末尾）  3插入  insert  4删除 del pop remove
# 将列表中的第一个元素改为ducati
# motorcycles=['honda','yamaha','suzuki']
# print(motorcycles)
# motorcycles[0]='ducati'
# print(motorcycles)
# 在列表末尾添加元素 函数append
# 使用函数 append
# motorcycles=['honda','yamaha','suzuki']
# motorcycles.append("ducati")
# print(motorcycles)
# 方法2222222222222方法222222222222方法222222222方法2222222222
# motorcycles=[]
# #创建空列表用中括号# #创建空列表用中括号# #创建空列表用中括号# #创建空列表用中括号
# #创建空列表来输入元素
# motorcycles.append("honda")
# motorcycles.append("yamaha")
# motorcycles.append("suzuki")
# motorcycles.append("sukati")
# print(motorcycles)
# 在列表中插入元素 insert
# motorcycles=["honda",'yamaha','sukati']
# print(motorcycles)
# motorcycles.insert(0,'dukati')#在第一个元素那里插入
# print(motorcycles)
# 从列表中删除元素# 从列表中删除元素# 从列表中删除元素# 从列表中删除元素
# 使用del语句删除元素
# motorcycles=["honda",'yamaha','sukati']
# print(motorcycles)
# del motorcycles[0]
# print(motorcycles)
# del motorcycles[1]
# print(motorcycles)
# 方法22222222222方法2222222方法2222222222方法222222方法2222
# 使用方法pop()
# 这个方法有些特别，可以理解为它是把我们列表中的元素弹出来了
# motorcycles=["honda",'yamaha','dukati']
# print(motorcycles)
# popped_motorcycle=motorcycles.pop()
# print(motorcycles)
# print(popped_motorcycle)
# 我们引入这个pop()实际上是为了我们再继续使用这个元素，而不是彻底的删除，我们把它拉带
# 一个额外的地方去，能够让我们继续对其进行操作
# motorcycles=["honda",'yamaha','sukati']
# first_owned=motorcycles.pop(0)
# print(f"The first motorcycle I owned was a {first_owned.title()}.")
# 方法3333333方法333333333方法3333333333333方法33333333333333
# 根据值删除元素
# motorcycles=["honda",'yamaha','sukati']
# print(motorcycles)
# motorcycles.remove('honda')
# print(motorcycles)
#
# motorcycles.remove('honda') 此处让Python确定honda出现在在列表的什么地方，并将该元素删除
# 我们使用remove从列表中删除元素时，也可以接着使用它的值。
# motorcycles={'honda','yamaha','suzuki','ducati'}
# print(motorcycles)
# too_expensive='honda'#有意思的是元素赋给变量之后，我们依然可以通过变量找到列表中元素的位置
# motorcycles.remove(too_expensive)#motorcycles.remove('honda')  都是一样的
# print(motorcycles)
# print(f"\nA {too_expensive.title()} is too expensive for me.")
# 666666666666666666666666666666666666666666666666666666
# 一字母排序 1 永久排序sort   2  临时排序sorted  二逆序 3reversed 三 确定长度4 len
# 使用方法sort()对列表永久排序
# 按字母顺序排序
# cars=['bmw','audi','toyota','subaru']
# cars.sort()
# print(cars)
# sort()所做出的排序 是永久排序 是无法改变的，是永久的
# 我们想要逆序打印的话，需要使用参数 reverse=True
# cars=['bmw','audi','subaru','toyota']
# cars.sort(reverse=True)
# print(cars)
# 2 列表 临时排序sorted()
# 同样是字母排序
# cars={'bmw','audi','toyota','subaru'}
# print(cars)
# print("排序后\n")
# print(sorted(cars))
# print(sorted(cars,reverse=True))#逆序打印
# print("原列表\n")
# print(cars)
# 3 永久逆序排序
# cars=['bmw','audi','toyota','subaru']
# reversed(cars)#和书上的有所不同，我也不知道为啥
# print(cars)
# 理论上来说，我们的列表顺序是永久的，但是也可以还原回原先的顺序，只需要在对其进行一次reserved（）
# 4  确定列表的长度
# tcars=['bmw','audi','toyoa','subaru']
# print(len(cars))


#  第三章学习了如何创建简单的列表
# 还学习了如何操作列表元素
#第四章将学习如何遍历整个列表
# 遍历：所谓遍历(Traversal)，是指沿着某条搜索路线，依次对树（或图）中每个节点均做一次访问。访问结点所做的操作依赖于具体的应用问题， 具体的访问操作可能
# 是检查节点的值、更新节点的值等。不同的遍历方式，其访问节点的顺序是不一样的。遍历是二叉树上最重要的运算之一，是二叉树上进行其它运算之基础。
# 当然遍历的概念也适合于多元素集合的情况，如数组。
# 看不懂没什么关系，因为不是我们关注的重点，这是我从百度上自己copy的哈哈
# 示例1
#通过for循环打印魔术师名单中的名字
##
# magicians=['alice','david','carolina']
# for magician in magicians:#使用for循环，下面的循环体需要进行缩进，可以空格 可以Tab
#     print(magician)
# #深入研究循环
# magicians=['alice','david','carolina']
# for magician in magicians:
#         print(f"{magician},that was a great trick!")
#         print(f"I cannot wait to see your next trick,{magician.title()}.\n")
# print("Thank you,everone.That was a great magic show!")
#上述代码我们可以看出，如果想要将内容进行循环，必须按照一定的缩进格式，如果想要跳出循环就要进行缩进
#在python中我们自动将缩进后的内容规定为需要循环的内容
##

#第二部分创建数值列表      1函数list直接创建列表（数字列表）     2创建空列表，添加元素
# for value in range(0,5):
#     #(a,b)  起始数值a  结束数值b-1
#         print(value)
 ##
 ##要创建数字列表，可使用 函数list() 将range()的结果直接转换成列表，如果将range()作为list()的参数，
# 输出将是一个数字列表
# numbers = list(range(1, 6))
# print(numbers)
# numbers1=list(range(1,11,2))#起始值，结束值， 叠加数
# print(numbers1)
#在python 中，两个*符号表示乘方运算
# squares=[]
# for value in range(1,11):
#     # square=value**2
#     # squares.append(square)
#     # squares.append(value**2)#不使用临时变量，直接进行赋值   append函数  在列表末尾添加元素
#     # squares.insert(value,value**2)#     insert 函数  插入函数  在value 的位置  插入数值  value**2
# print(squares)
#
# 对数字列表执行简单的统计计算  几个简单的函数  min max   sum
# a=[1,2,3,4,5,6,7,8,9,10]
# print(min(a))
# print(max(a))
# print(sum(a))
##
# #列表解析
# #列表解析将for 循环  和  创建新元素的代码  合并成一行
# squares = [value**2 for value in range(1,11)]
# #  首先指定一个列表名  然后使用一个中括号 定义一个表达式 用于生成要存储到列表中的值
# #  在这个解析中 表达式为 value**2  然后编写一个for循环 用于给表达式提供值。
# #嘎嘎好用 记住这个东西儿
# print(squares)
##
##使用列表的一部分   处理列表中所有元素  以及  部分元素   称为 切片
##切片
##创造切片，指定  你自己要  使用第一个元素和最后一个元素的索引
##例如输出前三个元素
# shuzi=[1,2,3,4,5,6,7,8,9,10,11,12,13,13]
# print(shuzi[0:3])##这个[0:3]  即为切片
# print(shuzi[1:4])
# print(shuzi[:4])##没有初始索引 ，默认从0开始
# print(shuzi[3:])##默认在末尾结束
# print(shuzi[:])## #默认  就是 没有含义的切片，该怎么打印就怎么打印
# a=5
# print(shuzi[1:a])
##遍历切片
##就是运用for循环使用切片
# shuzi=[5,6,7,8,9,10,11,12,13,13]
# print("这是我们通过循环出的数字：")
# for a in shuzi[:4]:
#     print(a)
##
##复制列表
## 通过切片进行复制，空切片包含整个列表，即为列表的一个副本
# shuzi1=[3,4,5,6,1,2,3,7,4]
# shuzi2=shuzi1[:]
# print(shuzi2)
#如果我们直接使用复制，而不是通过切片将 副本 赋值给新的变量
# 那么我们如果要修改新的列表中的内容，那么原列表也会被操作
##
## 元组
##列表非常适合存储 在程序运行期间可能变化的数据集。
# 列表可以修改，但有时候需要一些不能被修改的元素，那么元组可以满足这种需求。
##定义元组  顾名思义，括号就用圆括号
##需要说明，元组是由逗号标识的，我们如果想要定义一个只包含一个元素的元组，必须在后面加上‘，’
# 例如  juxing=(3,)
# juxing=(200,50)
# print(juxing[0])
# print(juxing[1])
# juxing[0]=250#这里就会报错，因为元组无法被修改
##遍历  元组中所有的值
# a=(1,2,3,4,5)
# for b in a:
#     print(b)
##修改元组变量
##虽然不能修改元组的元素，但我们可以修改元组本身  即通过重新定义 就达到了修改元组的 目的
# a=(10,20)
# print(a)
# a=(20,1)
# print("修改后：")
# print(a)


# cars=['audi','bmw','toyota','rover']
# for a in cars:
#     if a=='rover':##if的使用
#         # print(a.upper())
#         b=f"{a.upper()}haihiahia"#浅浅复习一下f吧
#         print(b)
#print(f"{a.upper()}haihiahia")#或者这么写
#     else:
#         print(a.title())
##
##5.2  条件测试：
# #== 相等  ！=   不相等
#在python里面，&&并且就是 and   ,||或者 就是   or
##检查特定值
## 关键词in
## 如果我们想要调查某个元素  能否等于那个玩意儿
## 例如 想要知道a 在不在字母列表当中 ，我们可以用in查询  ,同样，还有not in
# zimu=['a','bda','asd','asda']
# if 'a' in zimu:
#     print("haihai")
##5.3  if-elif-else 结构
# age=12
# if age<4:
#     print("free")
# elif age<12:
#     print("halef price")
# else:
#     print("原价，木商量")
##然后剩下的用法其实也和原先差不多啦，就是if if  和if elif 的区别
##分条件合理使用好么，答应我宝贝
##5.4 用if确定列表是否空不空
# liebiao=[]
# if liebiao:
#     print("那应该是有东西")
# else:
#     print("啥也没有")

##字典
##理解字典后 就能够准确的为各种真实的物体建模
##1 浅浅写一个简单的字典
# alien_0={'color':'green','points':5}
# print(alien_0['color'])
# print (alien_0['points'])
##2使用字典
#
##字典是一些 键值对 ，每个键都与一个值相关联，他们总共形成了一个对
##通过键，我们就能够访问关联的值
##与键关联的值 可以是  数   字符串   列表    字典
##字典用放在 花括号 的中的一系列”键值 对 “来表示
##键值对是两个相关联的值。指定键时，将返回关联值。
##格式就是键和值用冒号分离，键值对用逗号分隔。
##在字典中，乡村出多少个键值对都可以
#
##2.1访问字典中的值
# zimu={'a': '天气很好'}
# print(zimu['a'])
# print(f"{zimu['a']} 今天")
# new_points=zimu['a']
# print(f"今天{new_points}")
##2.2  添加 键值对
# aline_0={'color':'green','points':'5'}
# print(aline_0)
# aline_0['x_position']=0
# aline_0['y_position']=25
# print(aline_0)
#
#创建一个空字典
# alien_0={}
# alien_0['color']='green'
# alien_0['points']=5
# print(alien_0)
#
################修改字典中的值
# aline_0={'color':'green','points':5}
# print(f"the alien is {aline_0['color']}.")
# aline_0['color']='red'
# print(f"Now the alien is {aline_0['color']}.")
# alien_0={'x_position':0,'y_position':25,'speed':'medium'}
# print(f"Orignal x-position: {alien_0['x_position']}")
# if alien_0['speed']=='slow':
#     x_increment=1


#     print("\nYou are tall enough to ride!")
# else:
#     print("\n你再长长个子吧")

# Traceback (most recent call last):
#   File "C:\Users\SP\source\python\python_learning\7_1.py", line 30, in <module>
#     if height>=48:
# TypeError: '>=' not supported between instances of 'str' and 'int'
# 这里我们出现了错误，我们通过编译器的解释发现，这里我们的数据类型出现了问题

# 我们在Input的时候，编译器默认我们输入的内容是一个字符串，是字符类型 ，但是再我们后面的代码中，我们是与 一个整型数据进行比较，数据类型不同，无法完成相应的操作
#所以我们就需要进行函数int()转换我们的数据类型，进行打印

# height =input("How tall are you")
# height=int(height)
# if height>=48:
#     print("\nYou are tall enough to ride!")
# else:
#     print("\n你再长长个子吧")

#7.1.3
#求模运算符 %
#没有必要了吧 就这些东西，不至于再说弄个程序写啊啥的

#7.2 while 循环简介

# curren_number=1
# while curren_number<=5:
#     print(curren_number)
#     curren_number+=1

#循环输入，直至用户想要推出该程序

# promot="快写点东西给我测试用 "
# promot+="\n哥们，来一个赖： "
# message=""
# while message!='quit':
#  message=input(promot)
#  print(f"{message} \n那个输入‘quit’就退出了\n")

#我们对该程序再次进行一点改进，上一个程序中，我们将关闭循环的钥匙 'quit' 同样也打印出来，这是一个美中不足之处
#对此我们进行修改

# promot="快写点东西给我测试用 "
# promot+="\n哥们，来一个赖： "
# message=""
# while message!='quit':
#  message=input(promot)
#  if message!='quit':
#   print(f"{message} \n那个输入‘quit’就退出了\n")

#7.2.3
#使用标志：

#标志很像我们之前的flag ，我们通过标志 作为循环条件，当我们的标志为假的时候则跳出循环。使代码更加简洁明了
#我们将对之前的程序进行标志添加

# promot="快写点东西给我测试用 "
# promot+="\n哥们，来一个赖： "
# message=""
# active=True
# while active:
#  message=input(promot)
#  if message=='quit':
#      active=False
#  else:
#   print(f"{message} \n那个输入‘quit’就退出了\n")

#7.2.4  跳出循环break

# promot="快写点东西给我测试用 "
# promot+="\n哥们，来一个赖： "
# message=""
# while True:
#  message=input(promot)
#  if message=='quit':
#      break
#  else:
#   print(f"{message} \n那个输入‘quit’就退出了\n")

#7.2.5  在循环中使用continue

#打印奇数循环

# count=0
# while count<10:
#     count+=1
#     if count%2==0:
#         continue
#     print(count)

#7.2.6 避免无限循环
#记得避免哈哈哈，例子没用，单纯的提醒你
#7.3 使用while循环出列列表和字典

#7.3.1在列表之间移动元素

# #首先，创建一个待验证用户列表
# #和一个用于存储已验证用户的空列表
# u_users=['daming','lihua','lili']
# c_users=[]
# #验证每个用户，直到没有未验证的用户为止
# #将每个经过验证的用户  都移动到  已验证用户列表中
# while u_users:
#     c_user=u_users.pop()
#     print(f"user is {c_user.title()}")
#     c_users.append(c_user)
# print("\n c_users are here")
# for a in c_users:
#     print(a.title())
#     print(u_users)

#7.3.2 删除为特定值的所有列表元素
#我们使用的函数是第三章李的remove()

# pets=['dogs','cat','dog','goldfish','cat','rabbit','cat']
# print(pets)
#
# while 'cat' in pets:
#     pets.remove('cat')
# print(pets)

# 7.3.3 使用用户输入来填充字典

responses={}
polling_active=True
while polling_active:
    name=input("\nWhat is your name: ")
    response=input("你和谁是好朋友")
    responses[name]=response
    repeat=input("还有人要参与么么？ YES \ NO")
    if repeat=='NO':
        polling_active=False
print("------程序的结果是--------")
for name,response in responses.items():
    print(f"{name} 的好朋友是{response}")

    #     print("HELLO!这是我的第一个python 所实现的函数！")
    #
    # greet_user()

    # 函数该如何定义： 使用 def 语句 然后添加函数名称 greet_user  加上括号 然后冒号开始定义
    # """ """"被成之为文档字符串的注释，描述函数是做什么的

    # 8.1.1 向函数传递信息

    # def greet_user(name):
    #     print(f"Hello,{name.title()}!")
    # greet_user('sunpeng')#很像传递参数

    # 在函数的圆括号里添加变量，令函数接受我们给变量指定的任何值，在我们调用的时候就可以传递给它

    # 8.1.2  实参和形参
    # 实参即我们在调用函数时传递的参数， 形参就是我们函数内部接收的值

    # 8.2 传递实参
    # 函数定义中可能包含多个形参，因此函数调用中也可能包含多个实参。
    # 向函数传递实参的方式有很多，可以使用位置实参，这要求实参的顺序和形参的顺序相同，也可以使用关键字实参，其中每个实参都由变量名和值组成，还可以使用列表和字典。
    # 后面将依次介绍

    # 8.2.1 位置实参

    # def describe(animal,name):
    #     """显示动物信息"""
    #     print(f"\n I have a {animal}.")
    #     print(f"my{animal}'s name is {name}")
    # describe('cat','miaomiao')

    # 8.2.2

    # def describe(animal,petname):
    #     """显示动物信息"""
    #     print(f"\n I have a {animal}.")
    #     print(f"my{animal}'s name is {petname}")
    # # describe('cat','miaomiao')
    # describe(animal='cat',petname='lili')
    # describe(petname='lili',animal='cat')

    # 关键字实参是传递给函数的名称值对。因为直接在实参中将名称和值关联起来，所以向函数传递实参的时候不会混淆,即使交换顺序，也不会乱套

    # 8.2.3 默认值
    # 编写函数的时候可以给每个形参指定 默认值。
    # 在调用函数中给形参提供了实参时，python将使用指定的实参值内容。 否则将使用形参的 默认值
    # 指定默认值，可以在函数调用中省略相应的形参。
    # 使用默认值可以简化函数调用，更加清楚函数的典型用法

    # # def describe(animal='cat',petname):  这里的顺序有固定用法
    # def describe(petname,animal='cat'):
    #     """显示动物信息"""
    #     print(f"\n I have a {animal}.")
    #     print(f"my{animal}'s name is {petname}")
    # describe(petname='longlong')
    # describe(petname='lili',animal='dog')# 我们修改值，会忽略默认值，默认值这里可以认为是保底的

    # 8.2.4 等效的函数调用
    # 直接输入参数，或者使用变量传参，这些都是函数调用的等效方式

    # 8.2.5 避免实参错误
    # 避免或多或少参数

    # 8.2.6 返回值
    # 函数并非总是直接显示输出，它还可以处理一些数据，并返回1个或者1组值。
    # 在函数中，可使用return语句将值返回到调用函数的代码行

    # 8.3.1 返回简单值

    # def get_name(fname,lname):
    #     """返回整洁的姓名"""
    #     fullname=f"{fname} {lname}"
    #     return fullname.title()
    # myname=get_name('da','ming')
    # print(myname)

    # 8.3.2 让实参变成可选的

    # 我们使用默认值将可能不会传递的参数进行操作，令 实参变成可选的

    # def get_name(fname,lname,midname=''):
    #     """返回整洁的姓名"""
    #     if midname:
    #         fullname=f"{fname} {midname} {lname}"
    #     else:
    #         fullname=f"{fname} {lname}"
    #     return fullname.title()
    # myname=get_name('zhang','ming')
    # print(myname)
    # myname2=get_name('zhang','ming','da')
    # print(myname2)

    # 8.3.3 返回字典
    # 函数可返回任何类型的值，包括列表和字典等较复杂的数据结构。例如，下面的函数接受姓名的组成部分，并返回一个表示人的字典。

    # def build(fname,lname):
    #     person={'fist_name':fname,'last_name':lname}
    #     return person
    # musican=build('da','ming')
    # print(musican)

    # 这个函数还可以进行扩展，使其接受可选值。

    # def build_person(fname,lname,age=None):
    #     """返回一个字典，其中包含有一个人的信息"""
    #     person={'fist_name':fname,'last_name':lname}
    #     if age:
    #         person['age']=age
    #     return person
    # musican=build_person('da','ming',age=27)
    # print(musican)

    # 说实话，我觉得这个挺离谱的，但这就是python的语法特点嘛
    # 分析一下哈，在函数定义中，新增了一个可选的形参age，并将其默认值设置为特殊值None(表示变量没有值）
    # 我们可以将None 视为占位值。
    # 在条件测试里，None相当于False
    # ******* 如果函数调用中包含形参age的值，这个值将被存储到字典当中。  *******
    # 在任何情况下，这个函数都会存储人的姓名，但可以进行修改，使其同时存储有关人的其他信息

    # 8.3.4 结合使用函数和while循环

    # def build(fname,lname):
    #     person=f"{fname}{lname}"
    #     return person
    # # 无限循环
    # while True:
    #     print("告诉哥，你的名字：")
    #     fname=input("first_name")
    #     lname=input("last_name")
    #
    #     fullname=build(fname,lname)
    #     print(f"hello！ {fullname}")

    # 终止无限循环版本，加一个条件然后随便break一下就好了，简简单单

    # def build(fname,lname):
    #     person=f"{fname}{lname}"
    #     return person
    # # 无限循环
    # while True:
    #     print("告诉哥，你的名字")
    #     print("想退出么？想退出就输入 哥最帅 。")
    #     fname=input("first_name：")
    #     if fname=="哥最帅":
    #         break
    #     lname=input("last_name：")
    #     if lname=="哥最帅":
    #         break
    #
    #     fullname=build(fname,lname)
    #     print(f"hello！ {fullname}")

    # 8.4 传递列表
    # 向函数传递列表很有用，下面一个例子，向列表中所有人打招呼

    # def fun(name):
    #     for a in name:
    #         message=f"Hello, {a.title()}!"
    #         print(message)
    # name=['daming','lihua','lili','longlong']
    # fun(name)

    # 8.4.1在函数中修改列表
    # 将列表传递给参数后，函数就可以对其进行修改，在函数中对列表的任何修改都是永久性的 永久性 永久性 永久性

    # """首先创建一个列表，其中包含一些要打印的设计"""
    # design=['a','b','c']
    # completed_design=[]
    # """模拟打印每个设计，直到没有未打印的设计为止"""
    # """打印每个设计后，都将其移动到列表completed_design中"""
    # while design:
    #     current_design=design.pop()
    #     print(f"print model: {current_design}")
    #     completed_design.append(current_design)
    # #显示打印好的模型
    # print("打印好的模型有：")
    # for a in completed_design:
    #     print(a)
    #     print(design)#看看是不是已经被修改了

    # 为了提高效率，我们编写两个函数 一个负责处理打印设计，另一个概述打印了哪些内容

    # def print_moedels(un_designs,co_designs):
    #     """
    #     模拟打印每个设计，直到没有未打印的设计为止
    #     打印每个设计后，都将其移动到列表co_designs
    #     """
    #     while un_designs:
    #         current_design=un_designs.pop()
    #         print(f"打印：{current_design}")
    #         co_designs.append(current_design)
    # def show_completed_models(co_designs):
    #     """显示打印好的所有模型类型"""
    #     print(f"\n这些模型被打印了")
    #     for a in co_designs:
    #         print(a)
    # un_designs=['a','b','c']
    # co_designs=[]
    # print_moedels(un_designs,co_designs)
    # show_completed_models(co_designs)

    # 8.4.2 禁止函数修改列表：
    # 有时候需要禁止函数修改列表，我们以 上面的代码为例
    # 如果我们需要保存un_designs列表，那么我们可以使用传递列表的副本而非原件的方法保存un_designs

    # #要将列表的副本传递给函数，可以这么做：
    # function_name(list_name[:])
    # # 切片表示法[:] 创建列表的副本，在上一个程序中，如果不想清空未打印的设计列表，可以参考下面的函数调用方式：
    # print_models(un_designs[:],co_designs)

    # def print_moedels(un_designs, co_designs):
    #     """
    #     模拟打印每个设计，直到没有未打印的设计为止
    #     打印每个设计后，都将其移动到列表co_designs
    #     """
    #     while un_designs:
    #         current_design=un_designs.pop()
    #         print(f"打印：{current_design}")
    #         co_designs.append(current_design)
    # def show_completed_models(co_designs):
    #     """显示打印好的所有模型类型"""
    #     print(f"\n这些模型被打印了")
    #     for a in co_designs:
    #         print(a)
    # un_designs=['a','b','c']
    # co_designs=[]
    # print_moedels(un_designs[:],co_designs)#*********修改点***********，传递一个列表副本
    # show_completed_models(co_designs)

    # 8.5 传递任意数量的实参
    # 有时候不知道函数需要接受多少个实参，但是python允许函数从调用语句中收集任意数量的实参

    # def make_pizza(*toppings):
    #     """打印顾客点的所有配料"""
    #     print(toppings)
    # make_pizza('pepperoni')
    # make_pizza('mushrooms','green peppers','extra cheese')

    # 形参名*toppings中的星号* 让python创建一个名为toppings的空元组，并将收到的所有制封装到这个元组中。
    # 函数体内的函数调用print()通过生成输出，

    # #将print()替换成一个循环，遍历配料列表并对顾客点的比萨进行描述：
    # def make_pizza(*topppings):
    #     print("这些是比萨的配料：")
    #     for a in topppings:
    #         print(f" {a}")
    # make_pizza('a')
    # make_pizza('b','c','d','e')

    # 8.5.1 结合使用位置实参和任意数量实参
    # 如果让函数接受不同类型的实参，必须在函数定义中将接纳任意数量实参的形参放在最后。
    # python先匹配位置实参和关键字实参  ，再将余下的实参都收集到最后一个形参中

    # def make_pizza(size,*toppings):  # 接受列表
    #     """概述要制作的比萨"""
    #     print(f"要制作{size}型号的比萨")
    #     for a in toppings:
    #         print(f"这些配料为{a}")
    # make_pizza(12,'a','b','c')

    # 8.5.2 使用任意数量的关键字实参
    # 有时候，需要接受任意数量的实参，但预先不知道传递给函数的会是什么样的信息。
    # 这个时候，可将函数编写成能够接受任意数量的键值对--调用语句提供了多少就接受多少
    # 创建用户简介：

    # def build(first,last,**user_info):# 接受字典
    #     """创建一个字典，其中包含我们知道的有关用户的一切内容"""
    #     user_info['fname']=first
    #     user_info['lname']=last
    #     return user_info
    # user_profile=build('a','e',location='weifang',field='physics')
    # print(user_profile)

    # 8.6 将函数存储在模块当中
    # 我们使用函数的时候，可以将其存储在独立的文件当中，隐藏函数的代码细节，将重点放在程序的高层逻辑
    # 下面我们将讲解 将 函数导入到模块中的多种方法

    # 8.6.1  导入整个模块
    # import语句  import语句允许在当前运行的程序文件中使用模块的代码

    # def make_pizza(size,*toppings):
    #     """概述要制作的比萨"""
    #     print(f"老八会为你制作一个{size}的比萨，带有这些配料：")
    #     for a in toppings:
    #         print(f"-{a}")

    # import pizza_hanshu
    # pizza_hanshu.make_pizza(16,'e')

    # 8.6.2 导入特定的函数
    # 导入格式录下
    # from module_name import function_name
    # 通过逗号分隔函数名，可根据需要从模块中导入任意数量的函数
    # from module_name import function1,function2,fuction3

    # 8.6.3使用as 给函数指定别名
    # 如果要导入的函数名称可能与程序中现有的名称冲突，或者函数的名称太长，可指定简短而独一无二的别名

    # from pizza_hanshu import make_pizza as mp
    # mp(12,'a','v','d')

    # 8.6.4  使用 as 给模块指定别名
    # 我们可以给模块指定别的名称，通过给模块指定简短的别名，让你能够更轻松地调用模块中的函数 相比于 pizza_hanshu.make_pizza()  p.make_pizza() 更加简洁

    # import pizza_hanshu as p
    # p.make_pizza(13,'a','b','c')

    # 8.6.5导入模块的所有函数
    # 使用*星号运算符可以让python导入模块中的所有函数：

    # from pizza_hanshu import *
    # make_pizza(12,'a')

    # import 语句中的星号让python将模块pizza中的每一个函数都复制到这个程序文件中
    # 由于导入了每个函数，可通过名称来调用每个函数，而无需使用句点表示法
    # 但是这种操作还是有风险的，当python 遇到多个名称相同的函数或者变量，它将进而覆盖函数，而不是分别倒入所有的函数
    # 最佳的做法是，要么汁倒入需要使用的函数，要么导入整个模块并使用句点表示法
    # 我们讲这个只是为了别人写的时候你能看懂这是什么东西

    # 8.7  函数编写指南
    # 编写函数是，需要牢记几个细节，给函数指定描述性名称，只使用小写字母和下划线
    # 每个函数都应该简要的阐述其功能的注释



#         """模拟小狗收到命令时蹲下"""
#         print(f"{self.name} 现在坐下了")
#
#     def roll_over(self):
#         """模拟小狗收到命令时打滚"""
#         print(f"{self.name} 打滚了")

#看起来我们接触到了很多新知识，需要注意的小细节也有很多，但是不要害怕，后面全是，慢慢熟悉呗咱就是说
#根据约定： 首字母大写的名称指的是类
#这个类定义中没有圆括号，因为要从空白创建这个类
#"""这个表示文档字符串，对功能进行简单的描述"""

#方法   _init_()
#类中的函数称作方法，我们在前面学到的有关函数的一切都适用于方法， 就目前而言，唯一重要的差别是
#调用方法的方式
#_init_() 是一个特殊的方法 每当你根据Dog类创建新实例的时候，python就会自动运行它
#在这个方法的名称中，开头和末尾各有两个下划线，这是一种约定，旨在避免 python默认方法与普通方法发生名称冲突。
#我们应当务必确保 _init_()的两边各有一个下划线，否则当你使用类来创建例的时候，将不会自动调用这个方法，进而引发难以发现的错误

# 我们在上面的例子当中，使用了三个形参， self name age 。在这个方法的定义中，形参self 必不可少，而且必须位于其他形参的前面
#为什么  因为 python调用这个方法创建Dog的时候，将自动传入实参self。
#每个与 实例相关联的方法调用都自动传递实参self,它是一个指向实例本身的引用，让实例能够访问类中的属性和方法。
#创建Dog实例时，python将调用 Dog类的方法_init_()
#我们将 通过实参，向Dog中传递名字和年龄，self会自动传递，因此不需要传递它
#弄不明白你就记住，就当是科学道理，不说也可以

#以self为前缀的变量可以在类中的所有方法（函数）使用
#可以通过类的任何实例来访问
#self.name=name 获取与形参相关联的值 并将其值赋给变量self.name，然后该变量被关联到当前创建的实例，
#像这样通过实例访问的变量称为属性

#9.1.2 根据类创建实例
# 可将类看作有关如何创建实例的说明，Dog类是一系列说明，让python知道如何创建表示特定小狗的实例
#我们下面创建一个表示特定小狗的实例

# class Dog:
#     """一次模拟小狗的简单尝试"""
#     def __init__(self, name, age):###两个下划线
#         """初始化name 和 age"""
#         self.name = name
#         self.age = age
#
#     def sit(self):
#         """模拟小狗收到命令时蹲下"""
#         print(f"{self.name} 现在坐下了")
#
#     def roll_over(self):
#         """模拟小狗收到命令时打滚"""
#         print(f"{self.name} 打滚了")
#
# my_dog = Dog('lili', 6)
#
# print(f"我狗名字是{my_dog.name}")
# print(f"今年岁数：{my_dog.age}")

# 访问属性，可使用句点表示法

#2，调用方法
#根据Dog类创建实例后，就能使用句点表示法来调用Dog类中定义的任何方法了

#我们承接上面的程序

# class Dog:
#     """一次模拟小狗的简单尝试"""
#     def __init__(self, name, age):###两个下划线
#         """初始化name 和 age"""
#         self.name = name
#         self.age = age
#
#     def sit(self):
#         """模拟小狗收到命令时蹲下"""
#         print(f"{self.name} 现在坐下了")
#
#     def roll_over(self):
#         """模拟小狗收到命令时打滚"""
#         print(f"{self.name} 打滚了")
#
# my_dog = Dog('lili', 6)
#
# print(f"我狗名字是{my_dog.name}")
# print(f"今年岁数：{my_dog.age}")
# my_dog.sit()
# my_dog.roll_over()
# #hhhhhhhhh

#3.创建多个实例
#哥要下班了
#11






















































