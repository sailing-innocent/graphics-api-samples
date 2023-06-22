# Basis V0.1.1 

在这个例程中，我们引入了catch2测试框架，展示了一个基本的测试流程。也许对于初学者来说略显繁琐，但是考虑到后续的收益，我认为还是值得学习的。

- 编译`xmake`
- 我们会编译一个静态库`gas.lib`和一个可执行对象`gas_test.exe`，其中后者编译时候会链接之前编译出来的静态库
- 参考test/gas_test中的代码结构，其中`main.cpp`作为程序入口，会捕获其他cpp文件中用 `TEST_CASE`宏包裹住的测试用例
- `xmake run gas_test -l`可以查看我们到底写了多少个测试例子
- `xmake run gas_test test_env`中测试一个恒真命题`1==1`，是用来测试我们的框架是否安装正确的
- `xmake run gas_test test_lib`中测试gas.lib中的一个简单函数`int return_one()`效果就是返回1，可以在`test/gas_test/basic/lib.cpp`中找到测试用例的源码，这是用来测试我们和主体静态库的链接是否正确的。
