#include <string>
#include <iostream>

using namespace std;

int main()
{
    string user_string;
    int i = 0, j = 0;
    int length = 0;

    getline(cin, user_string);

    // considering that all strings MUST be terminated by the null character:
    while(user_string[i] != '\0') {
        i++;
    }

    length = i;

    // reverse string without temp or buffers:

    for (i = 0; i < length/2; i++) {
        j = length - 1 - i; // mirror_index
        // use XOR to do the byte-swapping!
        user_string[i] = user_string[i] ^ user_string[j];
        user_string[j] = user_string[i] ^ user_string[j];
        user_string[i] = user_string[i] ^ user_string[j];
    }

    cout << user_string << endl;
	return 0;
}
