#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>

class Student
{
    private:
        std::string name;
        int age;
    public:
        // Student() {};
        // Student(std::string name, int age)
        // {
        //     name = name;
        //     age = age;
        // }
        void setName(std::string value);
        void setAge(int value);
        std::string getName();
        int getAge();

};

#endif