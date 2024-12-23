/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 23:33:37 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/23 16:46:08 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "colors.hpp"
#include <exception>

int main (void) {
	try {
		Span test(5);
		
		test.addNumber(4);
		test.addNumber(-3);
		test.addNumber(12);
		test.addNumber(190);
		test.addNumber(-6);
		
		std::cout << BOLD_ON << "Longest span: " << GREEN <<test.longestSpan() << BOLD_OFF << "." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << BOLD_ON RED << "Error" << BOLD_OFF BOLD_ON << ": " << e.what() << BOLD_OFF << std::endl;
	}
	return 0;
}