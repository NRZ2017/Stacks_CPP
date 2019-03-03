#include "Array.h"
#include <iostream>

int main()
{
	/*try {
		Stack<int> stack;
		for (int i = 0; i < 257; i++) {
			stack.Push(i);
		}
	}
	catch (std::out_of_range& ooo) {
		std::cout << ooo.what() << std::endl;
	}*/


	Stack<int> stack;
	stack.Push(1);
	stack.Push(2);
	stack.Push(3);
	stack.Push(4);
	stack.Push(5);
	stack.Pop();
	stack.Pop();
	system("PAUSE");
}