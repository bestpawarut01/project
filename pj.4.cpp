#include <iostream>
using namespace std;
int main()
 
 {
	int num;
	  cout << "Enter your score :";
	  cin >> num;
	if (num >= 90){
		cout << " A " << endl;
	}
	else if (num <= 89 && num >= 80){
		cout << " B " << endl;
	}
	else if (num <= 79 && num >= 70 ){
		cout << " C " << endl;
	}
	else if (num <= 69 && num >= 60 ){
		cout << " D " <<endl;
	}
	else if (num <= 59){
		cout << " F " <<endl;
	}
	return 0;

}
