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
#include <cstdlib>

void Test(){
   std::cout << "\n\n\n--- Test: MateriaSource ---\n";
   MateriaSource* src = new MateriaSource();
   src->learnMateria(new Ice());
   src->learnMateria(new Cure());
   src->learnMateria(new Ice());
   src->learnMateria(new Cure());

   std::cout << "\n*** Test 1 ***\n";
   src->learnMateria(new Ice());
   src->learnMateria(new Cure());
   std::cout << "\n";

   Character* alex = new Character("Alex");

   AMateria* tmp;
   tmp = src->createMateria("ice");
   alex->equip(tmp);
   tmp = src->createMateria("cure");
   alex->equip(tmp);

   std::cout << "\n*** Test 2 ***\n";
   tmp = src->createMateria("fire");
   alex->equip(tmp);
   std::cout << "\n";

   Character* john = new Character("John");
   MateriaSource *src_copy = new MateriaSource(*src);

   std::cout << "\n*** Test 3 ***\n";
   src_copy->learnMateria(new Ice());
   src_copy->learnMateria(new Cure());
   AMateria* tmp1;
   tmp1 = src->createMateria("ice");
   john->equip(tmp1);
   tmp1 = src->createMateria("cure");
   john->equip(tmp1);
   std::cout << "\n";

   Character* leon = new Character("Leon");
   MateriaSource* src_cao = new MateriaSource();
   *src_cao = *src_copy;

   std::cout << "\n*** Test 4 ***\n";
   src_cao->learnMateria(new Ice());
   src_cao->learnMateria(new Cure());
   AMateria* tmp2;
   tmp2 = src->createMateria("ice");
   leon->equip(tmp2);
   tmp2 = src->createMateria("cure");
   leon->equip(tmp2);
   std::cout << "\n";

   std::cout << "\n\n--- Test: Character ---\n";
   Character* john_copy = new Character(*john);

   std::cout << "\n*** Test 1 ***\n";
   john->use(0, *alex);
   john_copy->use(0, *alex);
   std::cout << "\n";

   Character* leon_copy = new Character("Leon_copy");
   *leon_copy = *leon;

   std::cout << "\n*** Test 2 ***\n";
   leon->use(1, *alex);
   leon_copy->use(1, *alex);
   std::cout << "\n";

   ICharacter* dummy = new Character("Dummy");
   AMateria* tmp3;
   tmp3 = src->createMateria("ice");
   alex->equip(tmp3);
   tmp3 = src->createMateria("cure");
   alex->equip(tmp3);

   std::cout << "\n*** Test 3 ***\n";
   leon->equip(tmp3);
   std::cout << "\n";


   std::cout << "\n*** Test 4 ***\n";
   alex->use(0, *dummy);
   alex->use(1, *dummy);
   alex->use(2, *dummy);
   alex->use(3, *dummy);
   alex->use(4, *dummy);
   alex->use(-1, *dummy);
   std::cout << "\n";

   std::cout << "\n*** Test 5 ***\n";
   tmp3 = src->createMateria("ice");
   alex->equip(tmp3);
   delete tmp3; // handles leaks
   std::cout << "\n";

   AMateria* tmp4;
   tmp4 = alex->ReturnMateria(2); // handle leaks

   std::cout << "\n*** Test 6 ***\n";
   alex->unequip(2);
   alex->unequip(2);
   alex->unequip(-1);
   alex->unequip(4);
   alex->use(2, *dummy);
   std::cout << "\n";

   std::cout << "\n*** Test 7 ***\n";
   leon->equip(tmp4);
   leon->use(2, *dummy);
   leon->unequip(2);
   delete tmp4; // handles leaks
   std::cout << "\n";

   std::cout << "Test: Destructors\n";
   delete src;
   delete src_copy;
   delete src_cao;
   delete alex;
   delete john;
   delete john_copy;
   delete leon;
   delete leon_copy;
   delete dummy;
}

int main()
{
   {
      std::cout << "\nTest provided by module:\n";
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
   }

   {
      Test();
   }

   // system("leaks InterfaceRecap");
   return 0;
}
 