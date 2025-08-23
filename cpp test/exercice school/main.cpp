#include "student.hpp"
#include "school.hpp"

int main()
{
    School badr;
    Student s1;
        s1.setName("rida");
        s1.setAge(24);
    Student s2;
        s2.setName("ali");
        s2.setAge(23);
    Student s3;
        s3.setName("hassan");
        s3.setAge(20);
    // Student Student1("hello", 14);

        
    badr.add_student(s1);
    badr.add_student(s2);
    badr.add_student(s3);
    // badr.add_student(Student1);

    badr.show_students();


}