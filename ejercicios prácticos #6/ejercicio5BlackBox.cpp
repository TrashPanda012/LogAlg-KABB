#include <iostream>
#include <vector>

int main() {
    std::vector<int> grades;
    int sum = 0;
    int passed = 0;
    int failed = 0;

    // Get the grades of the 8 students
    for (int i = 0; i < 8; i++) {
        int grade;
        std::cout << "Enter the grade of student " << i + 1 << ": ";
        std::cin >> grade;
        grades.push_back(grade);
        sum += grade;

        if (grade >= 70) {
            passed++;
        } else {
            failed++;
        }
    }

    // Calculate the average grade
    double average = static_cast<double>(sum) / grades.size();

    std::cout << "Number of students who passed: " << passed << std::endl;
    std::cout << "Number of students who failed: " << failed << std::endl;
    std::cout << "Overall average grade: " << average << std::endl;

    return 0;
}