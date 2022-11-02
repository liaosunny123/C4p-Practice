#include <iostream>
#include <algorithm>
#include <cctype>
std::string predeal(std::string);
int main(){
    using namespace std;
    string word;
    cout << "Please enter the word:";
    cin >> word;
    word = predeal(word);
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

std::string predeal(std::string word){
    std::string res;
    for (size_t i = 0; i < word.length(); i++){
        if (isalpha(res[i]))
            res += tolower(res[i]);
    }
    return res;
}