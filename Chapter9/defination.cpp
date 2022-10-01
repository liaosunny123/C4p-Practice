#include <iostream>
#include <algorithm>
#include <functional>
#include "struct.h"
namespace SALES{
    void setSales(Sales & s, const double ar[] , int n , int length){
        double* temp = new double [length];
        for (size_t i = 0; i < length; i++)
            temp[i] = ar[i];
        std::sort(temp,temp+length-1,std::less<double>());
        double sum = 0;
        if (n>4)
        {
            n=4;
        }
        
        for (size_t u = 0; u < n; u++){
            sum += temp[u];
            s.sales[u] = temp[u];
        }
        s.average = sum / n;
        s.max = temp[n-1];
        s.min = temp[0];
        
    }

    void setSales(Sales & s){
        std::cout << "Please enter the double that you want to put into the list." << std::endl;
        double sum = 0;
        for (size_t i = 0; i < 4; i++)
        {
            std::cout << "#" << i + 1 << " :";
            std::cin >> s.sales[i];
            sum += s.sales[i];
        }
        std::sort(s.sales,s.sales+3,std::less<double>());
        s.average = sum / 4;
        s.max = s.sales[3];
        s.min = s.sales[0];
    }

    void showSales(const Sales & s){
        
        std::cout << "The below is all the information of the Sales:" << std::endl;
        std::cout << "The average:" << s.average << std::endl;
        std::cout << "The max:" << s.max << std::endl;
        std::cout << "The min:" << s.min << std::endl;
    }

}
