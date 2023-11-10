#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void aufgabe6() {
    unsigned long long input{};
    unsigned long long ten = 10;
    //avoid conversion to int
    vector<unsigned long long> arr;
    cin >> input;
    while (input > 0) {
        arr.push_back(input % ten);
        input = (input - input % ten) / ten;
    };
for(unsigned long long int i = arr.size()-1;i != -1;i--){
    cout<<arr.at(i)<<endl;

}
//    std::for_each(arr.rbegin(), arr.rend(), [](const int n) { std::cout << n << endl; });

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
    long double x0 = 1.0;
    long double numToFindRoot{},x2{},x1{};

    cout << "Enter the any number to find its square root: " << endl;
    cin >> numToFindRoot;

    do{
        x1 = 0.5*(x0+numToFindRoot/x0);
        x2 = 0.5*(x1+numToFindRoot/x1);
        x0 = x1;
     //   cout << x1 << x2 << endl;
    } while (abs(x2-x1) > 0.000000000000000001);

       cout << x2;








}

    int main() {
    aufgabe6();
        return 0;};



