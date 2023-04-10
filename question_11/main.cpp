#include <string>
#include <iostream>

using namespace std;

int main()
{
    string user_string;
    int i = 0;

    getline(cin, user_string);

    // considering that all strings MUST be terminated by the null character:
    while(user_string[i] != '\0') {
        i++;
    }

    // initial solution still uses stdout as a sort of buffer :(
    cout << "reversed string is: ";
    while(i >= 0) {
        cout << user_string[--i];
    }
    cout << endl;

	return 0;
}
