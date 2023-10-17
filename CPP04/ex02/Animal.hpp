#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
public:
    Animal();
    Animal(std::string n);
    Animal(Animal const & rhs);
    virtual ~Animal();

    std::string   getType(void) const;
    virtual void  makeSound(void) const = 0;

    Animal &      operator=(Animal const &);

protected:
    std::string _type;

};

#endif