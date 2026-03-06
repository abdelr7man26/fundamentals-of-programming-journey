#pragma once
#pragma warning(disable : 4996)
#include <iostream>
#include <queue>
#include <string>
#include <ctime>
#include <stack>

using namespace std;
class QueueLine
{
private:

	static string  getCurrentTime() {
		time_t now = time(0);
		tm* ltm = localtime(&now);


		string hours = to_string(ltm->tm_hour);
		string minutes = to_string(ltm->tm_min);

		if (ltm->tm_min < 10) minutes = "0" + minutes;

		return hours + ":" + minutes;
	}
	static string getCurrentDate() {
		time_t now = time(0);
		tm* ltm = localtime(&now);

		string day = to_string(ltm->tm_mday);
		string month = to_string(1 + ltm->tm_mon);
		string year = to_string(1900 + ltm->tm_year);

		return day + "/" + month + "/" + year;
	}


	struct ticket {
		string _issueTime = "";
		static int counter;
		int ticketNumber;
		int _wiatingTime = 0;
		int _waitingClients = 0;
		ticket(int waitingClients, int waitTime) :_waitingClients(waitingClients), _wiatingTime(waitTime) {
			_issueTime = getCurrentTime();
			ticketNumber = counter;
			counter++;
		}
	};

	string _prefix = "";
	int _defaultWaitTime = 0;
	int _totalTickets = 0;
	int _servedTickets = 0;
	int _waitingTickets = 0;

	queue<ticket> T;
	
public:
	QueueLine(string prefix, int waitTime) : _prefix(prefix), _defaultWaitTime(waitTime) {}

	void issueTicket() {
		T.push(ticket(_waitingTickets,_defaultWaitTime * _waitingTickets));
		_totalTickets++;
		_waitingTickets++;
	}
	void nextClient() {
		if (!T.empty()) { 
			T.pop();
			_servedTickets++;
			_waitingTickets--;
		}
		else {
			cout << "\nNo clients in the queue!\n";
		}
	}

	void PrintInfo() {
		cout << "--------------------------\n";
		cout << "\t" << getCurrentDate() << endl;
		cout << "PreFix         : " << _prefix << endl;
		cout << "Total  clients : " << _totalTickets <<endl;
		cout << "served clients : " << _servedTickets <<endl;
		cout << "Waiting clients: " << _waitingTickets <<endl;
		cout << "--------------------------\n";
	}

	void ticketsRTL() {
		queue<ticket> temp = T; 
		cout << "Tickets: [";
		while (!temp.empty()) {
			cout << " " << _prefix << temp.front().ticketNumber << " ";
			temp.pop();
		}
		cout << "]" << endl;
	}
	void ticketsLTR() {
		queue <ticket> qtemp = T;
		stack <ticket> temp;
		while (!qtemp.empty()) {
			temp.push(qtemp.front());
			qtemp.pop();
		}


		cout << "Tickets: [";
		while (!temp.empty()) {
			cout << " " << _prefix << temp.top().ticketNumber << " ";
			temp.pop();
		}
		cout << "]" << endl;
	}

	void printAllTickets() {
		cout << "\t----Tickets----\n";
		cout << "--------------------------\n";
		queue <ticket> qtemp = T;
		while (!qtemp.empty()) {
			cout << "\t\t" << _prefix << qtemp.front().ticketNumber << endl;
			cout << "\t\t" << getCurrentDate() << endl;
			cout << "\tIssue Time: " << qtemp.front()._issueTime << endl;
			cout << "\tWaiting Clients: " << qtemp.front()._waitingClients << endl;
			cout << "\texpected waiting Time: " << qtemp.front()._wiatingTime << endl;
			cout << "--------------------------\n";
			qtemp.pop();
		}
	}

};
int QueueLine::ticket::counter = 1;