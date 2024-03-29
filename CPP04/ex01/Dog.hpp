#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(Dog const & rhs);
    ~Dog();

    void       makeSound(void) const;
    Dog &      operator=(Dog const & rhs);
    void       newBrain(void);

private:
    Brain*  _brain;

};

#endif