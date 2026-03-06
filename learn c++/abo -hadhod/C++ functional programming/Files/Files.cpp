#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

fstream myfile;

void writeinfile() {
     
     myfile.open("myfile.txt", ios::out);
     if (myfile.is_open()) {
         myfile << "first\n";
         myfile << "second line \n";
         myfile << "third line \n";
         myfile.close();
     }
}
void apppendinfile() {
    
    myfile.open("myfile.txt", ios::out | ios::app);
    if (myfile.is_open()) {
        myfile << "new first line \n";
        myfile << "new second line \n";
        myfile << "new third line \n";
        myfile.close();
    }
}

void Printfilecontent(string filename) {
    
    myfile.open(filename, ios::in);
    if (myfile.is_open()) {
        string line;
        while (getline(myfile, line)) {
            cout << line << endl;
        }
    }
    myfile.close();
}

void Savefilecontent(string filename, vector <string>& filecontent) {
    
    myfile.open(filename, ios::in);
    if (myfile.is_open()) {
        string line;
        while (getline(myfile, line)) {
            filecontent.push_back(line);
        }
    }
    myfile.close();
}

void savecontenttofile(string filename, vector<string>& vectorcontent);

void deletefromfile(string filename, vector <string>& filecontent , string record ) {
    Savefilecontent(filename, filecontent);
    for (string& line : filecontent) {
        if (line == record) {
            line = "";
        }
    }
    savecontenttofile(filename, filecontent);
}

void savecontenttofile(string filename , vector<string>& vectorcontent){
    
    myfile.open(filename, ios::out);
    if (myfile.is_open()) {
        for (string line : vectorcontent) {
            if (line != "") {
                myfile << line << endl;
            }
        }
    }
    myfile.close();
}


int main()
{
    writeinfile(); // kol mra bn3mlha call btft7 el file t3ml delete l kol el feh w tktb mn awl w gded 
    apppendinfile(); // de btft7 el file t3ml apppend ll kan mwgod abl keda
    vector <string> filecontent;
    cout << setw(50) << "content before delete : \n";
    Printfilecontent("myfile.txt"); // open the file and read the content then print it in the screen 
    deletefromfile("myfile.txt", filecontent, "first"); // take an argument you want to delete from the file and it will delte all the occures of it 
    cout << setw(50)<<"content after delete : \n";
    Printfilecontent("myfile.txt");
    return 0; 
}