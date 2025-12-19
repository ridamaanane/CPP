#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main()
{
    std::cout << "----- Basic creation & deletion -----" << std::endl;
    std::cout << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    j->makeSound();
    i->makeSound();

    delete j;//should not create a leak
    delete i;
    
    std::cout << std::endl;
    std::cout << "----- Basic creation & deletion -----" << std::endl;
    std::cout << std::endl;
}
