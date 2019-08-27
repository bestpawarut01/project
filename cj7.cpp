#include<iostream>
#include<iomanip>
using namespace std;
float update_balance(string, float,float &balance);
int main()
{
	string command  ;
	float balance = 10000,dollar;
		cout << "Exit with 0 " << endl;
		cout <<  fixed <<setprecision(2) <<"Your balance = " << balance << endl;

		do {
			cout << "Input command (1 or withdraw ,2 deposit) :";
			cin >> command;
			while (command != "0")
			{
				cout << "amout : ";
				cin >> dollar;
				cout << "Your balance : ";
				cout << fixed;
				cout << setprecision(2) << update_balance(command, dollar, balance) << endl;
				break;
			}
		} while (command != "0");
		return 0;
}
float update_balance(string command ,float dollar, float &balance)
{
	if (command == "1")
	{
		 balance = balance - dollar;
	}
	else if (command == "2")
	{
		balance = balance + dollar;
	}
	return (balance);
}
