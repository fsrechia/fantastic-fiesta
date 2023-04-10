#include <string>
#include <iostream>
#include "ConcatRemove.h"

using namespace std;

int main()
{
    string starting_string, target_string;
    int error_code;
    unsigned int max_operations;
    bool result;
    getline(cin, starting_string);
    getline(cin, target_string);
    cin >> max_operations;

    error_code = ValidateInput(&starting_string, &target_string, max_operations);
    if( error_code != NO_ERROR) {
        cout << "no" << endl;
        return 1;
    }

    result = ConcatRemove(&starting_string, &target_string, max_operations);

    if(result) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
        return 2;
    }

	return 0;
}
