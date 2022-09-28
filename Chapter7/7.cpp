#include<iostream>
double* Fill_array(double*,double*);
void Show_array(double*,double*);
void Reverse_array(double*,double*);
using namespace std;

int main(){
    double* myarray = new double[100];
    double* end = Fill_array(myarray,&(myarray[100]));
    Show_array(myarray,end);
    double startnumber = *myarray;
    double endnumber = *end;
    Reverse_array(myarray,end);
    myarray[0] = startnumber;
    *end = endnumber;
    Show_array(myarray,end);
    delete[] myarray;
}

double* Fill_array(double* start , double* end){
    cout << "Please enter the number that you want to fill in the arraylist:" << endl;
    double* endindex;
    int index;
    for (double* pt = start; pt != end + 1; pt++)
    {
        index = pt - start;
        cout << "#" << index + 1 << " : ";
        if (!(cin >> *pt))
            break;
        endindex = pt;
    }
    return endindex;
}

void Show_array(double* start , double* end){
    int index;

    for (double* pt = start; pt != end + 1; pt++)
    {
        index = pt - start;
        cout << "#" << index + 1<< " :" << *pt << endl;
    }
    
}

void Reverse_array(double* start , double* end){
    int index = 0;
    double* copyarrary = new double [end-start];
    for (double* pt = copyarrary; pt != &copyarrary[end-start] + 1; pt++)
    {
        index = pt-copyarrary;
        *pt = start[index];
    }
    index = 0;
    for (double* pt = &copyarrary[end-start] ; pt != copyarrary - 1; pt--)
    {
        start[index] = *pt;
        index++;
    }
}