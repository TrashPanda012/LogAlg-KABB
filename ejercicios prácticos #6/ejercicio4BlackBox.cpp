#include <iostream>
#include <vector>

int main() {
    std::vector<int> grades;
    int sum = 0;

    // Get the grades of the 10 students
    for (int i = 0; i < 10; i++) {
        int grade;
        std::cout << "Enter the grade of student " << i + 1 << ": ";
        std::cin >> grade;
        grades.push_back(grade);
        sum += grade;
    }

    // Calculate the average grade
    double average = static_cast<double>(sum) / grades.size();

    std::cout << "The average grade of the class is: " << average << std::endl;

    return 0;
}