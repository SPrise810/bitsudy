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

def print_moedels(un_designs, co_designs):
    """
    模拟打印每个设计，直到没有未打印的设计为止
    打印每个设计后，都将其移动到列表co_designs
    """
    while un_designs:
        current_design=un_designs.pop()
        print(f"打印：{current_design}")
        co_designs.append(current_design)
def show_completed_models(co_designs):
    """显示打印好的所有模型类型"""
    print(f"\n这些模型被打印了")
    for a in co_designs:
        print(a)
un_designs=['a','b','c']
co_designs=[]
print_moedels(un_designs[:],co_designs)#*********修改点***********，传递一个列表副本
show_completed_models(co_designs)











