/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:26:36 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:26:37 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
    private:
        TargetGenerator(TargetGenerator const &obj);
        std::map<std::string, ATarget *> mymap;
    public:
        TargetGenerator();
        ~TargetGenerator();
        TargetGenerator &operator=(TargetGenerator const &obj);

        void learnTargetType(ATarget*);
        void forgetTargetType(std::string const &);
        ATarget* createTarget(std::string const &);
};