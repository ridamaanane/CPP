#include "school.hpp"

// School::School()
// {
//     // student_count = 0;
// }

void  School::add_student(Student s)
{
    if (student_count < 3)
    {
        std::cout << student_count << "\n"; 
        list[student_count] =s;
        student_count++;
    }
    else
        std:: cout << "School is full" << std::endl;
}

void School::show_students()
{
    for (int i = 0; i < student_count; i++)
    {
        std:: cout << "student " << ": " << "name is  " 
        << list[i].getName() << " and age is "<< list[i].getAge() << std::endl;
    }

}