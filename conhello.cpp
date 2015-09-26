#include <iostream>
#include <thread>  // 管理线程的函数和类

void hello()
{
	std::cout << "Hello Concurrency World" << std::endl;
}

int main()
{
	std::thread t(hello);
	t.join(); // 调用线程等待t线程完成后，再继续运行下去
	return 0;
}