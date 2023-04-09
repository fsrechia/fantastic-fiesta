#include <string>

using namespace std;


enum ValidationErrors
{
    NO_ERROR = 0,
    STARTING_STRING_ERROR = 1,
    TARGET_STRING_ERROR = 2,
    INVALID_NUMBER_OF_OPS_ERROR = 4
};


bool ValidateString(string* s);
int ValidateInput(string* s, string* t, int k);
bool ConcatRemove(string* s, string* t, int k);