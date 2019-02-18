#include <iostream>
using namespace std;

int volumepercentage(int volume, float totalpipes);
int pipe1percent(int volume, float pipe1flow);
int pipe2percent(int volume, float pipe2flow);

int main()
{
	int volume, pipe1, pipe2, pipe1flow, pipe2flow, pipe1per, pipe2per, totalpipes, extra, vpercent;
	float hours;
	
	while(true)
   {
	cout << "Enter volume of Tank in the range 1 to 10000: ";
	cin >> volume;
	cout << "Enter flow rate of pipe 1 in the range 1 to 5000: ";
	cin >> pipe1;
	cout << "Enter flow rate of pipe 2 in the range 1 to 5000: ";
	cin >> pipe2;
	cout << "Enter number of hours the worker is absent in the range 1.0 to 24.00: ";
	cin >> hours;

	pipe1flow = pipe1 * hours;
	pipe2flow = pipe2 * hours;

	totalpipes = pipe1flow + pipe2flow;

	if (totalpipes > volume)
	{
		extra = totalpipes - volume;
		cout << "For " << hours << " hours the pool overflows with " << extra << " litres." << endl;
	}

	if (volume >= totalpipes)
	{
		vpercent = volumepercentage(volume, totalpipes);
		pipe1per = pipe1percent(totalpipes, pipe1flow);
		pipe2per = pipe2percent(totalpipes, pipe2flow);
		cout << "The pool is " << vpercent << "%  full. Pipe1: " << pipe1per << "%. Pipe2: " << pipe2per << "%." << endl;
	}
   }
	return 0;
}

int volumepercentage(int volume, float totalpipes)
{
	float percent = (totalpipes / volume) * 100;
	return percent;
}

int pipe1percent(int volume, float pipe1flow)
{
	float percent = (pipe1flow / volume) * 100;
	return percent;
}

int pipe2percent(int volume, float pipe2flow)
{
	float percent = (pipe2flow / volume) * 100;
	return percent;
}