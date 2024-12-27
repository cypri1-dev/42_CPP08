/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 23:33:37 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/27 12:56:56 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "colors.hpp"
#include <exception>
#include <ctime>
#include <vector>

#define SAMPLE_SIZE 10000

int main (void) {
	try {

		// Span sp = Span(5);
		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);
		// std::cout << sp.shortestSpan() << std::endl;
		// std::cout << sp.longestSpan() << std::endl;

		// Span test(5);
		
		// test.addNumber(4);
		// test.addNumber(11);
		// test.addNumber(12);
		// test.addNumber(190);
		// test.addNumber(-6);

		Span test(SAMPLE_SIZE);
		std::srand(std::time(0));
		std::vector<int> nums;
		for (unsigned int i = 0; i < SAMPLE_SIZE; i++) {
			nums.push_back(std::rand());
		}
		test.addNumbers(nums.begin(), nums.end());
		
		std::cout << BOLD_ON << "Shortest span: " << GREEN <<test.shortestSpan() << BOLD_OFF << "." << std::endl;
		std::cout << BOLD_ON << "Longest span: " << GREEN <<test.longestSpan() << BOLD_OFF << "." << std::endl;

	}
	catch (std::exception &e) {
		std::cout << BOLD_ON RED << "Error" << BOLD_OFF BOLD_ON << ": " << e.what() << BOLD_OFF << std::endl;
	}
	return 0;
}
