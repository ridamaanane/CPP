#ifndef SCHOOL_HPP
#define SCHOOL_HPP

#include <iostream>
#include <string>
#include "student.hpp"

class School
{
    private:
        Student list[3];
        int student_count;
    public:
        // School();
        void add_student(Student s);
        void show_students();
};

#endif