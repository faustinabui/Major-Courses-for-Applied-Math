#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to display the courses
void displayCourses(const vector<string>& courses) {
    cout << "Required Courses for Applied Mathematics Major at UC Berkeley:" << endl;
    for (const auto& course : courses) {
        cout << "- " << course << endl;
    }
}

int main() {
    // List of required courses
    vector<string> appliedMathCourses = {
        "MATH 1A: Calculus",
        "MATH 1B: Calculus",
        "MATH 53: Multivariable Calculus",
        "MATH 54: Linear Algebra and Differential Equations",
        "MATH 55: Discrete Mathematics",
        "MATH 110: Linear Algebra",
        "MATH 113: Abstract Algebra",
        "MATH 128A: Numerical Analysis",
        "MATH 104: Introduction to Analysis",
        "MATH 185: Introduction to Complex Analysis",
        "MATH 191: Putnam Seminar",
        "MATH 198: Directed Group Study",
        "STAT 134: Concepts of Probability",
        "STAT 135: Concepts of Statistics",
        "CS 61A: Structure and Interpretation of Computer Programs",
        "CS 61B: Data Structures",
        "CS 70: Discrete Mathematics and Probability Theory"
    };

    // Display the courses
    displayCourses(appliedMathCourses);

    return 0;
}
