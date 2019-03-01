#include <iostream>
#include <cmath>

using namespace std;

double sg(double ,double );

int main(){
    cout << sg(-2.5,1.1) << "\n";
    cout << sg(1,10000) << "\n";
    cout << sg(8.5,2.4) << "\n";
    cout << sg(0.1,0.0001) << "\n";
    cout << sg(10,0.007) << "\n";
    cout << sg(1,-2) << "\n";
    cout << sg(15,100) << "\n";
    cout << sg(123,5432) << "\n";
}

double sg(double x,double y){
    double result,max,min;
    if(x>y){
        max=x,min=y;
    }else{
        if(y>x){
            max=y,min=x;}
    }

    if(x<=0 || y<=0){
        result=0;
        return result;
    }else{
       if(max/min<=10){
           result=pow((x*y),0.5);
           return result; 
        }else{
        result=(sg(x,pow((x*y),0.5))) + (sg(y,pow((x*y),0.5)));
        return result;
        }
    }
}
