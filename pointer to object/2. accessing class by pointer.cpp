#include<iostream>
using namespace std;

class complex{
    int real, imagenary;
    public:
    void show(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imagenary part is "<<imagenary<<endl;
    }
    void set( int a, int b){
        real = a;
        imagenary = b;
        show();
    }
};

int main(){
    complex a;
    complex *p = &a;
    (*p).set(3, 12);
}
