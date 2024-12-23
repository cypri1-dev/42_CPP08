/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:57:36 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/23 13:21:03 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main (void) {
	
	std::vector<int> containerINT;
	containerINT.push_back(10);
	containerINT.push_back(20);
	containerINT.push_back(30);
	containerINT.push_back(40);
	containerINT.push_back(50);
	
	int good_value = 50;
	int wrong_value = -130;

	try {
		std::vector<int>::iterator it = easyfind(containerINT, good_value);
		std::cout << "Value found: " << *it << std::endl;
		it = easyfind(containerINT, wrong_value);
		std::cout << "Value found: " << *it << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	
	return (0);
}