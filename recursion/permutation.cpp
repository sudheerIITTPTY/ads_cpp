#include<iostream>

using namespace std;

void swap(char& x, char &y){
	char z = x;
	x = y;
	y = z;
}

void stringPermutations(string s,int start,int end){
	if(start == end){
		cout<<s<<endl;
	}
	else{
		for(int i = start;i<end;i++){
			swap(s[start],s[i]);
			stringPermutations(s,start+1,end);
			swap(s[start],s[i]);
		}
	}
}

int main(){
	string s = "abc";
	stringPermutations(s,0,s.size());
	return 0;
}
