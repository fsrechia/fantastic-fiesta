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

    cout << "length is: " << i << endl;

	return 0;
}
