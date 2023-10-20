#include<iostream>
using namespace std;
class pointer{
    int a, implicit;
    public:
    void set( int a, int b){
        //  a =a; just writting this will give no error but it'll output the garbadge value
        this->a= a;  //explicitly calling this pointer
        implicit =b; // implicitly this pointer is auto call by compiler itself
    }
    void show(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of implicit value is "<<implicit<<endl;
    }
};

int main(){
    pointer x;
    x.set(5, 19);
    x.show();
}
