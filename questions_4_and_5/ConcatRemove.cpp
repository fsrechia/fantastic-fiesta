#include <string>
#include <iostream>
#include "ConcatRemove.h"

using namespace std;

// it is implicit that we ignore spaces from the input... we should implement a sanitization function

#define debug(x) cout << #x << " " << x << "    "
#define debugendl(x) cout << #x << " " << x << endl

bool ValidateString(string* s) {
    if (s->length() < 1 || s->length() > 100 ) {
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
            cout << "Found invalid character: " << *it << endl;
            return false;
        }
    }
    return true;
}


int ValidateInput(string* s, string* t, int k) {
    if (ValidateString(s)) {
        return STARTING_STRING_ERROR;
    }
    if (ValidateString(t)) {
        return TARGET_STRING_ERROR;
    }
    if (k < 1 || k > 100) {
        return INVALID_NUMBER_OF_OPS_ERROR;
    }
    return NO_ERROR;
}

bool ConcatRemove(string* s, string* t, int k) {
    int total_operations = 0;
    int common_length = 0;
    int remove_operations = 0;
    int add_operations = 0;
    // compare the two strings and find out the common part
        // consider these three cases:
            // s is longer than t
            // s is the same length as t
            // s is shorter than t
    // s longer case
    size_t shorter_length = s->length() <= t->length() ? s->length() : t->length();
    for (size_t i = 0; i < shorter_length; i++) {
        debug(i);
        debug(s->npos);
        debug(s->at(i));
        debugendl(t->at(i));
        if (s->at(i) == t->at(i)) {
            common_length = i + 1;
            continue;
        }
        break;
    }
    debug(common_length);
    // subtract lengths and use the difference to do remove ops
    remove_operations = s->length() - common_length;

    // remove all unused characters from the starting string
    // if (remove_operations > 0) {
    //     s.resize(common_length);
    // }

    add_operations = t->length() - common_length;

    debug(remove_operations);
    debug(add_operations);
    // sweep the target string and append stuff until reaching the desired string
    // for (int i = common_length - 1; i < t->length(); i++) {
    //     s.resize(i + 1, t[i]);
    // }

    // if the target string is longer, remove letter by letter of the starting string until we reach the common part
        // count the number of remove operations (n)
    // append new letters to the starting string to match the target string
        // count the number of append operations (n+=)
    // compare total operations to k (return n <= k)
    total_operations = remove_operations + add_operations;
    debugendl(total_operations);
    return total_operations <= k;
}