/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/15 21:57:50 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

public:

    Fixed(void);
    Fixed(const Fixed &src);
    ~Fixed(void);

    Fixed &operator=(const Fixed &rhs);

    int getRawBits() const;
    void setRawBits(const int raw);

private:

    int _fixedPointValue;
    static const int _fractionSize;

};

#endif
