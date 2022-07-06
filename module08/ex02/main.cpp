#include "MutantStack.hpp"
#include "define.hpp"
#include <iostream>

int	main(void)
{
	{
		MutantStack<std::string> mString;

		mString.push("Piscine");
		mString.push("C++");
		mString.push("Dernier");
		mString.push("Exercise!");

		MutantStack<std::string>::iterator it = mString.begin();
		MutantStack<std::string>::iterator ite = mString.end();

		for (; it != ite; it++)
			std::cout << SORAIRO << *it << END_COLOR << std::endl;

		std::cout << KIIRO << "rubberduck's mutant string size == " << mString.size() << END_COLOR << std::endl;
	}

	/*----------SUBJECT-TEST-------------*/
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3); mstack.push(5); mstack.push(737);

	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
    	std::cout << *it << std::endl;
	++it; }
	std::stack<int> s(mstack); 

	return SUCCESS;
}
