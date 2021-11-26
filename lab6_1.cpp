#include<iostream>
using namespace std;

int main(){
    int z , even = 0 ,odd = 0;
    cout << "Enter an integer: ";
    cin >> z;
    while (z != 0)
    {
        if (z%2 == 0){
            even += 1;
        }
        else{
            odd += 1;
        }
        cout << "Enter an integer: ";
        cin >> z;
    }
    cout << "#Even numbers = " <<even <<endl;
    cout << "#Odd numbers = " <<odd;
    return 0;
}
