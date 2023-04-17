/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:25:46 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:25:52 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "ASpell.hpp"
class Polymorph : public ASpell
{   
    public:
    Polymorph();
    ~Polymorph();

    ASpell *clone() const;
};