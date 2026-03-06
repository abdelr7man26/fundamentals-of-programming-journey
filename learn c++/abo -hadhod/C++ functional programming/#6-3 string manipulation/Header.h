#pragma once
#include <iostream>
#include <string>
#include<iomanip>
#include <vector>
using namespace std;
bool  IsFirstLetter(const string& str, const size_t& c);
void PrintFirstLetters(const string& str);
void CapitalizeFirstLetters(string& str);
void ToLowerCase(string& str);
void FormatSentenceCase(string& str);
void InvertChar(char& c);
void InvertCase(string& str);
int  CountCapitals(const string& str);
int  CountLowers(const string& str);
int  CountChar(const string& str, const char& c, bool casesensetive = true);
bool IsVowel(const char& c);
int  CountVowel(const string& str);
void PrintVowels(const string& str);
vector<string> SplitWords(const string& str);
void PrintWords(vector<string>vWords);
string Trimleft(string str);
string Trimright(string str);
void Trim(string& str);
string JoinWords(vector<string> vWords, char seperator);