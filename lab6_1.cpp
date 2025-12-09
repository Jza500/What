#include<iostream>
using namespace std;

int main(){
    int Even=0;
    int Odd=0;
    int dum;
    cout << "Enter an integer: ";
    cin >> dum;
    while(dum!=0)
    {
        if (dum%2==0){
            Even++;
        }else{
            Odd++;
        }
    cout << "Enter an integer: ";
    cin >> dum;
    }
    cout << "#Even numbers = " << Even << endl;
    cout << "#Odd numbers = " << Odd;
}