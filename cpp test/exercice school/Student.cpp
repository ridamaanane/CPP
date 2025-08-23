#include "student.hpp"

void Student::setName(std::string value)
{
    name = value;
}
void Student::setAge(int value)
{
    age = value;
}

std::string Student::getName()
{
    return name;
}

int Student::getAge()
{
    return age;
}


