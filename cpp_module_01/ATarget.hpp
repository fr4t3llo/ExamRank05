/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 14:07:42 by skasmi            #+#    #+#             */
/*   Updated: 2023/04/17 14:14:06 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ASpell;
class ATarget
{
    protected:
        std::string type;
    public:
        ATarget();
        ATarget(ATarget const &obj);
        ATarget &operator=(ATarget const &obj);
        ATarget(std::string const &_type);
        virtual ~ATarget();

        std::string const & getType() const;

        virtual ATarget *clone() const = 0;

        void getHitBySpell(ASpell const &obj) const ;

};

#include "ASpell.hpp"