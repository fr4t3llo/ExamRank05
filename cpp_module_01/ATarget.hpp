#ifndef ATARGET_HPP
# define ATARGET_HPP


#include "ASpell.hpp"


class ATarget
{
    private:
        std::string type;
    public:
        std::string const & getType() const;

        ATarget();
        ATarget(std::string const &_type);
        virtual ~ATarget();
        ATarget(ATarget const &obj);
        ATarget &operator=(ATarget const &obj);


        virtual ATarget *clone() const = 0;
        void getHitBySpell(ASpell const &obj) const;
};


#endif