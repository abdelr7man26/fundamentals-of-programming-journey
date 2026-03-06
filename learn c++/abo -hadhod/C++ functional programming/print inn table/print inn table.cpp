#include <iostream>
#include <string>
#include <vector> 
#include <iomanip>

using namespace std;

const int TABLE_WIDTH = 120;

const int ACCT_NUM_W = 18;
const int ACCT_NUM_BORDER_W = 5;

const int PIN_W = 11;
const int PIN_BORDER_W = 4;

const int NAME_W = 30;
const int NAME_BORDER_W = 20;

const int PHONE_W = 10;
const int PHONE_BORDER_W = 6;

const int BALANCE_W = 9;


struct stClientInfo {
    string name = "";
    string AcountNumber = "";
    short pincode = 0;
    string phone = "";
    unsigned int balance = 0;
};
string ReadString(string message) {
    string str = "";
    cout << message;
    getline(cin, str);
    return str;
}
int    ReadNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin >> number;
        cin.ignore();
    } while (number < 0);
    return number;
}
stClientInfo FillStruct() {
    stClientInfo client;
    client.AcountNumber = ReadString("Enter account number: ");
    client.balance = ReadNumber("Enter your balance: ");
    client.name = ReadString("Enter your name: ");
    client.phone = ReadString("Enter your phone number: ");
    client.pincode = ReadNumber("Enter account Pin code: ");
    return client;
}
void PrintClientsInfo(const vector<stClientInfo>& clients) {
    // table head
    cout << setw(TABLE_WIDTH/2) << "Clients list :" << clients.size() << "client(s)\n";
    cout << setw(TABLE_WIDTH) << setfill('-') << "-" << endl;
    // table infos 
    cout << setw(ACCT_NUM_W) << setfill(' ') << right << "Account Number" << setw(ACCT_NUM_BORDER_W) << right << "|"
        << setw(PIN_W) << right << "Pin code" << setw(PIN_BORDER_W) << right << "|" <<
        setw(NAME_W) << right << "Client Name" << setw(NAME_BORDER_W) << right << "|" <<
        setw(PHONE_W) << right << "Phone" << setw(PHONE_BORDER_W) << right << "|"
        << setw(BALANCE_W) << right << "Balance";
    cout << endl;
    cout << setw(TABLE_WIDTH) << setfill('-') << "-\n";


    for (size_t i = 0; i < clients.size(); ++i) {
        cout << setw(11) << setfill(' ') << right << clients[i].AcountNumber << setw(12) << right << "|";
        cout << setw(8) << right << clients[i].pincode << setw(7) << right << "|";
        cout << setw(49) << left << clients[i].name << "|";
        cout << setw(13) << right << clients[i].phone << setw(3) << right << "|";
        cout << setw(9) << right << clients[i].balance << endl;
    }
}
void AddClient(vector<stClientInfo>& clients) {

    clients.push_back(FillStruct());
    cout << "**********************" << endl;
}
void AddClients(vector<stClientInfo>& clients) {
    int number = ReadNumber("How many cliets you want to add ?");
    for (short i = 0; i < number; ++i) {
        AddClient(clients);
    }
}
void Addmore(vector<stClientInfo>& clients) {
    char more;
    do {
        cout << "do you want to add more ?";
        cin >> more;
        cin.ignore();
        if (more == 'y' || more == 'Y') {
            AddClient(clients);
        }

    } while (more != 'n' && more != 'N');
}
void Run() {
    vector<stClientInfo> clients, clients2;
    AddClients(clients);
    Addmore(clients);
    PrintClientsInfo(clients);
}

int main()
{
    Run();
    return 0;
}

