#include <iostream>
using namespace std;

class ClsCalculator
{
private:

    int _Result = 0;
    int _PreviousResult = 0;
    int _LastNumber = 0;
    string _PreviousOperation = "clear";
    bool _IsZero(float number) {
        return (number == 0);
    }

public:

    void Clear();
    void Add(float number);
    void subtract(float number);
    void Devide(float number);
    void Multiply(float number);
    int GetResult();
    void PrintResult();
    void CancelLastOperation();
};

void ClsCalculator::Clear() {
    _PreviousResult = 0;
    _PreviousOperation = "Clear";
    _LastNumber = 0;
    _Result = 0;
}
void ClsCalculator::Add(float number) {
    _PreviousResult = _Result;
    _LastNumber = number;
    _PreviousOperation = "Add";

    _Result += number;
}
void ClsCalculator::subtract(float number) {
    _PreviousResult = _Result;
    _LastNumber = number;
    _PreviousOperation = "subtract";

    _Result -= number;
}
void ClsCalculator::Devide(float number) {
    _PreviousResult = _Result;
    _LastNumber = number;
    _PreviousOperation = "Devide";

    if (_IsZero(number)) {
        number = 1;
    }

    _Result /= number;
}
void ClsCalculator::Multiply(float number) {
    _PreviousResult = _Result;
    _LastNumber = number;
    _PreviousOperation = "Multiply";
    _Result *= number;
}

int ClsCalculator::GetResult() {

    return _Result;
}
void ClsCalculator::PrintResult() {
    cout << "Result After " << _PreviousOperation << "  " << _LastNumber << "  " << _Result << Endl;
}
void ClsCalculator::CancelLastOperation() {
    _Result = _PreviousResult ;
    _LastNumber = 0;
    _PreviousOperation = "Canceling Last Operation";
}

int main()
{
    ClsCalculator c1;
    c1.Clear();
    c1.Add(10);
    cout << c1.GetResult() << endl;
    c1.Add(100);
    cout << c1.GetResult() << endl;
    c1.Multiply(5);
    cout << c1.GetResult() << endl;
    c1.subtract(250);
    cout << c1.GetResult() << endl;
    c1.Devide(12);
    cout << c1.GetResult() << endl;
    return 0;

}

