/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 17:41:04 by larosale          #+#    #+#             */
/*   Updated: 2021/01/20 18:28:32 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource {

public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *m) = 0;
    virtual AMateria *createMateria(const std::string &type) = 0;
};

#endif
