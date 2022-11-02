#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int reduce(long ar[],int n);
int main(){
    long ar[] {23L,23L,23L,2L,11L};
    cout << reduce(ar,5);
}

int reduce(long ar[],int n){
    set<long> list(ar,ar+n);
    return list.size();
}