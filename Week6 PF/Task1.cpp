#include <iostream>
using namespace std;

char Grade(int marks);

int main()
{
    int marks;
    char grade;

    cout << "Enter marks: ";
    cin >> marks;

    grade = Grade(marks);
    cout << "Your grade is: " << grade << endl;
    return 0;
}

char Grade(int marks)
{
    char grade;

    if (marks >= 85)
    {
        grade = 'A';
    }
    else if (marks >= 81 && marks < 85)
    {
        grade = 'B';
    }
    else if (marks >= 71 && marks <= 80)
    {
        grade = 'C';
    }
    else if (marks >= 61 && marks <= 70)
    {
        grade = 'D';
    }
    else if (marks > 50 && marks <= 60)
    {
        grade = 'E';
    }
    else if (marks <= 50)
    {
        grade = 'F';
    }
    
    return grade;
}