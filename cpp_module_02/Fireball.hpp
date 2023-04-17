/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:24:49 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:24:54 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 


#include <iostream>
#include "ASpell.hpp"
class Fireball : public ASpell
{   
    public:
    Fireball();
    ~Fireball();

    ASpell *clone() const;
};