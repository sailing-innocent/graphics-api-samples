# 图形API例程

-- WIP 2023-05-07 --

这是我对于图形学API的学习报告配套的例程

- 知乎: https://zhuanlan.zhihu.com/p/626664318

编译通过：
- [x] Win10+VS2022+xmake2.7.8

## 如何使用例程

例程使用git+xmake+doctest进行组织，因为个人不太喜欢cmake的语法，所以会优先支持xmake的例程，后续视情况酌情考虑是否需要添加cmake相关。

### 源码相关
- 获取源码：`git clone https://github.com/sailing-innocent/graphics-api-samples`
- 查看branch: `git branch -l` 本文主要内容都在不同的branch中，详细情况请查看doc/overview.md
  - main: 所有主要主干文档内容的更新
  - basis: the basic xmake + doctest framework
  - ogl: the opengl branch
  - vk: the vulkan branch
  - dx: the DirectX12 branch
关于各个branch和tag的区别，可以查看doc/overview.md

### 编译相关
- 编译：`xmake`
- 运行：`xmake run <target_name>`
- 环境配置：特定的版本之后我们会引入额外的依赖，比如opengl或者vulkan sdk，需要额外添加配置，具体可以参考doc/dependencies.md
- 使用xmake: 如果你对xmake+catch2框架并不熟悉，你可以考虑跟随basis分支下的v0.1.0 tag之后的版本进行尝试，对于每个版本，都在doc/versions里有一个对应的文档进行简述。

        对于例程我一点愚见是，最好从头新建一个平行的程序，按照顺序依次实现，遇到不会的地方再进行参考，这对于我个人来说是学习效率最高的方式

### 测试框架相关

也许你注意到了，我们的例程引入doctest测试框架。这个测试框架的作用不仅限于检查我们函数实现正确与否，我发现在学习新的知识时候，它也可以帮助我们轻松验证一些小的知识点是否掌握牢固，写很多并非主线需要，但是对于厘清概念十分重要的小例子。所以我非常推荐大家也进行一些尝试。更详细的信息，可以参考 doc/test_framework.md

### Q/A

关于例程使用相关的内容，推荐使用git issue功能进行交流，我会每周定期查看，尽力回复，不设置任何交流群，不希望在报告评论下讨论例程相关的内容，希望两者可以保持相对独立。


## 如何开始

- 安装你喜爱的编译环境（比如windows下的Visual Studio, linux下的gcc或者其他）
- 安装git和xmake
- 打开你喜爱的命令行（比如windows下的powershell，linux下的bash），将路径切换到项目根目录。

### Hello C++
- `git checkout basis`
- `xmake`
- `xmake run hello`
- 你可以看到在命令行中打印`Hello C++`字样

### Hello OpenGL

### Hello Vulkan

### Hello DirectX
