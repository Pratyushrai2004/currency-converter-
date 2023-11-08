#include<iostream>
using namespace std;
class currency{
    public:
    int x;
    int get(){
        cout<<"1.Indian Rupees\n2.US Dollar\n3.Euros\n4.YEN\n";
        cout<<"Enter the currency you want to convert:";
        cin>>x;
        return x;
    }

};
class value:public currency{
    public:
    float y;
    void getvalue(){
        cout<<"Enter the  amount :";
        cin>>y;
    }
};
class currency1:public value{
    public:
    int z;
    void get1(){
        cout<<"1.Indian Rupees\n2.US Dollar\n3.Euros\n4.YEN\n";
        cout<<"Enter the curreny you want it to convert into:";
        cin>>z;
    }
};
class conversion:public currency1{
    public:
    void conversionc(){
        if (x==1 && z==1){
            cout<<"₹"<<y;
        }
        else if (x==1 && z==2){
            cout<<"$"<<y/82.15;
        }
        else if (x==1 && z==3){
            cout<<"€"<<y/90.01;
        }
        else if (x==1 && z==4){
            cout<<"¥"<<y/0.61;
        }
        else if (x==2 && z==1){
            cout<<"₹"<<y*82.15;
        }
        else if (x==2 && z==3){
            cout<<"€"<<y*0.91;
        }
        else if (x==2 && z==4){
            cout<<"¥"<<y*134.13;
        }
        else if (x==3 && z==1){
            cout<<"₹"<<y*90.0992;
    
        }
        else if(x==3 && z==2){
            cout<<"$"<<y*1.0977;
        }
        else if(x==3 && z==3){
            cout<<"€"<<y;
        }
        else if(x==3 && z==4){
            cout<<"¥"<<y*147.23;
        }
        else if(x==4 && z==2){
            cout<<"$"<<y*0.0075;
        }
        else if(x==4 && z==3){
            cout<<"€"<<y*0.0068;
        }
        else if(x==4 && z==1){
            cout<<"₹"<<y*0.61;
        }
        else if(x==4 && y==4){
            cout<<"¥"<<y;
        }
    }
};

int main(){
    conversion a;
    a.get();
    a.getvalue();
    a.get1();
    a.conversionc();
}