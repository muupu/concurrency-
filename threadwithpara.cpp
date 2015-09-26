#include <iostream>
#include <thread> 

void func(int i, double d, const std::string& s)
{
	std::cout << "Hello, " << s << "," << i << "," << d << std::endl;
}

int main()
{
	std::thread t(func, 1,2, "James");
	t.join()
	return 0;
}