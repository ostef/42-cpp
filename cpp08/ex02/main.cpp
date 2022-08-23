#include "MutantStack.hpp"
#include <iostream>

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	MutantStack<std::string> stack;
	stack.push ("Hello");
	stack.push ("Sailor!");
	stack.push ("There");
	stack.push ("Are");
	stack.push ("69,105");
	stack.push ("Leaves");
	stack.push ("In");
	stack.push ("The");
	stack.push ("Pile.");

	for (MutantStack<std::string>::iterator it = stack.begin (); it != stack.end (); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	for (MutantStack<std::string>::reverse_iterator it = stack.rbegin (); it != stack.rend (); it++)
		std::cout << *it << " ";
	std::cout << std::endl;

	return 0;
}