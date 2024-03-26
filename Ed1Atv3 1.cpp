#include<bits/stdc++.h>

using namespace std;

int maior(int *p1, int *p2){
	if(p1>p2){
		return *p1;
	}else{
		return *p2;
	}
}

int main(){
	int num1, num2;
	cin>>num1>>num2;
	
	cout<< maior(&num1, &num2) <<endl;
	
	return 0;
}

