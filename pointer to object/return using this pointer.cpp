#include<iostream>
using namespace std;
class pointer{
    int a, implicit;
    public:
    pointer & set( int a, int b){
        this->a= a; 
        implicit =b; 
        return *this;
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
