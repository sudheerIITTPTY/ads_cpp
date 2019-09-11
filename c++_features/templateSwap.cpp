#include<iostream>
using namespace std;

template<class T>
void swapAnyTwo(T& x, T& y){
	T temp = x;
	x = y;
	y = temp;
}

int main(){
	int a = 10,b = 20;
	cout<<"Before Swap a = "<<a<<" b = "<<b<<endl;
	swapAnyTwo(a,b);
	cout<<"After Swap a = "<<a<<" b = "<<b<<endl;
	float x = 10.5,y = 30.5;
	cout<<"Before Swap x = "<<x<<" y = "<<y<<endl;
	swapAnyTwo(x,y);
	cout<<"After Swap x = "<<x<<" y = "<<y<<endl;	
	return 0;
}

