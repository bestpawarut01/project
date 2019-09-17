#include <iostream>
using namespace std;
int main()
{
	int n[2][3] ;
	for (int i = 0;i < 2 ;i++)
	{
		for (int j = 0 ;j < 3;j++)
		{
			cout <<"Input "<< i+1 <<" "<< j+1 <<" : " ;
			cin >> n[i][j];
		}
	}
	cout <<">>>>>>>>>>Display Array<<<<<<<<<<"<<endl;
	for (int a = 0 ;a < 2;a++)
	{
		for (int b = 0 ; b < 3;b++ )
		{
			cout << n[a][b] << " ";
			if(n[a][b] == n[0][2] )
				cout <<endl;
		}
	}

	
	cout <<"\n>>>>>>>>>>Transpose Matrix<<<<<<<<<<"<<endl;
	for (int x = 0 ;x < 2;x++)
	{
		for(int y = 0 ; y < 3 ;y++)
			{
					cout << n[x][y]<< " " ;
					{
						cout << n[1][y] <<endl;
					}
			}
		break;
	}
	return 0;
}
