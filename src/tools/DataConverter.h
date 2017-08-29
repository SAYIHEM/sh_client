#ifndef SH_CLIENT_DATACONVERTER_H
#define SH_CLIENT_DATACONVERTER_H

#include <string>
#include <vector>

using namespace std;

class DataConverter {

    static const int DEFAULT_LENGTH_LENGTH = 5;
    static const int DEFAULT_PACKAGE_LENGTH_LENGTH = 7;

public:
    static string formatForOutput(string tag, vector<string> strings);
    static vector<string> splitValues(string input);

private:
    static string mergeValues(vector<string> strings);
    static const char* strToConstChar(string s);
    static string intToStr(int x);
};


#endif //SH_CLIENT_DATACONVERTER_H
