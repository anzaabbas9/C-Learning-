#include <iostream>
using namespace std;

const int MAX = 50;

// structure to store student data
struct Student
{
    int roll;
    string name;
    int marks1;
    int marks2;
    int marks3;
    int total;
    float average;
    char grade;
};

Student s[MAX];
int countStudent = 0;

// function to calculate total, average and grade
void calculateResult(int i)
{
    s[i].total = s[i].marks1 + s[i].marks2 + s[i].marks3;
    s[i].average = s[i].total / 3.0;

    if(s[i].average >= 80)
        s[i].grade = 'A';
    else if(s[i].average >= 70)
        s[i].grade = 'B';
    else if(s[i].average >= 60)
        s[i].grade = 'C';
    else if(s[i].average >= 50)
        s[i].grade = 'D';
    else
        s[i].grade = 'F';
}

// function to add new student
void addStudent()
{
    if(countStudent >= MAX)
    {
        cout << "Limit reached" << endl;
        return;
    }

    cout << "Enter Roll No: ";
    cin >> s[countStudent].roll;

    cout << "Enter Name: ";
    cin >> s[countStudent].name;

    cout << "Enter Marks 1: ";
    cin >> s[countStudent].marks1;

    cout << "Enter Marks 2: ";
    cin >> s[countStudent].marks2;

    cout << "Enter Marks 3: ";
    cin >> s[countStudent].marks3;

    calculateResult(countStudent);
    countStudent++;

    cout << "Student Added Successfully" << endl;
}

// function to display all students
void displayStudents()
{
    if(countStudent == 0)
    {
        cout << "No Record Found" << endl;
        return;
    }

    for(int i = 0; i < countStudent; i++)
    {
        cout << "----------------------" << endl;
        cout << "Roll: " << s[i].roll << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Total: " << s[i].total << endl;
        cout << "Average: " << s[i].average << endl;
        cout << "Grade: " << s[i].grade << endl;
    }
}

// function to search student by roll number
void searchStudent()
{
    int r;
    cout << "Enter Roll No to search: ";
    cin >> r;

    for(int i = 0; i < countStudent; i++)
    {
        if(s[i].roll == r)
        {
            cout << "Student Found" << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "Total: " << s[i].total << endl;
            cout << "Average: " << s[i].average << endl;
            cout << "Grade: " << s[i].grade << endl;
            return;
        }
    }

    cout << "Student Not Found" << endl;
}

// function to delete student
void deleteStudent()
{
    int r;
    cout << "Enter Roll No to delete: ";
    cin >> r;

    for(int i = 0; i < countStudent; i++)
    {
        if(s[i].roll == r)
        {
            for(int j = i; j < countStudent - 1; j++)
            {
                s[j] = s[j + 1];
            }
            countStudent--;
            cout << "Student Deleted" << endl;
            return;
        }
    }

    cout << "Student Not Found" << endl;
}

int main()
{
    int choice;

    do
    {
        cout << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Delete Student" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                deleteStudent();
                break;

            case 5:
                cout << "Program Ended" << endl;
                break;

            default:
                cout << "Invalid Choice" << endl;
        }

    } while(choice != 5);

    return 0;
}