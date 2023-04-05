#ifndef WARLOCK_HPP
# define WARLOCK_HPP 

#include <iostream>
#include <string>

class Warlock
{
    private:
        std::string name;
        std::string title;
    public:
        std::string const & getName() const;
        std::string const & getTitle() const;


        void setTitle(std::string const & _title);
        Warlock();
        ~Warlock();

        Warlock(Warlock const &obj);
        Warlock(std::string const &_name, std::string const &_title);
        Warlock &operator=(Warlock const &obj);

        void introduce() const;
};


#endif