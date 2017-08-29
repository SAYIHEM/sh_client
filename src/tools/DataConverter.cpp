#include "../include/Include.h"

using namespace std;

string DataConverter::formatForOutput(string tag, vector<string> strings) {

    string output = mergeValues(strings);

    output = tag + output;

    if (output.size() > pow(10, DEFAULT_PACKAGE_LENGTH_LENGTH)-1) {
        // TODO: Throw NullPointerException
    }

    char buffer [DEFAULT_PACKAGE_LENGTH_LENGTH];
    string str = "%0" + intToStr(DEFAULT_PACKAGE_LENGTH_LENGTH) + "d";
    sprintf(buffer, str.c_str(), output.size());
    output = string(buffer) + output;

    return output;
}

vector<string> DataConverter::splitValues(string input) {

    vector<string> strings;
    int pointer = 0;

    while (pointer != input.size()) {

        string length_s = input.substr(static_cast<unsigned long>(pointer), static_cast<unsigned long>(pointer + DEFAULT_LENGTH_LENGTH));
        int length;

        stringstream ss(length_s);
        ss >> length;

        pointer += DEFAULT_LENGTH_LENGTH;
        string newString = input.substr(static_cast<unsigned long>(pointer), static_cast<unsigned long>(pointer + length));
        strings.push_back(newString);
        pointer = pointer + length;
    }

    return strings;
}

string DataConverter::mergeValues(vector<string> strings) {

    string output = "";

    for (int i = 0; i < strings.size(); i++) {

        //if (strings[i] == NULL) {
        //    strings[i] = "null";
        //}

        if (strings[i].size() > pow(10, DEFAULT_LENGTH_LENGTH)-1) {
            // TODO: Throw NullPointerEception
        }

        char buffer [DEFAULT_LENGTH_LENGTH];
        string str = "%0" + intToStr(DEFAULT_LENGTH_LENGTH) + "d";
        sprintf(buffer, str.c_str(), strings[i].size());
        output += string(buffer);
        output += strings[i];
    }

    return output;
}

string DataConverter::intToStr(int x) {

    stringstream ss;
    ss << x;
    return ss.str();
}

