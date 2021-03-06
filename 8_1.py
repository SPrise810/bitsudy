#第八章： 函数
#在本章，我们将学习编写函数
#函数是待名字的代码块，用于完成具体的工作

#8.1 定义函数

# def greet_user():
#     """显示简单的问候语"""
#     print("HELLO!这是我的第一个python 所实现的函数！")
#
# greet_user()

#函数该如何定义： 使用 def 语句 然后添加函数名称 greet_user  加上括号 然后冒号开始定义
#""" """"被成之为文档字符串的注释，描述函数是做什么的

#8.1.1 向函数传递信息

# def greet_user(name):
#     print(f"Hello,{name.title()}!")
# greet_user('sunpeng')#很像传递参数

#在函数的圆括号里添加变量，令函数接受我们给变量指定的任何值，在我们调用的时候就可以传递给它

#8.1.2  实参和形参
# 实参即我们在调用函数时传递的参数， 形参就是我们函数内部接收的值

#8.2 传递实参
#函数定义中可能包含多个形参，因此函数调用中也可能包含多个实参。
#向函数传递实参的方式有很多，可以使用位置实参，这要求实参的顺序和形参的顺序相同，也可以使用关键字实参，其中每个实参都由变量名和值组成，还可以使用列表和字典。
#后面将依次介绍

#8.2.1 位置实参

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

#关键字实参是传递给函数的名称值对。因为直接在实参中将名称和值关联起来，所以向函数传递实参的时候不会混淆,即使交换顺序，也不会乱套

#8.2.3 默认值
#编写函数的时候可以给每个形参指定 默认值。
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

#8.2.4 等效的函数调用
# 直接输入参数，或者使用变量传参，这些都是函数调用的等效方式

#8.2.5 避免实参错误
#避免或多或少参数

#8.2.6 返回值
#函数并非总是直接显示输出，它还可以处理一些数据，并返回1个或者1组值。
#在函数中，可使用return语句将值返回到调用函数的代码行

#8.3.1 返回简单值

# def get_name(fname,lname):
#     """返回整洁的姓名"""
#     fullname=f"{fname} {lname}"
#     return fullname.title()
# myname=get_name('da','ming')
# print(myname)

#8.3.2 让实参变成可选的

#我们使用默认值将可能不会传递的参数进行操作，令 实参变成可选的

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

#8.3.3 返回字典
# 函数可返回任何类型的值，包括列表和字典等较复杂的数据结构。例如，下面的函数接受姓名的组成部分，并返回一个表示人的字典。

# def build(fname,lname):
#     person={'fist_name':fname,'last_name':lname}
#     return person
# musican=build('da','ming')
# print(musican)

#这个函数还可以进行扩展，使其接受可选值。

# def build_person(fname,lname,age=None):
#     """返回一个字典，其中包含有一个人的信息"""
#     person={'fist_name':fname,'last_name':lname}
#     if age:
#         person['age']=age
#     return person
# musican=build_person('da','ming',age=27)
# print(musican)

#说实话，我觉得这个挺离谱的，但这就是python的语法特点嘛
#分析一下哈，在函数定义中，新增了一个可选的形参age，并将其默认值设置为特殊值None(表示变量没有值）
#我们可以将None 视为占位值。
# 在条件测试里，None相当于False
#******* 如果函数调用中包含形参age的值，这个值将被存储到字典当中。  *******
#在任何情况下，这个函数都会存储人的姓名，但可以进行修改，使其同时存储有关人的其他信息

#8.3.4 结合使用函数和while循环

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

#8.4 传递列表
#向函数传递列表很有用，下面一个例子，向列表中所有人打招呼

# def fun(name):
#     for a in name:
#         message=f"Hello, {a.title()}!"
#         print(message)
# name=['daming','lihua','lili','longlong']
# fun(name)

#8.4.1在函数中修改列表
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

#为了提高效率，我们编写两个函数 一个负责处理打印设计，另一个概述打印了哪些内容

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

#8.4.2 禁止函数修改列表：
#有时候需要禁止函数修改列表，我们以 上面的代码为例
#如果我们需要保存un_designs列表，那么我们可以使用传递列表的副本而非原件的方法保存un_designs

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

#8.5 传递任意数量的实参
#有时候不知道函数需要接受多少个实参，但是python允许函数从调用语句中收集任意数量的实参

# def make_pizza(*toppings):
#     """打印顾客点的所有配料"""
#     print(toppings)
# make_pizza('pepperoni')
# make_pizza('mushrooms','green peppers','extra cheese')

# 形参名*toppings中的星号* 让python创建一个名为toppings的空元组，并将收到的所有制封装到这个元组中。
#函数体内的函数调用print()通过生成输出，

# #将print()替换成一个循环，遍历配料列表并对顾客点的比萨进行描述：
# def make_pizza(*topppings):
#     print("这些是比萨的配料：")
#     for a in topppings:
#         print(f" {a}")
# make_pizza('a')
# make_pizza('b','c','d','e')

#8.5.1 结合使用位置实参和任意数量实参
# 如果让函数接受不同类型的实参，必须在函数定义中将接纳任意数量实参的形参放在最后。
# python先匹配位置实参和关键字实参  ，再将余下的实参都收集到最后一个形参中

# def make_pizza(size,*toppings):  # 接受列表
#     """概述要制作的比萨"""
#     print(f"要制作{size}型号的比萨")
#     for a in toppings:
#         print(f"这些配料为{a}")
# make_pizza(12,'a','b','c')

#8.5.2 使用任意数量的关键字实参
# 有时候，需要接受任意数量的实参，但预先不知道传递给函数的会是什么样的信息。
#这个时候，可将函数编写成能够接受任意数量的键值对--调用语句提供了多少就接受多少
# 创建用户简介：

# def build(first,last,**user_info):# 接受字典
#     """创建一个字典，其中包含我们知道的有关用户的一切内容"""
#     user_info['fname']=first
#     user_info['lname']=last
#     return user_info
# user_profile=build('a','e',location='weifang',field='physics')
# print(user_profile)

#8.6 将函数存储在模块当中
# 我们使用函数的时候，可以将其存储在独立的文件当中，隐藏函数的代码细节，将重点放在程序的高层逻辑
#下面我们将讲解 将 函数导入到模块中的多种方法

#8.6.1  导入整个模块
#import语句  import语句允许在当前运行的程序文件中使用模块的代码

# def make_pizza(size,*toppings):
#     """概述要制作的比萨"""
#     print(f"老八会为你制作一个{size}的比萨，带有这些配料：")
#     for a in toppings:
#         print(f"-{a}")

# import pizza_hanshu
# pizza_hanshu.make_pizza(16,'e')

#8.6.2 导入特定的函数
#导入格式录下
# from module_name import function_name
# 通过逗号分隔函数名，可根据需要从模块中导入任意数量的函数
#from module_name import function1,function2,fuction3

#8.6.3使用as 给函数指定别名
#如果要导入的函数名称可能与程序中现有的名称冲突，或者函数的名称太长，可指定简短而独一无二的别名

# from pizza_hanshu import make_pizza as mp
# mp(12,'a','v','d')

# 8.6.4  使用 as 给模块指定别名
# 我们可以给模块指定别的名称，通过给模块指定简短的别名，让你能够更轻松地调用模块中的函数 相比于 pizza_hanshu.make_pizza()  p.make_pizza() 更加简洁

# import pizza_hanshu as p
# p.make_pizza(13,'a','b','c')

#8.6.5导入模块的所有函数
#使用*星号运算符可以让python导入模块中的所有函数：

# from pizza_hanshu import *
# make_pizza(12,'a')

#import 语句中的星号让python将模块pizza中的每一个函数都复制到这个程序文件中
#由于导入了每个函数，可通过名称来调用每个函数，而无需使用句点表示法
#但是这种操作还是有风险的，当python 遇到多个名称相同的函数或者变量，它将进而覆盖函数，而不是分别倒入所有的函数
#最佳的做法是，要么汁倒入需要使用的函数，要么导入整个模块并使用句点表示法
#我们讲这个只是为了别人写的时候你能看懂这是什么东西

#8.7  函数编写指南
#编写函数是，需要牢记几个细节，给函数指定描述性名称，只使用小写字母和下划线
#每个函数都应该简要的阐述其功能的注释














