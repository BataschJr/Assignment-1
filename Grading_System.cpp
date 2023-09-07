#include <iostream>
#include <string>
#include <vector>

class Student
{
private:
    std::string name;
    std::vector<double> grades;

public:
    Student(const std::string &studentName) : name(studentName) {}

    void addGrade(double grade)
    {
        grades.push_back(grade);
    }

    double calculateAverage() const
    {
        double sum = 0;
        for (int grade : grades)
        {
            sum += grade;
        }
        return static_cast<double>(sum) / grades.size();
    }

    void displayReport() const
    {
        std::cout << "Student: " << name << std::endl;
        std::cout << "Grades: ";
        for (int grade : grades)
        {
            std::cout << grade << " ";
        }
        std::cout << std::endl;
        std::cout << "Average Grade: " << calculateAverage() << std::endl;
    }
};

int main()
{
    std::string studentName;
    std::cout << "Enter student name: ";
    std::getline(std::cin, studentName);

    Student student(studentName);

    int numCourses;
    std::cout << "Enter the number of courses: ";
    std::cin >> numCourses;

    for (int i = 0; i < numCourses; ++i)
    {
        int grade;
        std::cout << "Enter grades for course " << i + 1 << ": ";
        std::cin >> grade;
        student.addGrade(grade);
    }

    std::cout << "\nStudent Grade Report:\n";
    student.displayReport();

    return 0;
}
