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

    ~Student(){};

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
