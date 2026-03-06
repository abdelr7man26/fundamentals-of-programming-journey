#pragma once

int RandomNumber(int from, int to);

void FillArraywithrandom(int array[3][3]);
void fillorderedmatrix(int array[3][3], int from);

void PrintArray(int array[3][3]);

int sumofrow(int array[3][3], int row);
int sumofcolumn(int array[3][3], int col);
int sumofthematrix(int array[3][3]);

void printthesumofrows(int array[3][3], int rowsarray[]);
void printthesumofcols(int array[3][3], int colarray[]);