/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 00:42:41 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/07 07:21:09 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include <string>

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;
    public:

        ASpell();
        ASpell(std::string const &_name, std::string const &_effects);
        ASpell(ASpell const &obj);
        ASpell &operator=(ASpell const &obj);
        std::string const & getName() const;
        std::string const & getEffects() const ;

        virtual ASpell *clone() const = 0;
        
};



#endif