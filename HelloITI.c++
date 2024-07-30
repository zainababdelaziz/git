#include<iostream>
using namespace std;

class hello{
    public:
void hello_iti(){
    cout<<"HelloITI";
}
void printhellogit(){
   cout<<"hellogit";
}
};
int main(){
    hello p;
    p.hello_iti();
    p.hellogit();
    return 0;
}