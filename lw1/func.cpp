#include <iostream>
#include <cmath>
#include <string>

using namespace std;

std::string closest_pair_tonum(int upper_limit) {
    std::string closest_pair;
    int closest_diff = upper_limit;
    for (int m = upper_limit - 1; m > 0; m--) { 
        for (int n = m - 1; n > 0; n--) { 
            int sum = m + n;
            int diff = m - n;
            if (sqrt(sum) == trunc(sqrt(sum)) && sqrt(diff) == trunc(sqrt(diff))) {
                closest_pair += to_string(m);
                closest_pair += ' ';
                closest_pair += to_string(n);
                return closest_pair;
            }
        }
    }
    return closest_pair;
}
