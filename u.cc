#include <iostream>
#include <memory>

int main() {
	// 使用 std::unique_ptr
	std::unique_ptr<int> uniquePtr(new int);
	*uniquePtr =5;
	std::cout << "uniquePtr: " << *uniquePtr << std::endl;

	// 使用 std::shared_ptr
	std::shared_ptr<int> sharedPtr1 = std::make_shared<int>(42);
	std::shared_ptr<int> sharedPtr2 = sharedPtr1; // 共享相同的资源
	std::cout << "sharedPtr1: " << *sharedPtr1 << ", sharedPtr2: " << *sharedPtr2 << std::endl;

	return 0;

}  //所有智能指针超出作用域，释放内存

