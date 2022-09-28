#include<iostream>
int Fill_array(double[],int);
void Show_array(double[],int);
void Reverse_array(double[],int);
using namespace std;
int main(){
    double arrays[100];
    int size = 100;
    cout << "Please input numbers:" << endl;
    size = Fill_array(arrays,size);
    Show_array(arrays,size);
    double First = arrays[0];
    double Last = arrays[size-1];
    Reverse_array(arrays,size);
    arrays[0] = First;
    arrays[size-1] = Last;
    Show_array(arrays,size);
}

int Fill_array(double arrays[] , int size){
    int count =0;
    for (size_t i = 0; i < size; i++)
    {
        cout << "#" << i+1 <<" :";
        if (!(cin >> arrays[i]))
        {
            break;
        }
        count++;
    }
    
    return count;
}

void Show_array(double arrays[],int size){
    for (size_t i = 0; i < size; i++)
    {
        cout << "#" << i+1 << " :" << arrays[i]<<endl;
    }
}

void Reverse_array(double arrays[], int size){
    double * temp = new double [size];
    for (size_t i = 0; i < size; i++)
    {
        temp[i] = arrays[i];
    }
    
    for (size_t i = 0; i < size; i++)
    {
        arrays[i] = temp[size -1 - i];
    }
}

