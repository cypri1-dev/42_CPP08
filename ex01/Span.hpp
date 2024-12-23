/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 23:34:20 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/23 17:03:07 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <algorithm>
#include <iostream>
#include <climits>

class Span {
	private:
		std::vector<int> _tab;
		unsigned int _N;
	
	public:
		Span(unsigned int N);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();

		void addNumber(int nb);
		unsigned int longestSpan();
		unsigned int shortestSpan();

		class NotEnoughtSpace : public std::exception {
			public:
				const char* what()const throw() {
					return "No more space in tab!";
				}
		};

		class NotEnoughtElement : public std::exception {
			public:
				const char* what()const throw() {
					return "Not enought element in tab!";
				}
		};
};

#endif