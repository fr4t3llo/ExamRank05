/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:24:59 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:25:11 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh" ,  "fwooshed"){}
Fwoosh::~Fwoosh(){}
ASpell * Fwoosh::clone() const{
    return new Fwoosh(*this);
}
