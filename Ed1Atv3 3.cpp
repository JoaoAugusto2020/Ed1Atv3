#include<bits/stdc++.h>

using namespace std;

void separar(double *p1){
	int inteiro=0;
	double resto=0;
	
	inteiro=*p1;
	resto=*p1-inteiro;
	
	cout<<"Inteiro: "<<inteiro<<endl;
	cout<<"Fracao: "<<resto<<endl;
}

int main(){
	double num;
	cin>>num;
	
	separar(&num);
	
	return 0;
}

