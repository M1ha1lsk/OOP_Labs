#include <iostream>
#include <string>

#include "func.h"

using namespace std;

int main() {
    long long int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
	cout << decimalToBinary(decimal) << endl;
	//system("pause");
    return 0;
}
