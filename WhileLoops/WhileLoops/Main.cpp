#include <iostream>
using namespace std;

/*
WHILE LOOP syntax:
	while (expression)
	{
		statement1;
		statementN;
	}

the code that executes when the expression is true is considered
the LOOP BODY

Satement1 and StatenmentN will execute as long as the expresssion evaluates to true

If the expresssion exaluates to false, the loop body is skipped and the program
contiunes on

*/

int main()
{
	//use a while to display the numbers 1 through 10
	int x = 1; //initialize the counter to the starting
			   //number
	while (x <= 10) // compare the counter to stopping number
	{
		cout << x << " ";
		x++; //update the counter
	}
	cout << endl;

	//display the numbers 19 through 1 count by 2's
	int a = 19;

	while (a >= 1)
	{
		cout << a << " ";
		a = a - 2;
	}
	cout << endl;

	//display the numbers 2 through 20 count by 2's
	int b = 2;

	while (b <= 20)
	{
		cout << b << " ";
		b = b + 2;
	}
	cout << endl;

	//display 1 4 9 16 25 36 49
	int c = 1;

	while (c <= 7)
	{
		cout << c * c << " ";
		c++;
	}
	cout << endl;


	return 0;
}