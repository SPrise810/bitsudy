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


