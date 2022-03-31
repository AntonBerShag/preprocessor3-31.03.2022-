#include <iostream>
#include "h1.h"
using namespace std;

#define PI 3.14

#define mkstr(s1, s2) #s1 << " " << #s2
#define concat(s1, s2, s3) s1 ## s2 ## s3 

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 15;

	cout << mkstr(kak, dela?) << " = " << n << endl;

	int abc = 10;
	cout << concat(a, b, c) << endl;
	concat(a, b, c) = 15;
	cout << concat(a, b, c) << endl;

	cout << __DATE__ << endl;
	cout << __LINE__ << endl;
	cout << __FILE__ << endl;

	//cout << PI << endl;

	return 0;
}