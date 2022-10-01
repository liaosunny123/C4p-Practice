#include <iostream>
#include "defination.cpp"

int main(){
    SALES::Sales s1;
    SALES::Sales s2;
    double s1_List[]  {1.1,2.2,5.5,3.3,4.4};
    SALES::setSales(s2);
    SALES::setSales(s1,s1_List,3,5);
    SALES::showSales(s2);
    SALES::showSales(s1);
}