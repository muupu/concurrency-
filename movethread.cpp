#include <iostream>
#include <thread>  // 管理线程的函数和类

void hello()
{
	std::cout << "Hello Concurrency World" << std::endl;
}

int main()
{
	std::thread t(hello);
	std::thread t1(std::move(t));
	t.join();
	t1.join();
	return 0;
}