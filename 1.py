# #打印字典  **kwargs 解决传入的关键词参数的数量可变的情况
# #def human(gender, height,**kwargs):
# print('gender', gender)
# print('height', height)
# for key, value in kwargs.items():
# print(key,":", value)
# human('female', 180, weight=60, ability='mind-control')
#
# gender female
# height 180
# weight : 60
# ability : mind-control
#
# – 函数定义时– *可以将按位置传递进来的参数“打包”成元组(tuple)类型
# **可以将按关键字传递进来的参数“打包”成字典(dictionary)类型
# #
# 函数调用时（了解）• *可以“解压”待传递到函数中的 元组、列表、集合、字符串等类型，
# 并按位置传递到函数入口参数中**可以“解压”待传递到函数中的字典，并按关键字传递到函数入口参数
# #
# #lamba函数      a=lamba x,y,z:1+2*x+y*y+y*z     a(1,2,3) 结果为13
# #
# #filter(function,list): 调用filter()时，其会把一个函数应用于序列中的每个项，
# # 并返回该函数返回真值时的所有项，从而过滤掉返回假值的所有项。
# • map(function,list[,list])：调用map()时，其把一个函数应用于序列中所有项，并返回一个列表。
# • reduce(function,seq[,init]) :调用reduce()时，其获得序列中前两个项，
# 并把它传递给提供的函数，获得结果后再取序列中的下一项，连同结果再传递给函数，
# 以此类推，直到处理完所有项为止。
# • zip(seq[,seq,...]) :调用 zip()时，其可把两个或多个序列中的相应项合并在一起，
# 并以元组的格式返回它们，在处理完最短序列中的所有项后就停止
# #
#