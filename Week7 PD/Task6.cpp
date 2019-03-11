#include <iostream>
using namespace std;

int main()
{
    int days, patients, treated = 0, untreated = 0, doctors = 7;

    cout << "Enter the number of days: ";
    cin >> days;
    int count = 1;
    while (count <= days)
    {
        cout << "Enter number of Patients: ";
        cin >> patients;

        if (count % 3 == 0)
        {
            if (untreated > treated)
            {
                doctors++;
            }
        }

        if (doctors > patients)
        {
            treated += patients;
        }
        else if (doctors == patients)
        {
            treated += doctors;
        }
        else if (patients > doctors)
        {
            treated += doctors;
            untreated += patients - doctors;
        }

        count++;
    }

    cout << "Treated Patients: " << treated << endl;
    cout << "Untreated Patients: " << untreated << endl;

    return 0;
}