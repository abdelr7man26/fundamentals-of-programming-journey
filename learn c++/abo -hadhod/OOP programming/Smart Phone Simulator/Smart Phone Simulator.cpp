#include <iostream>
#include <string>

using namespace std;

class clsPhone {
private:
    string _brand;
    float _price;
    int _battery;
    float setPrice(float price) {
        if (price > 0) {
            return price;
        }
        return 1000;
    }
     
public:
    static int counter;
    clsPhone(string brand, float price) {

        _brand = brand;
        _price = setPrice(price);
        _battery = 100;
        counter++;
    }
    void usemobile(int duration) {
        if (_battery / 10 > duration)
        {  
            _battery -= duration * 10;
            cout << "Used for " << duration << " hours. Battery: " << _battery << "%" << endl;
        }
        else {
            _battery = 0;
            cout << "Battery Empty!\n";
        }
             
    }
    void charge(int duration) {      

        int battery = _battery + (duration * 10);

        if (battery < 100) 
        {
            _battery = battery;
            cout << "Charged for " << duration << " hours. Battery: " << _battery << "%" << endl;
        }
        else {
            _battery = 100;
            cout << "Battery Full!\n";

        }

    }
    void PrintDetails() {
        cout << "brand : " << _brand << endl;
        cout << "price : " << _price << endl;
        cout << "_battery : " << _battery << endl;
    }
   
};
int clsPhone::counter = 0;

int main()
{
    clsPhone phone1("iphone", float(20000)) ;
    phone1.PrintDetails();

    phone1.usemobile(5); 

    phone1.charge(3); 

    phone1.PrintDetails();
    clsPhone A2("iphone" ,30000);
    cout << phone1.counter;
    return 0;
}

