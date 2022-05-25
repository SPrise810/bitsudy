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












