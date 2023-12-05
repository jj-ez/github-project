#include<cmath>
#include<iostream>
#include<string>

using namespace std

int main()
{
	// Part 1
	double overSpeed, fine;
	cout << "Input how fast over the speed limit you were going (must be >0)" << endl;
	cin >> overSpeed;

	if (0 < overSpeed && overSpeed < 5)
	{
		fine = 20.00;
		cout << "You owe: " << fine << " dollars in fines" << endl;
	}
	else if (5 < overSpeed && overSpeed < 10)
	{
		fine = 75.00;
		cout << "You owe: " << fine << " dollars in fines" << endl;
	}
	else if (10 < overSpeed && overSpeed < 15)
	{
		fine = 150.00;
		cout << "You owe: " << fine << " dollars in fines" << endl;
	}
	else if (15 < overSpeed)
	{
		fine = 150.00 + (20 * (overSpeed - 15.00));
		cout << "You owe: " << fine << " dollars in fines" << endl;
	}
	else if (overSpeed == 5 or overSpeed == 10 or overSpeed ==15)
	{
		cout << "This speed was not included in the instructions so there is no fine! You found the sweet spot of speeding" << endl;
	}
	// Part 2
	double a, b, c;
	cout << "Input the lengths of three sides of a triangle" << endl;
	cin >> a >> b >> c;
	if (((a * a) == (b * b) + (c * c)) or ((b*b)==(a*a)+(c*c)) or ((c*c)==(a*a)+(b*b)))
	{
		cout << "The triangle is a right triangle" << endl;
	}
	else
	{
		cout << "The triangle is NOT  right triangle" << endl;
	}

		return 0;
}
