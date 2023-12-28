#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void sleep(int sleep){
    this_thread::sleep_for(std::chrono::milliseconds(sleep));

}

void order(int uOrder){
    cout << "Enter Order Amount: ";
    cin >> uOrder;
}

bool uChoise(){
    string uChoise;
    cout << "Do you want to do anything y/n:  ";
    cin >> uChoise;
    return uChoise == "y";
}

int main(){
    
    
    double uBalance;
    double uOrder;
    double PriceChange;
    double rTraders;
    double rOrder;

    cout << uChoise();


}




