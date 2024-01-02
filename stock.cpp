#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

void sleep(int sleep){
    this_thread::sleep_for(std::chrono::milliseconds(sleep));

}

void uOrder(){
    int uOrder; 
    cout << "Enter Order Amount: ";
    cin >> uOrder;
    cout << uOrder;
}

bool uChoice(){
    char choice;
    cout << "Do you want to view the market(enter m) or view trades from others(v) or trade(t)";
    cin >> choice;
    
    return choice;
  
}   

double Price(){
    
    cout << Price;



}

int main(){
    double uBalance;
    double uOrder;
    double PriceChange;
    double rTraders;
    double rOrder;
    double Price;
    Price = 100;
    
    switch (uChoice())
    {
    case 'm':
        
        break;
    case 'v':


    default:
        break;
    }

    }





