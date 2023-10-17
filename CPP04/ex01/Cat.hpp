#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(Cat const & rhs);
    ~Cat();

    void       makeSound(void) const;
    Cat &      operator=(Cat const &);

private:
    Brain*      _brain;
};

#endif