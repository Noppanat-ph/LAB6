#include<iostream>
using namespace std;

int main(){
    int N = 1;
    int even = 0;
    int odd = 0;
    while(N != 0){
        cout << "Enter an integer: ";
        cin >> N;
        if(N % 2 == 0 and N != 0){
            even++;
        }else if(N % 2 != 0 and N != 0){
            odd++;
        }
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}