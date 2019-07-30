#include <iostream>
#include <string>
using namespace std;
int main ()
{
	char menu;
	string u,p,u1 = u,p1 = p ;
	do{
	cout << "///////////Menu///////////" <<endl;
	cout << " 1.Regiter "<< endl;
	cout << " 2.Login   "<< endl;
	cout << " Q.Exit    "<< endl;
	cout << "Enter Menu : " ;
	cin  >> menu ;
	if ( menu == '1')
	{
		cout << " ********Regiter******** "<<endl;
		cout << " Input Username : ";
		cin  >> u ;
		cout << " Input Passwoed : ";
		cin  >> p ;
	}
	else if (menu == '2')
	{
		int t = 0;
		do{ 
		cout << " ********login******** " <<endl;
		cout << " Input Username : ";
		cin  >> u1 ;
		cout << " Input Passwoed : ";
		cin  >> p1;
		if( u1 == u && p1 == p){
			cout << "Username or Password correct ^__^"<<endl;}
		else if ( u1 != u ){
			cout << "!!!!User or Passward incorrect pleas try again!!!!"<<endl;}
		else if ( p != p1 ){
			cout << "!!!!User or Passward incorrect pleas try again!!!!"<<endl;}
	
		t++;
		}while ( t == 1 );
	}
	}while (menu != 'Q');{cout << "Exit Program...."<< endl;}	
	return 0 ;
}
