#include <string>
#include <iostream>
#include "ConcatRemove.h"

using namespace std;

bool ValidateString(string* s) {
    if (s->length() < 1 || s->length() > 100 ) {
        // cout << "string length error: " << s->length() << endl;
        return false;
    }
    string validChars = "";
    // TODO: calculate this only once, or use ascii comparison if possible (e.g. 97 < letter < 122)
    for (char letter = 'a'; letter <= 'z' ; letter++) {
        validChars += letter;
    }
    for (string::iterator it = s->begin() ; it < s->end() ; ++it){
        bool found = validChars.find(*it) != string::npos;
        if (!found) {
            // cout << "Found invalid character: " << *it << endl;
            return false;
        }
    }
    return true;
}


int ValidateInput(string* s, string* t, unsigned int k) {
    if (!ValidateString(s)) {
        return STARTING_STRING_ERROR;
    }
    if (!ValidateString(t)) {
        return TARGET_STRING_ERROR;
    }
    if (k < 1 || k > 100) {
        return INVALID_NUMBER_OF_OPS_ERROR;
    }
    return NO_ERROR;
}

bool ConcatRemove(string* s, string* t, unsigned int k) {
    unsigned int total_operations = 0;
    unsigned int common_length = 0;
    unsigned int remove_operations = 0;
    unsigned int add_operations = 0;

    unsigned int shorter_length = s->length() <= t->length() ? s->length() : t->length();
    for (unsigned int i = 0; i < shorter_length; i++) {
        if (s->at(i) == t->at(i)) {
            common_length = i + 1;
            continue;
        }
        break;
    }
    // subtract lengths and use the difference to do remove and add ops
    remove_operations = s->length() - common_length;
    add_operations = t->length() - common_length;
    total_operations = remove_operations + add_operations;

    // if total operations exceed the maximum, there is no point in trying to do
    // a half-assed job
    if (total_operations > k) {
        return false;
    }

    // From this point on, we know that s can be converted to t. It is not entirely clear
    // from the requirements whether it is necessary to do the actual conversion.
    // We implement the conversion here for completeness:

    // remove all unused characters from the starting string and resize the starting
    // string appropriately to fit the new characters
    if (remove_operations > 0) {
        s->resize(common_length);
    }
    if (add_operations > 0) {
        s->resize(common_length + add_operations);
    }

    // apply the add operations starting from the index equal to common_length
    for (unsigned int i = 0; i < add_operations; i++) {
        s->at(common_length + i) = t->at(common_length + i);
    }

    if (*s == *t)  {
        return true;
    }
    cout << "Unexpected result" << endl;
    return false;
}