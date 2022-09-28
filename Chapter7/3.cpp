#include <iostream>

struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void fucA(box);
void fucB(box*);
int main(){
    using namespace std;
    cout << "enter the fuction you want to carry:";
    int choice;
    cin >> choice;
    box obj {maker:"123",height:2.0,width:1.0,length:22.1,volume:1};
    switch (choice)
    {
    case 1:
        fucA(obj);
        cout << obj.volume;
        break;
    case 2:
        fucB(&obj);
        cout << obj.volume;
        break;
    default:
        cout << "wrong input";
        break;
    }
}

void fucA(box obj){
    using namespace std;
    cout << obj.maker << endl;
    cout << obj.height << endl;
    cout << obj.length << endl;
    cout << obj.width << endl;
}

void fucB(box* obj){
    using namespace std;
    obj->volume = obj->height * obj->length * obj->width;
}
