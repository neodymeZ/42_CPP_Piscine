/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 18:36:04 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"

# define MAX_SRC 4

class MateriaSource : public IMateriaSource {

public:

    MateriaSource();
    MateriaSource(const MateriaSource &src);
    ~MateriaSource();

    MateriaSource &operator=(const MateriaSource &rhs);

    virtual void learnMateria(AMateria *m);
    virtual AMateria *createMateria(const std::string &type);

private:

    AMateria *_source[MAX_SRC];

};

#endif
