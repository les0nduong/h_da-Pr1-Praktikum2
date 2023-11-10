#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void aufgabe6() {
    int input{};
    vector<int> arr;
    cin >> input;
    while (input > 0) {
        arr.push_back(input % 10);
        input = (input - input % 10) / 10;
    };

    std::for_each(arr.rbegin(), arr.rend(), [](const int n) { std::cout << n << endl; });

};

void aufgabe7(){
    long double saldo{},time{},zinRate{};

    cout << "Please enter your starting balance" << endl;
    cin >> saldo;
    if(saldo == 0){ cout << "Your Balance will always be 0" <<endl; return;}


    cout << "Please enter yearly interest rate (e.g. 4%):"<<endl;
    scanf("%La%%", &zinRate);
  //  cout << zinRate;

  // % L - length for Long double
  // a - take in floating point
  // %% literal for reading a "%"

    cout << "Please enter how many year you want to run your account: " <<endl;
    cin >> time;


    while(time > 0){
        time = time - 1;
        saldo = saldo + saldo*(zinRate/100.0);
    }
    cout << saldo << endl;}

    void aufgabe9(){
    long double x0 = 0.001;
        long double numToFindRoot{},x2{},x1{};
    ;

    cin >> numToFindRoot;

    while(x1 - x0 < 0.000001){
        x1 = 0.5*(x0+numToFindRoot/x0);

    }








}

    int main() {
        return 0;};



