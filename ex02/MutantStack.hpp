/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 13:55:55 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/27 14:08:18 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <iostream>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack &other) : std::stack<T>(other) {
			*this = other;
		}
		MutantStack &operator=(const MutantStack &other) {
			std::stack<T>::operator=(other);
			return (*this);
		}
		~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin() {
			return (this->c.begin());
		}
		iterator end() {
			return (this->c.end());
		}
};

#endif