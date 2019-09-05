#include<iostream>
#include<string>
using namespace std;
void ListStuden(int score[1000], string [1000], int);
char Calgrade(int score[1000] ,int &i);
int main()
{
	int score[1000],num;
	string name[1000];
	cout << " Input Number of studen : ";
	cin >> num;
	for (int i = 0;i < num;i++)
	{
		cout << " Input Name   : ";
		cin >> name[i];
		cout << " Input Score "<< i+1<< ": ";
		cin >> score[i];
		cout << endl<<endl;
	}
	ListStuden(score,name,num);
	return 0;
}
void ListStuden(int score[1000], string name[1000],int num)
{
	for (int i = 0;i < num;i++)
	{
		cout << "Studen Name : " << name[i] <<"\t"<<"Score : " << i + 1 << " = " << score[i] << " " <<"Your grade is " << Calgrade(score, i) << endl;
	}
}
char Calgrade(int score[1000], int &i)
{
	if (score[i] >= 80 && score[i] <= 100) 
	{	
		return ('A');
	}
	else if (score[i] <= 79 && score[i] >= 70)
	{
		return ('B');
	}
	else if (score[i] <= 69 && score[i] >= 60)
	{
		return ('C');
	}
	else if (score[i] <= 59 && score[i] >= 50)
	{
		return ('D');
	}
}
