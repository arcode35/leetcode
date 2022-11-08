#include <iostream>

#include <string>

#include <vector>

using namespace std;

string conversion(int n) {
    string roman = "";

    vector < pair < int, string > > values;

    values.push_back(pair < int, string >(1000, "M"));
    values.push_back(pair < int, string >(900, "CM"));
    values.push_back(pair < int, string >(500, "D"));
    values.push_back(pair < int, string >(400, "CD"));
    values.push_back(pair < int, string >(100, "C"));
    values.push_back(pair < int, string >(90, "XC"));
    values.push_back(pair < int, string >(50, "L"));
    values.push_back(pair < int, string >(40, "XL"));
    values.push_back(pair < int, string >(10, "X"));
    values.push_back(pair < int, string >(9, "IX"));
    values.push_back(pair < int, string >(5, "V"));
    values.push_back(pair < int, string >(4, "IV"));
    values.push_back(pair < int, string >(1, "I"));

    while (n > 0) {
        for (auto a : values) {
            if (n - a.first >= 0) {
                roman.append(a.second);
                n -= a.first;
                break;
            }

        }
    }
    return roman;
}

int main() {
    int num;
    cin >> num;
    cout << conversion(num);
    return 0;
}