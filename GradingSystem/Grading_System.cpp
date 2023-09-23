#include "Grading_system.h"

int main()
{
    std::string studentName;
    std::cout << "Enter student name: ";
    std::getline(std::cin, studentName);

    Student *student = new Student(studentName);

    int numCourses;
    std::cout << "Enter the number of courses: ";
    std::cin >> numCourses;

    for (int i = 0; i < numCourses; ++i)
    {
        int grade;
        std::cout << "Enter grades for course " << i + 1 << ": ";
        std::cin >> grade;
        student->addGrade(grade);
    }

    std::cout << "\nStudent Grade Report:\n";
    student->displayReport();

    delete student;

    return 0;
}
