/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: folim <folim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:13:43 by folim             #+#    #+#             */
/*   Updated: 2024/06/28 22:13:44 by folim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_H__
    #define __MATERIASOURCE_H__

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
    private:
        AMateria *_template[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource & src);
		MateriaSource & operator=(const MateriaSource & src);
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const & type);
};

#endif