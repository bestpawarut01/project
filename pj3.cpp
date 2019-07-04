#include <iostream>
using namespace std;
int main()
{
	float Celsius;
		cout << "Enter celsius temperature: " ;
		cin >> Celsius;
		cout << "Fahrenheit = " <<( 1.8 * Celsius)+32 <<endl;
		cout << "Now weather in Thailand is " << (( ( 1.8 * Celsius)+32 > 70)? "Hot":"Cool") << endl;

	return(0);
}
