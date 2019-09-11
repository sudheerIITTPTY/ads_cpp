#include<iostream>
using namespace std;

void swapwithoutreference(int x, int y){
	int temp = x;
	x = y;
	y = temp;
}

void swapwithreference(int &x,int &y){
	int temp =x;
	x = y;
	y = temp;
}
int main(){
	int a=10,b=20;
	cout<<a<<" "<<b<<endl;
	swapwithoutreference(a,b);
	cout<<a<<" "<<b<<endl;
	swapwithreference(a,b);
	cout<<a<<" "<<b<<endl;
	
	return 0;
}

