#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Header.h";
using namespace std;

bool  IsFirstLetter(const string& str, const size_t& c) {

    bool firstletter = (c == 0 || str[c - 1] == ' ') && str[c] != ' ';

    return firstletter;
}

void PrintFirstLetters(const string& str) {
    
    for (size_t c = 0; c < str.length(); ++c) {

        if (IsFirstLetter(str, c)) {
            cout << str[c] << "    ";
        }

    }
}
void CapitalizeFirstLetters(string& str) {

    for (size_t c = 0; c < str.length(); ++c) {
        if (IsFirstLetter(str, c)) {
            str[c] = toupper(str[c]);
        }

    }

}
void ToLowerCase(string& str) {
    for (size_t c = 0; c < str.length(); ++c) {
        if (!IsFirstLetter(str, c)) {
            str[c] = tolower(str[c]);
        }

    }
}
void FormatSentenceCase(string& str) {
    CapitalizeFirstLetters(str);
    ToLowerCase(str);
}
void InvertChar(char& c) {
    if (isupper(c)) c = tolower(c);
    else  c = toupper(c);
}
void InvertCase(string& str) {
    for (size_t c = 0; c < str.length(); ++c) {
        InvertChar(str[c]);
    }
}
int  CountCapitals(const string& str) {
    int counter = 0;
    for (size_t c = 0; c < str.length(); ++c) {
        if (isupper(str[c])) ++counter;
    }
    return counter;
}
int  CountLowers(const string& str) {
    int counter = 0;
    for (size_t c = 0; c < str.length(); ++c) {
        if (islower(str[c])) ++counter;
    }
    return counter;
}
int  CountChar(const string& str, const char& c, bool casesensetive ) {
    int counter = 0;
    for (size_t i = 0; i < str.length(); ++i) {
        if (casesensetive) {
            if (str[i] == c)
                ++counter;
        }
        else {
            if (tolower(str[i]) == tolower(c)) 
                ++counter; 
        }
    }
    return counter;
}
bool IsVowel(const char& c) {
    char vowels[5] = {'a', 'e','i','o','u'};
        for (size_t j = 0; j < 5; ++j) {
            if (tolower(c) == vowels[j]) {
                return true;
            }
        }
        return false;
}
int  CountVowel(const string& str) {
    int counter = 0;
    for (size_t i = 0; i < str.length(); ++i) {
        if (IsVowel(str[i])) {
            ++counter;
        }
        
    }
    return counter;
}
void PrintVowels(const string& str) {
    for (size_t i = 0; i < str.length(); ++i) {
        if (IsVowel(str[i])) {
            cout << str[i] << "    ";
        }

    }
    cout << endl;
}
vector<string> SplitWords(const string& str) {
    vector <string> vWords;
    string word = "";
    for (size_t i = 0; i < str.length(); ++i) {

        if (str[i] != ' ') {
            word.push_back(str[i]);
        }
        else { 
            if (!word.empty())
                vWords.push_back(word);
            word = "";
        }

    }
    return vWords;
}
void PrintWords(vector<string>vWords) {
    for (size_t i = 0; i < vWords.size(); ++i) {
        cout << vWords.at(i) << "----,-----" ;
    }
    cout << endl;
}
string Trimleft(string str) {
    for (size_t i= 0;i< str.length(); ++i) {
        if (str[i] != ' ') {
           return str.substr(i, str.length() - 1);
        }
    }
    return " ";
}
string Trimright(string str) {
    for (size_t i = str.length()-1; i >= 0; --i) {
        if (str[i] != ' ') {
            return str.substr(0, i+1);
        }
    }
    return " ";
}
void Trim(string& str) {
   str=  Trimleft(Trimright(str));
}
string JoinWords(vector<string> vWords ,char seperator) {
    string str = "";
    for (size_t i = 0; i < vWords.size(); ++i) {
        str.append(vWords.at(i));
        if (i!=vWords.size()-1)
        str += seperator;
    }
    return str;
}