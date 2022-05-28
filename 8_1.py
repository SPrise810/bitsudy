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

def describe(animal,petname):
    """显示动物信息"""
    print(f"\n I have a {animal}.")
    print(f"my{animal}'s name is {petname}")
# describe('cat','miaomiao')
describe(animal='cat',petname='lili')

#关键字实参是传递给函数的名称值对


















