/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:23:55 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:24:00 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "ATarget.hpp"

class BrickWall : public ATarget
{   
    public:
    BrickWall();
    ~BrickWall();

    ATarget *clone() const;

};