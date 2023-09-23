// Develop a C++ program to describe  the admission process for students at Krea University (15 marks)

#include "admissionProcess.h"

int main()
{

    std::cout << "Welcome to Krea University Admission Portal" << std::endl;

    Student *student = new Student;

    std::cout << "Please enter your name: " << std::endl;
    std::getline(std::cin, student->name);

    std::cout << "Please enter you school name: " << std::endl;
    std::getline(std::cin, student->school_name);

    std::cout << "Please enter you city: " << std::endl;
    std::getline(std::cin, student->city);

    student->setTenth_grade();

    student->setTwelth_grades();

    char applyScholarship;
    std::cout << "Do you wish to apply financial aid at Krea ? (y/n) :" << std::endl;
    cin >> applyScholarship;
    student->scholarship = (applyScholarship == 'y' || applyScholarship == 'Y');

    char paidFee = 'N';
    std::cout << "Have you paid your fees? (y/n) :" << std::endl;
    cin >> applyScholarship;
    student->scholarship = (paidFee == 'y' || paidFee == 'Y');

    std::cout << "\nYour Information is as follows: " << std::endl;

    student->displayInfo();

    delete student;

    return 0;
}
