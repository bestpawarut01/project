#include<iostream>
#include<time.h>
using namespace std;
int checkNum(int);
int r, num1,num2 = 0;
int main()
{	
	srand(time(NULL));
	r = rand() % 10 + 1;
	cout << "#### Welcome to gussing number game ####"<<endl;
	cout << "Secret number has been chosen" << endl;
	do {
		cout << "Guess the number(1 to 10) : ";
		cin >> num1;
		num2++;
		checkNum(num1);
	} while (num1 != r);
	cout << "The secret number is " << r << endl;
	cout << "You made " << num2 << " guesses " << endl;
	return 0;
}
int checkNum(int num1)
{
	if (num1 < r)
	{
		cout << "The secret number is lower" << endl;
	}
	else if (num1 > r)
	{
		cout << "The secret number is higher" << endl;
	}
	else if(num1 == r)
	{
		cout << " Congratulations! " << endl;
	}
	return(num1);
}

