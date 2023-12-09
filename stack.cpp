#include <iostream>
#include <vector>
#include "stack.h"

int main()
{
	typedef  Stack<float> fStack;//
	using  fStack = Stack<float>;
	Stack<int> s;
	s.push(10);
	s.push(7);
	std::cout << "Size of intStack - " << s.size() << std::endl;
	std::cout << "Printing intSTack ... ";
	s.print();
	std::cout << std::endl;
	Stack<char> chStack;
	chStack.push('a');
	chStack.push('B');
	std::cout << "Printing charSTack ... ";
	chStack.print();
	Stack<std::string> strStack;
	strStack.push("Hello");
	strStack.push("Poqrik");
	chStack.push('B');
	
}
