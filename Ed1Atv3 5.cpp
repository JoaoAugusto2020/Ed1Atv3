#include<bits/stdc++.h>

using namespace std;

void minMax(int *p1, int tam, int min, int max){
	for(int i=0; i<tam; i++){
		if(*p1>max){
			max=*p1;
		}
		
		if(i==0) min=*p1;
		if(*p1<min){
			min=*p1;
		}
		
		p1++;
	}
	
	cout<<"Max: "<<max<<endl;
	cout<<"Min: "<<min<<endl;
}

int main(){
	int tam=0, min=0, max=0;
	cout<<"Tamanho do vetor: ";
	cin>>tam;
	int vet[tam], *p=vet;
	
	
	
	for(int i=0; i<10; i++){
//		vet[i]=i+1;
		cin>>vet[i];
	}
	
	minMax(p, tam, min, max);
	
	return 0;
}

