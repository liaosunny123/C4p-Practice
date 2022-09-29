#include <iostream>
template<class T>
T Max5(T[]);
template<> int Max5(int list[]){
    int result=list[0];
    for (size_t i = 1; i < 5; i++)
    {
        if (list[i] < list[i-1])
        {   
            result = list[i-1];
        }else
        {
            result = list[i];
        }
    }
    return result;
}

template<> double Max5(double list[]){
    double result=list[0];
    for (size_t i = 1; i < 5; i++)
    {
        if (list[i] < list[i-1])
        {   
            result = list[i-1];
        }else
        {
            result = list[i];
        }
    }
    return result;
}

int main(){
    int IntList[5] {1,2,3,4,5};
    double DoubleList[5] {1.1,2.2,3.3,4.4,5.5};
    std::cout << "Please determine the choice that you want to test:";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        std::cout << "Result is :" << Max5(IntList) << std::endl;
        break;
    case 2:
        std::cout << "Result is :" << Max5(DoubleList) << std::endl;
        break;
    default:
        break;
    }
}

