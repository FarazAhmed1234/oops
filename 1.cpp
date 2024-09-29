#include<iostream>
using namespace std;

int main(){
   
   double w, h,b;

   cin>>w;
   cin>>h;

   b = (w/(h*h));

   if(b<=18.5){
    cout<<"u";
   }
   else if(b>18.5 && b<24.9){
    cout<<"N";
   }
   
}