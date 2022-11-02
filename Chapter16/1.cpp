#include <iostream>
#include <algorithm>
int main(){
    using namespace std;
    string word;
    cout << "Please enter the word:";
    cin >> word;
    auto itf = word.begin(),itb = word.end();
    for (itf,itb;itf != (itb-1) && itf <= (itb-1);itf++,itb--)
    {
        
        if (*itf != *(itb-1))
        {
            cout << "Wrong word!!!" << endl;
            return 0;
        }
    }
    cout << "Good word!!!";
}