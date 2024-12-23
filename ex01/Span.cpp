/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyferrei <cyferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 23:34:16 by cyferrei          #+#    #+#             */
/*   Updated: 2024/12/23 17:04:20 by cyferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <vector>

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &other) {
	*this = other;
}

Span &Span::operator=(const Span &other) {
	if (this != &other) {
		this->_N = other._N;
		this->_tab = other._tab;
	}
	return (*this);
}

Span::~Span() {}

void Span::addNumber(int nb) {
	if (this->_tab.size() < this->_N) {
		this->_tab.push_back(nb);
	}
	else
		throw NotEnoughtSpace();
}

unsigned int Span::longestSpan() {
	if (this->_tab.size() < 2)
		throw NotEnoughtElement();

	int min = *this->_tab.begin();
	int max = this->_tab.at(1);
	
	// int min = *std::min_element(this->_tab.begin(), this->_tab.end());
	// int max = *std::max_element(this->_tab.begin(), this->_tab.end());
	// O(n*2) --> O(n)

	for (unsigned int i = 0; i < this->_N; i++) {
		if (this->_tab[i] < min)
			min = this->_tab[i];
		else if (this->_tab[i] > max)
			max = this->_tab[i];
		else
			;
	}
	return (max - min);
	//O(n)  --> +inf diff significative car un seul parcours!
}

unsigned int Span::shortestSpan() {
	if (this->_tab.size() < 2)
		throw NotEnoughtElement();

	std::vector<int> sorted_tab = this->_tab;
	std::sort(sorted_tab.begin(), sorted_tab.end());

	unsigned int shortest_span = UINT_MAX;
	unsigned int diff;
	
	for (size_t i = 0; i < sorted_tab.size() - 1; i++) {
		diff = sorted_tab[i + 1] - sorted_tab[i];
		if (diff < shortest_span)
	}
}