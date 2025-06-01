#include<iostream>
using namespace std;
int readPositiveNumber(string message)
{
	int number;
	do
	{
		cout << message << endl;
		cin >> number;
	} while (number < 1);
	return number;
}
bool checkPerfectNumber(int number)
{	
	int sum = 0;
	for (int i = 1; i < number; i++)
	{
		if (number % i == 0)
			sum += i;
	}
	return number == sum;
}
void printResult(int number)
{
	if (checkPerfectNumber(number))
		cout << number << " Is perfect number";
	else
		cout << number << " Is not perfect number";
}
int main()
{
	printResult(readPositiveNumber("Please enter a positive number ? "));
	return 0;
}