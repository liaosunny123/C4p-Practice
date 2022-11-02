#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
template<class T>
int reduce(T ar[],int n);
int main(){
    long ar[] {23L,23L,23L,2L,11L};
    cout << reduce<long>(ar,5);
}

template<class T>
int reduce(T ar[],int n){
    set<T> list(ar,ar+n);
    return list.size();
}