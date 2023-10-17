#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(std::string n);
    WrongAnimal(WrongAnimal const & rhs);
    ~WrongAnimal();

    std::string   getType(void) const;
    void          makeSound(void) const;

    WrongAnimal &      operator=(WrongAnimal const &);

protected:
    std::string _type;

};

#endif