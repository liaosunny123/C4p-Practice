#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;
template<class T>
vector<T> Lotto(T range,int number);

int main(){
    vector<int> winners = Lotto<int>(51,6);
    copy(winners.begin(),winners.end(),ostream_iterator<int,char>(cout," "));
}

template<class T>
vector<T> Lotto(T range,int number){
    vector<T> buf;
   for (T i = 0; i < range; i++)
   {
        buf.push_back(T(i));
   }
    random_shuffle(buf.begin(),buf.end());
    vector<T> res(buf.begin(),buf.begin()+number);
    return res;
}