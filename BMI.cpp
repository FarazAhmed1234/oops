
#include<iostream>
using namespace std;

int main(){
	
	double weight_kg , height_meter;
	double BMI;
	
	cout<<"Enter the weight kilograms is : ";
	cin>>weight_kg;
	
	cout<<"Enter the height meter is : ";
	cin>>height_meter;
	
	
	BMI = (weight_kg/(height_meter*height_meter));
	
    if(BMI<=18.5){
        cout<<"You are UnderWeight"<<endl;
    }
    
    else if(BMI>18.5 && BMI<=24.9){
        cout<<"You are Normal"<<endl;
    }
	
	
	else if(BMI<=25 && BMI<=29.9){
        cout<<"You are OverWeight"<<endl;
    }
    
    else{
        cout<<"You are Obese"<<endl;
    }
}
