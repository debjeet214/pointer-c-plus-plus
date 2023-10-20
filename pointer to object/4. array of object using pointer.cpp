#include<iostream>
using namespace std;
class shopitem{
    int id;
    float price;
    public:
        void set(int a, float b){
            id =a;
            price = b;
        }
        void show(){
            cout<<"The ID is "<<id<<" and price is "<<price<<endl;
        }
};
int main(){
    int size;
    cout<<"enter how many item you want to add: ";
    cin>>size;
    shopitem *point = new shopitem[size];
    shopitem *ptr = point;
    int p;
    float q;
    for(int i =0; i<size; i++){
        cout<<"enter the id and price for item no."<<i+1<<endl;
        cin>>p>>q;
        point->set(p,q);
        point++;
    }
     for(int j=0; j<size; j++){
         cout<<"the item no. is: "<<j+1<<endl;
         ptr-> show();
         ptr++;
     }
    return 0;
}
