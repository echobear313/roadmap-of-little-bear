# roadmap-of-little-bear
小熊同学的学习园地，有空的时候就记得看一下

### Deep Learning
* [Deep-Learning-Papers-Reading-Roadmap](https://github.com/songrotek/Deep-Learning-Papers-Reading-Roadmap)
* [deeplearningbook-chinese](https://github.com/exacity/deeplearningbook-chinese) by Ian Goodfellow、Yoshua Bengio and Aaron Courville, Deep Learning这本书的中文版。  
* [基于深度学习的目标检测技术演进：R-CNN、Fast R-CNN、Faster R-CNN](https://www.cnblogs.com/skyfsm/p/6806246.html)，人脸检测，手势检测需要用到这个，首先需要把手检测出来，然后才能做手势识别。
* [主流深度学习框架对比](http://blog.csdn.net/zuochao_2013/article/details/56024172)，把现在主流的框架介绍了一遍。
* [深度学习-LeCun、Bengio和Hinton的联合综述](https://www.csdn.net/article/2015-06-01/2824811)，作者Yann LeCun、Yoshua Bengio、Geoffrey Hinton，三位祖师联合发表在Nature上的文献综述..
* [CNN(卷积神经网络)、RNN(循环神经网络)、DNN(深度神经网络)的内部网络结构有什么区别？](https://www.zhihu.com/question/34681168)
* [一文读懂卷积神经网络CNN](https://www.cnblogs.com/nsnow/p/4562308.html)
* [深度学习简介(一)——卷积神经网络](https://www.cnblogs.com/alexcai/p/5506806.html)
* [详解卷积神经网络(CNN)](http://blog.csdn.net/qq_25762497/article/details/51052861)

### MTCNN
* [NMS——非极大值抑制](http://blog.csdn.net/shuzfan/article/details/52711706)
* [MTCNN训练整理](http://blog.csdn.net/amds123/article/details/69568495)
* [ MTCNN（Multi-task convolutional neural networks）人脸对齐](http://blog.csdn.net/qq_14845119/article/details/52680940)
* [人脸检测——MTCNN](http://blog.csdn.net/shuzfan/article/details/52668935)
* [人脸检测：MTCNN](http://blog.csdn.net/tinyzhao/article/details/53236191)
* [训练细节](./mtcnn_training_details.md)
* 训练用到的两个数据集[widerface](http://mmlab.ie.cuhk.edu.hk/projects/WIDERFace/)32203张图片，393703张脸，标签是每张脸的bounding box，也就是把脸抠出来的框的两个点的坐标，这个数据集用来前两个网络，粗筛、细筛把脸抠出来；[aflw](https://www.tugraz.at/institute/icg/research/team-bischof/lrs/downloads/aflw/)，两万五张脸，每张脸标注了21个关键点。这个数据集用来最后一个网络，检测的同时做关键点的回归，也就是检测。两个数据集里面就包括了训练集和测试集。测试数据集[fddb](http://vis-www.cs.umass.edu/fddb/)，包含的是人脸检测的标签，5171张脸，2845张图片，从LFW数据集中抽出来打的标签，人脸检测比较通用的比较性能的数据集。
### OpenCV
* [【OpenCV人脸识别入门教程之二】人脸检测](http://blog.csdn.net/lsq2902101015/article/details/47057081)，这个教程里面用到的文件可以在[opencv官网](https://opencv.org/releases.html)找到，我已经把它挑出来，写了一个完整的项目，在`opencv-face-detection`文件夹里面, 运行看一下效果，先cd到这个文件夹，然后`cmake . && make`. 自带的haarcascade检测器有gpu版本，先用cpu的吧，不过速度可能有点慢。

### Caffe
* [caffe官网](http://caffe.berkeleyvision.org/)有很多notebook一步步教你用，全英文看起来可能很吃力，可以先跑一个[Lenet mnist手写体数据集](http://caffe.berkeleyvision.org/gathered/examples/mnist.html)，跑完之后做一个[Classification](http://nbviewer.jupyter.org/github/BVLC/caffe/blob/master/examples/00-classification.ipynb)，你就很厉害了，加油
* [Mnist手写体数据集的训练](http://blog.csdn.net/hanging_gardens/article/details/78738937)
* [Mnist手写体数据集的预测](http://blog.csdn.net/hanging_gardens/article/details/78738937)
* 以上是训练和预测的博客，介绍的比较详细，无聊的时候看看加深印象。我一步步教你做。  

### Django
* [Django博客教程](https://www.zmrenwu.com/post/3/)，很详细
### Markdown
* [Markdown语法说明(中文简体版), 非常详细](http://wowubuntu.com/markdown/)
* [Markdown编辑器：typora](https://www.typora.io/)(所见即所得、支持latex数学公式, \$\$ 公式 \$\$嵌入，我更希望你用sublime或者vscode等编辑器，然后在浏览器预览，因为这样支持嵌入html tag)

### Vim
* [如何让 vim 成为我们的神器](https://segmentfault.com/a/1190000011466454)，简要介绍了一下常用命令。
* [Vim入门基础](http://www.jianshu.com/p/bcbe916f97e1)，Vim的快捷键和搜索是区分大小写的，例如A和a，向后添加和行末添加。这时候你需要在键盘上敲`shift+a`。
* submline可以修改成vim模式，vscode和pycharm、clion、ij等jetbrains家族套餐，包括visual studio都有vim插件，不要去折腾terminal的vim配置，本质上对技术没有提升，vim最重要的意义是效率的提升。不要折腾。


### Competition
* [中国大学生计算机设计大赛](http://www.jsjds.org/)，七月截止八月结束，关注一下
* [创新杯 2018](https://www.microsoft.com/china/msdn/student/IC2018/bssz.html)，2018年1月30日 23:59报名，2018年3月28日 23:59复赛，2018年4月下旬半决赛，2018年5月下旬决赛
* [2018第九届“北斗杯”全国青少年科技创新大赛](http://www.bdlead.cn/index.php/Home/Bdb/index.html)，这个很水，作品评选时间：市级、省级赛区初赛作品评选定于2018年3月13日前，分赛区初赛作品评选定于2018年3月11-19日，全国总决赛作品评选定于2018年3月26-30日。我看了一下，网上报名，然后学校盖章，你再仔细看一下是不是，不然就先把名报了。等我考完，想一下能不能套一个现成的东西。[相关介绍](http://bisai.172xiaoyuan.com/kejidasai/1655.html)。
