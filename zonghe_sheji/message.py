'''


Tesseract 最初是在 1985 年至1994 年之间在布里斯托的惠昔实验室和位于格里利科罗拉多州的惠普公司开发的，1996年进行了一些更改以移植到 Windows， 并在1998 年进行了一些C++化。2005年 Tesseract 开放由 HP 采购。
自2006年以来，它是由 Google 开发的。Tesseract OCR 该软件包包含一个 OCR 引擎-libtesseract 和一个命令行程序tesseract。
 Tesseract 4 增加了一个基于 OCR 引擎的新神经网络(LSTM），该引擎专注于线路识别，但仍然支持 Tesseract 3 的传统 Tesseract OCR 引擎，该引擎通过识别字符模式来工作
 通过使用 Legacy OCR Engine 模式（-oem 0）启用与 Tesseract 3 的兼容性。
它还需要训练有素的数据文件，这些文件支持传统引擎，例如来自 tessdata 存储库的文件。
Tesseract 支持 unicode (UTF-8） ，可以开箱即用”识别 100 多种语言，
Tesseract 支持各种输出格式：纯文本，hOCR （HTML)，PDF，不可见文本的 PDF， TSV。主分支还具有 ALTO
(×ML） 输出的实验支持。
Tesseract OCR 引擎于 20世纪80 年代出现，更新迭代至今，它已经包括内置的深度学习模型，变成了十分稳健
的OCR 工具。而Tesseract 和 OpencV 的 EAST 检测器是一个很棒的组合，感兴趣的读者可参考机器之心报道。
Tesseract 支持 Unicode (UTF-8） 字符集，可以识别超过 100 种语言，还包含多种输出支持，比如纯文本、
PDF、TSV 等。但是为了得到更好的 OCR 结果，还必须提升提供给 Tesseract 的图像的质量.
值得注意的是，在执行实际的 OCR 之前，Tesseract 会在内部执行多种不同的图像处理操作（使用 Leptonica
库）。通常情况下表现不错，但在一些特定的情况下的效果却不够好，导致准确度显著下降。

OCR识别技术
中国在OCR技术方面的研究工作相对起步较晚，在20世纪70年代才开始对数字、英文字母及符号的识别技术进行研
究，20世纪70年代末开始进行汉字识别的研究。1986年，国家863计划信息领域课题组织了清华大学、北京信息工程学
院、沈阳自动化所三家单位联合进行中文OCR软件的开发工作。至1989年，清华大学率先推出了国内第一套中文OCR
软件-清华文通TH-OCR1.0版，至此中文OCR正式从实验室走向了市场。清华OCR印刷体汉字识别软件其后又推出了
TH-OCR 92高性能实用简/繁体、多字体、多功能印刷汉字识别系统，使印刷体汉字识别技术又取得重大进展。到
1994年推出的TH-OCR 94高性能汉英混排印刷文本识别系统，则被专家监定为“是国内外首次推出的汉英混排印刷文本
识别系统，总体上居国际领先水平'。上个世纪90年代中后期，清华大学电子工程系提出并进行了汉字识别综合研究
使汉宇识别技术在印刷体文本、联机手写汉字识别、脱机手写汉字识别和脱机手写数字符号识别等领域全面地取得了重
要成果。具有代表性的成果是TH-OCR 97综合集成汉字识别系统，它可以完成多文种(汉、英、日）印刷文本、联机手写
汉字、脱机手写汉字和手写数字的识别输入。几年来，除清华文通丁H-OCR外，其它如尚书SH-OCR等各具风格的OCR
软件也相继问世，中文OCR市场稳步扩大，用户遍布世界各地

基于深度神经网络的一个模型，这里面应用了循环神经网络的结构，
讲BP的时候，我们使用DNN网络
当我们有一个X输入，输出一个Y
这里有什么特点呢，X和Y是一一对应的
如果想要将图像识别成文字，我们把文字图像按照像素点展开成矢量，通过神经网络一层层操作，获得一个输出
这是一个DNN网络操作
tsseract 使用的循环神经网络模型（LSTM）
RNN
我们不再把输入图像整体展开，而是把图像竖着裁成一条一条的，当成特征序列，往网络里面输入，输出是带有反馈的，它会和第二条的特征序列进入网络，再次共同作业获得一个新的输出
与直接展开相比，可以获得特征变化的信息，这些相互关系都可以深度学习，使其它的精度更加精准

以定位收集图像函数

鼠标定位函数

照片修正函数

图像仿射演示函数

主程序


先给出结论，对该语句用法简单的解释就是：
如果if __name__ == '__main__' 所在模块是被直接运行的，则该语句下代码块被运行
如果所在模块是被导入到其他的python脚本中运行的，则该语句下代码块不被运行。

每个python模块（python文件，也就是此处的 param.py 和 calculate.py）都包含内置的变量__name__
当运行模块被执行的时候__name__等于文件名（包含了后缀.py）；
如果import到其他模块中，则__name__等于模块名称（不包含后缀.py）。
而'__main__'等于当前执行文件的名称（包含了后缀.py）。
进而当模块被直接执行时，__name__ == '__main__'结果为真
所以后续代码可以继续执行。


下边具体的讲解。
首先我们得先明白一个概念：程序入口。
程序入口
对于很多编程语言来说，程序都必须要有一个入口，比如 C，C++，以及完全面向对象的编程语言 Java，C# 等。其中C 和 C++ 都需要有一个 main 函数来作为程序的入口
也就是程序的运行会从 main 函数开始。同样的，Java 和 C# 则必须要有一个包含 Main 方法的主类来作为程序入口。

但和C，C++、Java 以及 C# 等有所不同的是，Python属于脚本语
不像编译型语言那样先将程序编译成二进制再运行，python是动态的逐行解释运行，
也就是从脚本第一行开始运行，没有统一的入口。

python文件有两种使用方法：

第一种：直接作为脚本执行
第二种：import到其他的python脚本中被调用（模块重用）执行，也就是作为模块（库）被导入执行
不管是直接运行还是导入，最顶层的代码都会被运行（Python 用缩进来区分代码层次）。但实际使用过程中，python文件作为模块被其它python脚本调用执行的时候，有的代码我们是不希望被运行的。
if __name__ == '__main__'就相当于是 Python 模拟的程序入口。
Python 本身并没有规定这么写，这只是一种编码习惯。由于模块之间相互引用，不同模块可能都有这样的定义
而入口程序只能有一个。到底哪个入口程序被选中，这取决于__name__的值。
而__name__是内置变量，用于表示当前模块的名字。

void namedWindow(const string& winname, int flags=WINDOW_AUTOSIZE)
第一个参数：const string& 型的name，指用作窗口的表示符的窗口名称。
第二个参数：int类型的flags，窗口的标识，主要有以下几种。
flags标识种类：
WINDOW_NORMAL，可以更改窗口的大小（没有限制）。OpenCV2中可以写为CV_WINDOW_NORMAL。
WINDOW_AUTOSIZE，窗口大小会自动调整以适应所显示的图像，并且不能修改窗口大小。OpenCV2中可以写为CV_WINDOW_AUTOSIZE。此参数是默认值。
Python OpenCV namedWindow() 方法用于创建一个具有合适名称和大小的窗口，
以在屏幕上显示图像和视频。
默认情况下，图像以其原始大小显示，
因此我们可能需要调整图像大小以使其适合我们的屏幕。

setMouseCallback，它也被称作回调函数。
cv2.setMouseCallback(windowName, onMouse [, userdata])
windowName:窗口的名字；
onMouse:鼠标响应函数，回调函数。
userdata：传给回调函数的参数



'''
# ppt
# 什么事情
# 方法
# 原理
# 重点代码

