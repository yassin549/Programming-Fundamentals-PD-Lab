#include <iostream>
using namespace std;

string Grade(float percent);

int main()
{
    string name;
    int marks;
    int subjects = 0;
    float percentage, total;
    string grade;

    cout << "Enter name of student: ";
    cin >> name;
    total = 0;
    while (subjects < 5)
    {
        cout << "Enter subject marks: ";
        cin >> marks;

        total += marks;
        subjects += 1;
    }

    percentage = total * 100 / 500;
    grade = Grade(percentage);

    cout << name << " scored " << total << " marks with a " << percentage << "% and got " << grade << " grade" << endl;
    return 0;
}

string Grade(float percent)
{
    string grade;

    if (percent >= 90)
    {
        grade = "A+";
    }
    else if (percent >= 80)
    {
        grade = "A";
    }
    else if (percent >= 70)
    {
        grade = "B+";
    }
    else if (percent >= 60)
    {
        grade = "B";
    }
    else if (percent >= 50)
    {
        grade = "C";
    }
    else if (percent >= 40)
    {
        grade = "D";
    }
    else if (percent < 40)
    {
        grade = "F";
    }    

    return grade;
}