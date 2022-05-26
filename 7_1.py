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

