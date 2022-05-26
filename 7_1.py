# 第七章啦哈哈
#第七章： 用户的输入和while循环
#7.1 函数input() 的工作原理

# message=input("告诉我随便什么东西，然后我将在还给你：")
# print(message)

# 函数input()  接受一个参数---向用户显示的提示（prompt)或 说明。  让用户知道该如何做

#有时候提示超过了一行，我们将提示赋给一个变量

# promot="你好，哥们，这是我写的python 程序，目的是测试输入"
# promot+="\n 方便输入你的姓名么，哥们： "
# a=input(promot)
# print(a)
# #这里我们使用+=运算符，方便我们的程序显得好看，其实没啥意思，但是可以顺便了解一下咱们这个+=的用法

#7.1.2  使用int()来获取数值输入
#在实际程序中我们进行测试

# height =input("How tall are you")
# if height>=48:
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


















