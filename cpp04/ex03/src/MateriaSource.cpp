/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:53:12 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:53:16 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource(){
    std::cout << "Constructor [MateriaSource]\n";
    for (int i = 0; i < 4; i++)
        this->_template[i] = NULL;
}

MateriaSource::~MateriaSource(){
    std::cout << "Destructor [MateriaSource]\n";
    for (int i = 0; i < 4; i++){
        if (this->_template[i])
            delete this->_template[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource &src){
	for(int i = 0; i < 4; i++){
		if (src._template[i])
			this->_template[i] = src._template[i]->clone();
        else
            this->_template[i] = NULL;
	}
    std::cout << "Copy Constructor [MateriaSource]\n";
}

MateriaSource & MateriaSource::operator=(const MateriaSource &src){
	for(int i = 0; i < 4; i++){
		if (this->_template[i])
			delete this->_template[i];
		if (src._template[i])
			this->_template[i] = (src._template[i])->clone();
	}
    std::cout << "Copy Assignment Operator [MateriaSource]\n";
	return (*this);
}

/*Copies the Materia passed as a parameter and store it in memory so it can be cloned
 later. Like the Character, the MateriaSource can know at most 4 Materias. They
 are not necessarily unique.*/
void MateriaSource::learnMateria(AMateria *m){
    for (int i = 0; i < 4; i++){
        if (!this->_template[i]){
            this->_template[i] = m;
            std::cout << "Materia " << m->getType() << " learned!\n";
            return;
        }
    }
    std::cout << "Can't learn more than 4 Materia(s)!\n";
}


/*Returns a new Materia. The latter is a copy of the Materia previously learned by
 the MateriaSource whose type equals the one passed as parameter. Returns 0 if
 the type is unknown.*/
AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++){
        if (this->_template[i] && this->_template[i]->getType() == type){
            std::cout << "Materia " << type << " created!\n";
            return (this->_template[i]->clone());
        }
    }
    std::cout << "Materia " << type << " doesn't exist!\n";
    return (0);
}
