#include <iostream>
using namespace std;
int Input(void);
void Display(int);
double Average(int);

int list[10];


int main(){
    cout << "Please enter your golf achievement:" << endl;
    Display(Input());

    
}

int Input(void){
    int count = 0;
    for (size_t i = 0; i < 10; i++)
    {
        cout << "#" << i + 1 << " achievement: ";
        if (!(cin >> list[i]))
        {
            cout << "User end input process!" << endl;
            break;
        }
        count++;
    }
    return count;

}

void Display(int size){
    cout << "The achievement of your input is:" << endl;
    for (size_t i = 0; i < size; i++)
    {
        cout << list[i] <<" ";
    }
    cout << endl << "The average of " << size << " achievements is " << Average(size);
}

double Average(int size){
    double sum = 0.0;
    for (size_t i = 0; i < size; i++)
    {
        sum += list[i];
    }
    return sum / size;
}