/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:55:50 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/27 14:18:08 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include "MutantStack.hpp"

template <typename T>
void testWithMutantStack() {

	MutantStack<T> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;  // 17
	mstack.pop();
	std::cout << mstack.size() << std::endl;  // 1

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	std::cout << "Itération sur les éléments (MutantStack):" << std::endl;
	typename MutantStack<T>::iterator it = mstack.begin();
	typename MutantStack<T>::iterator ite = mstack.end();
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
}

template <typename T>
void testWithList() {
	
	std::list<T> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << mlist.back() << std::endl;  // 17
	mlist.pop_back();
	std::cout << mlist.size() << std::endl;  // 1

	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);

	std::cout << "Itération sur les éléments (std::list):" << std::endl;
	for (typename std::list<T>::iterator it = mlist.begin(); it != mlist.end(); ++it) {
		std::cout << *it << std::endl;
	}

}

int main() {
	std::cout << "Test avec MutantStack:" << std::endl;
	testWithMutantStack<int>();

	std::cout << "\nTest avec std::list:" << std::endl;
	testWithList<int>();

	return 0;
}
