/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:25:16 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:25:21 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "ASpell.hpp"
class Fwoosh : public ASpell
{   
    public:
    Fwoosh();
    ~Fwoosh();

    ASpell *clone() const;
};