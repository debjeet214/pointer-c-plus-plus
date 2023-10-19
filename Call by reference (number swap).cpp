#include <iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 3;
    int b = 4;
    cout<<"before swap the value of a is: "<<a<<" and value of b is: "<<b<<endl;
    swap(a,b);
     cout<<"after swap the value of a is: "<<a<<" and value of b is: "<<b<<endl;
    return 0;
}
