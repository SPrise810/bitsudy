#看完类的简介，我只觉得类很牛逼
#python也很牛逼，而只有我再越来越牛逼的道路上
#

#9.1 创建和是使用类
# 使用类几乎可以模拟任何东西，下面来编写一个表示小狗的简单类dog 它表示的不是特定的小狗，而是任何的小狗
#我们知道狗嘛，它也有名字 年龄   它会蹲下，打滚
#根据狗 类创建的每个实际的例子都将存储名字和年龄，我们赋予了每条小狗蹲下（sit()) 和打滚（roll_over()) 的能力：

class Dog:
    """一次模拟小狗的简单尝试"""
    def _init_(self,name,age):
        """初始化name 和 age"""
        self.name=name
        self.age=age

    def sit(self):
        """模拟小狗收到命令时蹲下"""
        print(f"{self.name} 现在坐下了")

    def roll_over(self):
        """模拟小狗收到命令时打滚"""
        print(f"{self.name} 打滚了")

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













































