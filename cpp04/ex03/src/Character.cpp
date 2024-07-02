/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:53:12 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:53:16 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(std::string name){
    this->_name = name;
    std::cout << "Constructor [Character, " << name << "]\n";
    for(int i = 0; i < 4; i++){
        _inventory[i] = NULL;
    }
}

Character::~Character(){
    std::cout << "Destructor [Character, " << this->_name << "]\n";
    for (int i = 0; i < 4; i++){
        if (this->_inventory[i])
            delete this->_inventory[i];
    }
}

Character::Character(const Character &src){
    this->_name = src.getName() + "_copy";
	for(int i = 0; i < 4; i++){
		if (src._inventory[i])
			this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
	}
    std::cout << "Copy Constructor [Character, " << this->_name << "_copy]\n";
}

Character & Character::operator=(const Character &src){
    this->_name = src.getName();
	for(int i = 0; i < 4; i++){
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (src._inventory[i])
			this->_inventory[i] = (src._inventory[i])->clone();
	}
    std::cout << "Copy Assignment Operator [Character, " << this->_name << "]\n";
	return (*this);
}

std::string const & Character::getName() const{
    return (this->_name);
}

void    Character::equip(AMateria* m){
    std::cout << this->_name << " is equipping inventory!\n";
    if (!m){
        std::cout << "Nothing to be equipped!\n";
        return;
    }
    std::cout << "Equipping [" << m->getType() << "] ...\n";
    for (int i = 0; i < 4; i++){
        if (!this->_inventory[i]){
            this->_inventory[i] = m;
            std::cout << "Equipped succesfully into Slot [" << i << "]!\n";
            return;
        }
    }
    std::cout << "Inventory is full, nothing is equipped!\n";
}

void    Character::unequip(int idx){
    std::cout << this->_name << " is unequipping inventory!\n";
    if (idx < 0 || idx > 3)
        std::cout << "Invalid slot selection!\n";
    else if (!this->_inventory[idx])
        std::cout << "Slot [" << idx << "] is already empty!\n";
    else{
        std::cout << this->_inventory[idx]->getType() << " has been unequipped from Slot [" << idx << "] sucessfully!\n";
        delete this->_inventory[idx]; // forbiden
        this->_inventory[idx] = NULL;
    }
}

void    Character::use(int idx, ICharacter& target){
    std::cout << this->_name << " is using inventory!\n";
    if (idx < 0 || idx > 3)
        std::cout << "Invalid slot selection!\n";
    else if (!this->_inventory[idx])
        std::cout << "Slot [" << idx << "] is empty!\n";
    else{
        std::cout << this->_inventory[idx]->getType() << " is sellected in Slot [" << idx << "]!\n";
        this->_inventory[idx]->use(target);
    }
}

// used to avoid leaks when using unequip with a deep copy character
AMateria	*Character::getMateriaFromInventory(int idx){
	return this->_inventory[idx];
}