#include<iostream>
using namespace std;

template<class T>
int count(T a[],T value,int size){
	int c = 0;
	for(int i = 0;i<size;i++){
		if(a[i]==value){
			c++;
		}
	}
	return c;
}

int main(){
	int arr[10]={1,2,3,1,2,3,4,5,6,1};
	int value = 2;
	int c = count(arr,value,10);
	cout<<c<<endl;
	return 0;
}
