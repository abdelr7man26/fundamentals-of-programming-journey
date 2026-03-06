#include <iostream> 
using namespace std ;
int main ()
{
    int num1 ,num2 ,num3 ;
    cout << "enter three numbers : ";
    cin >> num1 >> num2 >> num3;
    if (num1 == num2 && num2 == num3 )  
    {cout << "they are equals";}

    else 
    {
        int max = num1 ;
        if (num2 > max ) {max = num2 ;}
        if (num3 > max ) { max = num3 ;}
        if (num1 == max && num2 == max && num3 < max ) {cout <<num1 << num2 << "are greater than" <<num3; }
        else if (num1 == max && num2 < max && num3 == max ) {cout <<num1 << num3 << "are greater than" <<num2; }
        else if (num1 < max && num2 == max && num3 == max ) {cout <<num3 << num2 << "are greater than" <<num1; }
        else {cout << max <<" is the greatest ";}
    }

    // else if (num1 >= num2 && num1 >= num3)
    // { 
    //     if (num1 == num2 && num1!= num3 )
    //     {cout <<num1 << num2 << "are greater than" <<num3; }
    //     else if (num1 != num2 && num1 == num3 )
    //     {cout <<num1 << num3 << "are greater than" <<num2; }
    //     else
    //     {cout << num1 <<"is the greatest "<<endl;}
    // }
    // else if (num2 > num1 && num2 >= num3)
    // { 
    //     if ( num2 == num3 )
    //     {cout <<num2 << num3 << "are greater than" <<num1; }
    //     else
    //     {cout << num2 <<"is the greatest "<<endl;}
    // }
    // else if (num3 > num1 && num3 > num2)
    // { 
    //     {cout << num3 <<"is the greatest "<<endl;}
    // }
    
return 0;
}