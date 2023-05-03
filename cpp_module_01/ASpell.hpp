/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:07:11 by skasmi            #+#    #+#             */
/*   Updated: 2023/05/03 23:43:21 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <map>

class ATarget;
class ASpell
{

    protected:  
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(std::string const &_name, std::string const &_effects);
        virtual ~ASpell();
        ASpell(ASpell const &obj);
        ASpell &operator=(ASpell const &obj);

        std::string const & getName() const;
        std::string const & getEffects() const;

        virtual ASpell *clone() const = 0;

        void launch(ATarget const &obj) const;
};

#include "ATarget.hpp"