#include <iostream>
double Add(double,double);
double Multiply(double,double);
double Subtract(double,double);
double Calculate(double,double,double (*way)(double,double));
using namespace std;
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
    cout << "Please enter the number to decide the way that you want to deal with the number:" << endl;
    int choice;
    cout << "1=Add,2=Subtract,3=Muliply , please choice one:";
    cin >> choice;
    double (*way)(double,double);
    switch (choice)
    {
    case 1:
        way = Add;
        break;
    case 2:
        way = Subtract;
        break;
    case 3:
        way = Multiply;
        break;
    default:
        break;
    }
    cout << "The result is :" << Calculate(number_A,number_B,way) << endl;
    }
}

double Calculate(double A , double B , double (*way)(double,double)){
    return way(A,B);
}

double Multiply(double A, double B){
    return A*B;
}

double Subtract(double A, double B){
    return A-B;
}

double Add(double A, double B){
    return A+B;
}
