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
# elif alien_0['speed']=='medium':
#     x_increment=2
# else:
#     x_increment=3
# alien_0['x_position']=alien_0['x_position']+x_increment
# print(f"new x_position is {alien_0['x_position']}")
#
#######6.2.5删除键值对
# aline_0={'color':'green','points':5}
# print(aline_0)
# del aline_0['points']
# print(aline_0)
##由类似对象组成的字典
# favourite_languages={'jen':'python',
#                      'sarash':'c',
#                      'edward':'ruby',
#                      'phil':'python'}
# language=favourite_languages['sarash'].title()
# print(f"Sarah's favortie language is {language}.")
##
##6.2.7使用get()来访问值
# aline_0={'color':'green','points':5}
# a=aline_0.get('points','NO speed value assigned.')
# print(a)
# a=aline_0.get('speed','NO speed value assigned.')
# print(a)
# a=aline_0.get('speed')
# print(a)
#我们要表达的意思是，get表达式是直接通过键访问字典中的内容
# 如果没有的话就读取键 后面的内容
#没有逗号后面的内容就输出 none
##6.3.1 遍历所有键值对
# user_0={
#     'username':'efermi',
#     'first':'enrico',
#     'last':'fermi',
# }
# #for循环遍历
# for a,b in user_0.items():
#     print(f"\nKey:{a}")
#     print(f"Value:{b}")
#####如果不加items
# user_0={
#     'username':'efermi',
#     'first':'enrico',
#     'last':'fermi',
# }
# #for循环遍历
# for a,b in user_0():
#     print(f"\nKey:{a}")
#     print(f"Value:{b}")
# # TypeError: 'dict' object is not callable
# #我们要记住在for循环遍历中想要打印键值对列表需要 添加 字典名.items()
#.items()将返回一个键值对列表赋值给指定的变量 a,b（上面的代码）
# favourite_languages={'jen':'python',
#                      'sarash':'c',
#                      'edward':'ruby',
#                      'phil':'python'}
# for a,b in favourite_languages.items():
#     print(f"{a.title()}'s favorite is {b.title()}")
##
#遍历字典中的所有键
# favourite_languages={'jen':'python',
#                      'sarash':'c',
#                      'edward':'ruby',
#                      'phil':'python'}
# for name in favourite_languages.keys():
#     print(f"{name}")
##
#
# favourite_languages={'jen':'python',
#                      'sarash':'c',
#                      'edward':'ruby',
#                      'phil':'python'}
# friends=['phil','sarash','jen','edward']
# if'erin'not in favourite_languages.keys():
#     print("Erin,please take our poll!")
# for name in favourite_languages.keys():
#     print(f"{name.title()}.")
#     if name in friends:
#         language=favourite_languages[name].title()
#         print(f"\t{name.title()},I see you love {language}.")
##
#6.3.3按照特定顺序遍历字典中的所有键
#使用函数sorted () 对列表进行字母顺序的排序，不会改变字典的初始排序
# favourite_languages={'jen':'python',
#                      'sarash':'c',
#                      'edward':'ruby',
#                      'phil':'python'}
# for name in sorted(favourite_languages.keys()):
#     print(f"{name.title()},thank you for taking the poll.")
##
###6.3.4遍历字典中的所有值
#类比于keys ()
#使用values()来返回字典中的值
# favourite_languages={'jen':'python',
#                      'sarash':'c',
#                      'edward':'ruby',
#                      'phil':'python'}
# for language in favourite_languages.values():
#     print(f"{language}")
# #我们想要去重（去掉重复的）
# #使用了set()函数
# print("以下数据经过了去重处理")
# for language in set(favourite_languages.values()):
#     print(language.title())
##
#嵌套
#有时候我们需要将一系列列表存储在列表当中
# 或者将列表作为值存储在字典中，这称为嵌套
#嵌套比较牛逼，不要小看
# #字典列表
# alien_0={'color':'green','points':'5'}
# alien_1={'color':'red','points':'10'}
# alien_2={'color':'yellow','points':'15'}
# aliens=[alien_0,alien_1,alien_2]
# for alien in aliens:
#     print(alien)
#
#更加符合现实情况下的情形是，外星人不止三个，且每个外星人都是通过代码自动生成的。  我们下面的例子将使用range（）函数生成三十个外星人
#
#创建一个用于存储外星人的空列表
# aliens=[]
# #创建30个绿色的外星人
# for alien_number in range(30):
#     new_alien={'color':'green','points':5,'speed':'slow'}
#     aliens.append(new_alien)
# #显示前五个外星人
# for alien in aliens[:5]:
#     print(alien)
# print("...")
# #
# #显示创建了多少个外星人
# print(f"总共有这些个外星人{len(aliens)}")

#range()函数，唯一的用途就是告诉python我们将要u寻你换多少次
#append函数 在末尾添加元素
#切片[:5]
#len() 检测长度函数

#程序修改2.0
#我们想到在必要的时候，我们会使用for循环和 if 语句来修改某些外星人的颜色。
#例如要将前三个外星人修改为黄色、 速度中等 且 值 为10分
# 可以这样做
#创建一个用于存储外星人的空列表
# aliens=[]
## 创建30个绿色的外星人
# for alien_number in range(30):
#     new_alien={'color':'green','points':5,'speed':'slow'}
#     aliens.append(new_alien)
#
# for alien in aliens[:3]:
#     if alien['color'] =='green':
#         alien['color']='yellow'
#         alien['speed']='medium'
#         alien['points']=10
#
# #显示前五个外星人
# for alien in aliens[:5]:
#     print(alien)
# print("...")
# #
# #显示创建了多少个外星人
# print(f"总共有这些个外星人{len(aliens)}")

###6.4.2
#有时候我们需要将列表存储在字典中 ， 而不是将字典存储在列表中
# 你如何描述顾客点的比萨呢？ 如果只是使用列表，那么我们只能存储要添加的比萨调料，但如果使用字典，就不仅可在其中包含配料列表， 还可包含其他有关披萨的描述
# 在下面的例子中，我们存储了比萨的两方面信息 外皮类型和 配料列表
# 配料列表 只是一个与 键 'toppings' 相关联的值
#
# 存储所点的比萨的信息
# pizza={
#     'crust':'thick',
#     'toppings':['mushrooms','extra cheese'],
#       }
#
# #概述所点的比萨
# print(f"你点的是{pizza['crust']}- crust pizza."
#       "带有这些toppings")
# for topping in pizza['toppings']:
#     print("\t"+topping)
#
# #另外一个嵌套示例
# f_l={
#     'jen':['python','rhby'],
#     'sarash':['c'],
#     'edward':['ruby','gp'],
#     'phil':['python','haskell'],
#     }
# for name,languages in f_l.items():
#     print(f"\n{name.title()}'s favorite language are:")
#     for language in languages:
#         print(f"\t {language.title()}")

#6.4.3在字典中存储字典
#在下面的程序中，存储了每位用户的三项信息： 名 姓 居住地
users={
    'daming':{    'a':'wang',
    'last':'daming',
    'location':'shandong',
    },
    'lihua':{
            'a':'li',
        'last':'hua',
'location':'paris',
    }
}
for username,user_info in users.items():
    print(f"\n Username :{username}")
    full_name=f"{user_info['a']}{user_info['last']}"
    location=user_info['location']

    print(f"\t full name:{full_name.title()}")
    print(f"\t location:{location.title()}")




















