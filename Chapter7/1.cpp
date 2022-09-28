#include <iostream>
using namespace std;
double fuction(double,double);

int main(){
   while (true)
   {
    cout << "Please enter the number you want to deal with:" << endl;
    cout << "The first number:";
    double number_A;
    cin >> number_A;
    cout << "The second number:";
    double number_B;
    cin >> number_B;
    if (number_A * number_B == 0)
        break;
    cout << "The result is :" << fuction(number_A,number_B) << endl;
   }
    
}

double fuction (double number_A , double number_B){
    return 2.0 * number_A*number_B/(number_A+number_B);
}  
