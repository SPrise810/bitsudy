def make_pizza(size, *toppings):
    """概述要制作的比萨"""
    print(f"老八会为你制作一个尺寸为{size}的比萨，带有这些配料：")
    for a in toppings:
        print(f"-{a}")
#这是8.6.1 的函数模块嘿嘿