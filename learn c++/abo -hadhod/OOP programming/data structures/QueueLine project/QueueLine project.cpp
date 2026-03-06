#include <iostream>
#include "clsQueueLine.h"

using namespace std;

int main()
{

    QueueLine PayBillsQueue("A0", 10);
    QueueLine SubscriptionsQueue("B0", 5);


    PayBillsQueue.issueTicket();
    PayBillsQueue.issueTicket();
    PayBillsQueue.issueTicket();
    PayBillsQueue.issueTicket();
    PayBillsQueue.issueTicket();

    cout << "\nPay Bills Queue Info:\n";
    PayBillsQueue.PrintInfo();

    PayBillsQueue.ticketsRTL();
    PayBillsQueue.ticketsLTR();


    PayBillsQueue.printAllTickets();

    PayBillsQueue.nextClient();
    cout << "\nPay Bills Queue After Serving One client\n";
    PayBillsQueue.PrintInfo();

    cout << "\nSubscriptions Queue Info:\n";

    SubscriptionsQueue.issueTicket();
    SubscriptionsQueue.issueTicket();
    SubscriptionsQueue.issueTicket();


    SubscriptionsQueue.PrintInfo();

    SubscriptionsQueue.ticketsRTL();
    SubscriptionsQueue.ticketsLTR();

    SubscriptionsQueue.printAllTickets();

    SubscriptionsQueue.nextClient();
    cout << "\nSubscriptions Queue After Serving One client\n";
    SubscriptionsQueue.PrintInfo();


    return 0;
}
