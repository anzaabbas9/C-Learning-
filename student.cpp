#include <iostream>
using namespace std;

int main() {
    int n; // number of students

    cout << "Enter number of students: ";
    cin >> n;

    int roll[n];   // array to store roll numbers
    int marks[n];  // array to store marks

    // Input student details
    for(int i = 0; i < n; i++) {
        cout << "\nEnter Roll Number for student " << i + 1 << ": ";
        cin >> roll[i];
        cout << "Enter Marks for student " << i + 1 << ": ";
        cin >> marks[i];
    }

    // Display all records
    cout << "\n=== Student Records ===\n";
    for(int i = 0; i < n; i++) {
        cout << "Roll Number: " << roll[i] << " | Marks: " << marks[i] << endl;
    }

    // Find maximum and minimum marks
    int maxMarks = marks[0];
    int minMarks = marks[0];
    for(int i = 1; i < n; i++) {
        if(marks[i] > maxMarks) {
            maxMarks = marks[i];
        }
        if(marks[i] < minMarks) {
            minMarks = marks[i];
        }
    }
    cout << "\nHighest Marks: " << maxMarks << endl;
    cout << "Lowest Marks: " << minMarks << endl;

    // Calculate average
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += marks[i];
    }
    float average = (float)sum / n;
    cout << "Average Marks: " << average << endl;

    // Optional: Assign grades
    cout << "\n=== Grades ===\n";
    for(int i = 0; i < n; i++) {
        cout << "Roll " << roll[i] << ": ";
        if(marks[i] >= 80) {
            cout << "Grade A";
        } else if(marks[i] >= 60) {
            cout << "Grade B";
        } else if(marks[i] >= 40) {
            cout << "Grade C";
        } else {
            cout << "Grade F";
        }
        cout << endl;
    }

    return 0;
}
