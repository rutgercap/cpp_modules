/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rcappend <rcappend@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/04/01 13:42:57 by rcappend      #+#    #+#                 */
/*   Updated: 2022/04/12 11:19:37 by rcappend      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <Character.hpp>
#include <iostream>

void	subject() {
	IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	delete(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	
	delete bob;
	delete me;
	delete src;
}

int main() {
	std::cout << "\n----- Subject tests -----\n" << std::endl;
	subject();
	return 0; 
}
