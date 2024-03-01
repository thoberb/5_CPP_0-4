/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blandineberthod <blandineberthod@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:56:14 by blandineber       #+#    #+#             */
/*   Updated: 2024/03/01 15:10:53 by blandineber      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << BOLD_YELLOW "Default constructor called for FragTrap" RESET << std::endl;
	_name = "default";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << BOLD_YELLOW "Constructor called for FragTrap " << _name << RESET << std::endl;
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& fragTrap) : ClapTrap(fragTrap)
{
	std::cout << BOLD_YELLOW "Copy constructor called for FragTrap" RESET << std::endl;
	_name = fragTrap._name;
	_hitPoints = fragTrap._hitPoints;
	_energyPoints = fragTrap._energyPoints;
	_attackDamage = fragTrap._attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& fragTrap)
{
	std::cout << BOLD_YELLOW "Copy assignment operator called for FragTrap" RESET << std::endl;
	if (this != &fragTrap)
	{
		this->_name = fragTrap._name;
		this->_hitPoints = fragTrap._hitPoints;
		this->_energyPoints = fragTrap._energyPoints;
		this->_attackDamage = fragTrap._attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << BOLD_YELLOW "Destructor called for FragTrap" RESET << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << YELLOW "FragTrap wants a high five." RESET << std::endl;
}
