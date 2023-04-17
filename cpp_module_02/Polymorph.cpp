/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:25:30 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:25:42 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph" ,  "turned into a critter"){}
Polymorph::~Polymorph(){}
ASpell * Polymorph::clone() const{
    return new Polymorph(*this);
}
