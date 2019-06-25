#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	
	cout << "\"Tnformation Teachnology\'c'\" \n" ;
	cout << setw(50) << "Hello" <<endl ;
	cout << setw(60) << "This is Turbo C++ Program." << endl;
	cout << setw(54) << "It is very easy" <<endl;
	cout << setw(52) << "I love c++" << endl; 
	cout << setw(60) << "It's hinh level language." << endl;

	cout << "======================================================================\n" ;

	cout <<  "my nick nameis :" << (char) 66; 
	cout <<  (char) 69;
	cout <<  (char) 83;
	cout <<  (char) 84 <<endl << endl <<endl ;

	cout << "======================================================================\n";

	unsigned short o = 65535;
	cout << "short \t = " << sizeof (o) << " bytes " << o << endl << endl << endl;

	cout << "=====================================================================\n";


	cout << "Octal constant 023 is " << 023 << " decimal\n";
	cout << "Hexa constant 0x23 is " << 0x23 << " decimal\n"<<endl << endl <<endl;

	cout << "====================================================================\n";
	

	float f = 90;
	int i = 80;
	char c = 'g' ;
	double d = 60;

	cout << "f value is " << f << endl;
	cout << "i value is " << i << endl;
	cout << "c value is " << c << endl;
	cout << "d value is " << d << endl <<endl <<endl;

	cout << "==================================================================\n";


	string name = "Pawarut Narksuth";
	int score1 = 80;
	int score2 = 40;
	char grade = 'A';
	float GPA = 3.91;

	cout << "My name is  :"	<< name			<< endl;
	cout << "My score 1  :"	<< score1		<<   " points "<< endl;
	cout << "My score 2  :"	<< score2		<<   " points " << endl;
	cout << "Total       :"	<< score1+score2<<   " point " <<endl ;
	cout << "Grade	    :"		<< grade		<< endl;
	cout << "Gpa	    :"		<< GPA			<< endl<<endl<<endl;

	return 0;
}
