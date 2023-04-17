/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:18:58 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:19:14 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"
Fwoosh::Fwoosh() : ASpell("Fwoosh" ,  "fwooshed"){}
Fwoosh::~Fwoosh(){}
ASpell * Fwoosh::clone() const{
    return new Fwoosh(*this);
}
