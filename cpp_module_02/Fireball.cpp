/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:24:32 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:24:43 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball" ,  "burnt to a crisp"){}
Fireball::~Fireball(){}
ASpell * Fireball::clone() const{
    return new Fireball(*this);
}
