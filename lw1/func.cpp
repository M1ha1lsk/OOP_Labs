#include <iostream>
#include <cmath>
#include <string>

using namespace std;

std::string decimalToBinary(long long int decimal) {
	int* binary = new int[32];
	std::string mas;
	for (int i = 0; i != 32; ++i) {
		binary[i] = 0;
	}
	int i = 31;
	while (decimal > 0) {
		binary[31 - i] = int(decimal % 2);
		decimal /= 2;
		i--;
	}
	for (int i = 31; i != -1; --i)
		mas += to_string(binary[i]);
	return mas;
}


