/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:13:48 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:13:49 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"
#include "../include/ICharacter.hpp"
#include "../include/IMateriaSource.hpp"
#include "../include/Character.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

int main()
{
   IMateriaSource* src = new MateriaSource();
   src->learnMateria(new Ice());
   src->learnMateria(new Cure());

   ICharacter* me = new Character("me");

   AMateria* tmp;
   tmp = src->createMateria("ice");
   me->equip(tmp);
   tmp = src->createMateria("cure");
   me->equip(tmp);
   ICharacter* bob = new Character("bob");

   me->use(0, *bob);
   me->use(1, *bob);

   delete bob;
   delete me;
   delete src;

   return 0;
}
 
