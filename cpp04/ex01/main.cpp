#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main()
{
    std::cout << "===== Basic creation & deletion =====\n" << std::endl;
    {
        const Animal* j = new Dog();
        const Animal* i = new Cat();

        j->makeSound();
        i->makeSound();

        delete j;
        delete i;
    }
    std::cout << "\n===== COPY CONSTRUCTOR TEST =====\n" << std::endl;
    {
        Dog dog1;
        Dog dog2(dog1);
    }
    std::cout << "\n===== COPY ASSIGNMENT TEST =====\n" << std::endl;
    {
        Cat cat1;
        Cat cat2;

        cat2 = cat1;
    }
    std::cout << "\n===== POLYMORPHISM + DEEP COPY =====\n" << std::endl;
    {
        Animal* animals[2];

        animals[0] = new Dog();
        animals[1] = new Cat();

        animals[0]->makeSound();
        animals[1]->makeSound();

        delete animals[0];
        delete animals[1];
    }
}
