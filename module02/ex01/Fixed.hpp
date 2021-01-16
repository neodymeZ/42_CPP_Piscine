/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larosale <larosale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:00:59 by larosale          #+#    #+#             */
/*   Updated: 2021/01/16 03:29:59 by larosale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

public:

    Fixed(void);
    Fixed(const int n);
    Fixed(const float f);
    Fixed(const Fixed &src);
    ~Fixed(void);

    Fixed &operator=(const Fixed &rhs);

    int getRawBits() const;
    void setRawBits(const int raw);
    float toFloat() const;
    int toInt() const;

private:

    int _fixedPointValue;
    static const int _fractionSize;

};

std::ostream &operator<<(std::ostream &o,const Fixed &i);

#endif
