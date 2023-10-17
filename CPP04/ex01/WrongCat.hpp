#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(WrongCat const & rhs);
    ~WrongCat();

    void            makeSound(void) const;
    WrongCat &      operator=(WrongCat const &);

private:

};

#endif