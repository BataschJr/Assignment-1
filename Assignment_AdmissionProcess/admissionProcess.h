#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    double tenth_grades;
    double twelth_grades;

public:
    std::string name;
    std::string school_name;
    std::string city;
    bool scholarship;
    bool fee;

    void displayInfo()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "School Name: " << school_name << std::endl;
        std::cout << "City: " << city << std::endl;
        std::cout << "Have you paid the fees?" << fee << std::endl;
        std::cout << "Your 10th Grade scores are: " << tenth_grades << std::endl;
        std::cout << "Your 12th Grade scores are: " << twelth_grades << std::endl;
        std::cout << "Scholarship applied: " << (scholarship ? "yes" : "no") << std::endl;
        std::cout << "Have you paid the fees? " << (fee ? "yes" : "no") << std::endl;

        std::cout << "Your Krea application has successfully been submitted.";
    }

    Student() : tenth_grades(0.0), twelth_grades(0.0) {}

    // Destructor to deallocate dynamic memory
    ~Student() {}

    void setTenth_grade()
    {
        double score;

        std::cout << "Please enter your 10th scores: " << std::endl;
        std::cin >> score;
        tenth_grades = score;
    }

    double getTenth_grades() const
    {
        return tenth_grades;
    }

    void setTwelth_grades()
    {
        double score;

        std::cout << "Please enter your 12th scores: " << std::endl;
        std::cin >> score;
        twelth_grades = score;
    }

    double getTwelth_grades() const
    {
        return twelth_grades;
    }
};