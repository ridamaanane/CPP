#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    std::cout << "===== Basic creation & deletion =====\n" << std::endl;
    {
        Animal* a = new Cat();
        Animal* b = new Dog();

        a->makeSound();
        b->makeSound();

        delete a;
        delete b;
    }
}
