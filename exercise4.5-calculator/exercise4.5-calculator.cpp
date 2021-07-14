#include "std_lib_facilities.h"


int main()
{
	char operation;
	double number1;
	double number2;
	
	cout << "Be welcomed to the simple calculator, input two numbers and the signal of the operation you want (+,-,*,/).\n";

	cin >> number1 >> number2 >> operation;

	if (operation == '+')
	{
		cout << "The sum of " << number1 << " and " << number2 << " is " << number1 + number2 << "\n";
	}
	else if (operation == '-')
	{
		cout << "The substraction of " << number1 << " and " << number2 << " is " << number1 - number2 << "\n";
	}
	else if (operation == '*')
	{
		cout << "The multiplication of " << number1 << " and " << number2 << " is " << number1 * number2 << "\n";
	}
	else if (operation == '/')
	{
		cout << "The division of " << number1 << " and " << number2 << " is " << number1 / number2 << "\n";
	}
	else
	{
		cout << "Invalid operation signal./n";
		keep_window_open();
		return 1;
	}

	keep_window_open();
	return 0;

}