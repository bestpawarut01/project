#include <iostream>
#include <random>
#include <time.h>
using namespace std;
void Display(int num[5][6]);
void graph(int num[5][6]);
int main()
{
	srand(time(NULL));
	
	int num[5][6] = {};
	for(int i = 0 ; i < 5 ; i++)
	{
		
		for(int j = 0 ; j < 6 ;j++)
		{ 
			int r = rand()%10;
			num[i][j] += r;
		}
	}
	Display(num);
	graph(num);

}
void Display(int num[5][6])
{
	for (int i = 0 ;i < 5;i++)
	{
		for(int j = 0 ;j < 6 ;j++)
		{
			cout << num[i][j]<<"\t";
		}
		cout << endl;
	}
}
void graph (int num[5][6] )
{
	cout <<"--------------------Display graph---------------------" <<endl;
	cout <<"\t0\t1\t2\t3\t4\t5" <<endl;
	cout <<"------------------------------------------------------" <<endl;
	for(int i = 0 ;i < 5;i++)
	{
		cout << i <<"|"<<"\t" ;
		for(int j = 0 ;j < 6;j++)
		{
			if (num[i][j] == 0)
			{
				cout << " " << "\t" ;
			}
			else if (num[i][j] != 0)
			{
				cout << "*" <<"\t";
			}
		}
		cout <<endl;
	}
		
}
