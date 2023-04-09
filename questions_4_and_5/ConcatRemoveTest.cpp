#include "ConcatRemove.h"
#include <string>
#include <iostream>

using namespace std;

bool TestStringValidation (string* s, bool expected) {
    cout << "Testing string validation of: '" << *s << "'" << endl;
    bool result = ValidateString(s);
    cout << "  Result:   " << (result ? "yes" : "no") << endl;
    cout << "  Expected: " << (expected ? "yes" : "no") << endl;
    return result == expected;
}


bool TestConcatRemove(string* s, string* t, int k, bool expected) {
    cout << "Testing ConcatRemove of:" << endl;
    cout << " s: '" << *s << "'" << endl;
    cout << " t: '" << *t << "'" << endl;
    cout << " k: " << k << endl;

    bool result = ConcatRemove(s, t, k);
    cout << "  Result:   " << (result ? "yes" : "no") << endl;
    cout << "  Expected: " << (expected ? "yes" : "no") << endl;
    cout << endl;
    return expected == result;
}

bool s_longer_than_t_test_enough_ops() {
    string s("blablablabla");
    string t("blablabcde");
    return TestConcatRemove(&s, &t, 8, true);
}

bool s_longer_than_t_enough_ops_common_prefix_size_of_t() {
    string s("opqrst");
    string t("opq");
    return TestConcatRemove(&s, &t, 3, true);
}

bool s_longer_than_t_test_not_enough_ops() {
    string s("blablablabla");
    string t("blablabcde");
    return TestConcatRemove(&s, &t, 4, false);
}


bool s_same_length_as_t_test_enough_ops() {
    string s("abc");
    string t("efg");
    return TestConcatRemove(&s, &t, 6, true);
}

bool s_same_length_as_t_test_not_enough_ops() {
    string s("abc");
    string t("efg");
    return TestConcatRemove(&s, &t, 5, false);
}

bool s_shorter_than_t_enough_ops() {
    string s("xyz");
    string t("abcdef");
    return TestConcatRemove(&s, &t, 9, true);
}

bool s_shorter_than_t_enough_ops_common_prefix_size_of_s() {
    string s("abc");
    string t("abcdef");
    return TestConcatRemove(&s, &t, 3, true);
}

bool s_shorter_than_t_not_enough_ops() {
    string s("xyz");
    string t("abcdefg");
    return TestConcatRemove(&s, &t, 8, false);
}

bool string_valid() {
    string s("abcdefgh");
    return TestStringValidation(&s, true);
}

bool string_invalid_characters() {
    string s("abcdef_gh");
    return TestStringValidation(&s, false);
}

bool string_too_long() {
    string testString = "";
    char testChar = 'a';
    for (int i = 1 ; i <= 101; i++) {
        testString += testChar;
    }
    return TestStringValidation(&testString, false);
}

bool string_empty() {
    string testString = "";
    return TestStringValidation(&testString, false);
}

int main() {
    int failures = 0;

    s_longer_than_t_test_enough_ops() || failures++;
    s_shorter_than_t_enough_ops_common_prefix_size_of_s() || failures++;
    s_longer_than_t_test_not_enough_ops() || failures++;
    s_same_length_as_t_test_enough_ops() || failures++;
    s_same_length_as_t_test_not_enough_ops() || failures++;
    s_shorter_than_t_enough_ops() || failures++;
    s_shorter_than_t_enough_ops_common_prefix_size_of_s() || failures++;
    s_shorter_than_t_not_enough_ops() || failures++;
    string_valid() || failures++;
    string_invalid_characters() || failures++;
    string_too_long() || failures++;
    string_empty() || failures++;

    cout << endl << "Failure count: " << failures << endl;
    return failures;
}