#include<bits/stdc++.h>
#define p 3.14159

using namespace std;

void calcular(double *p1){
	double area=0;
	double volume=0;
	
	area=4*p*pow(*p1,2);
	volume=(4.0/3.0) * p * pow(*p1,3);
	
	printf("Area: %.2lf\n",area);
	printf("Volume: %.2lf\n",volume);
}

int main(){
	double R;
	cin>>R;
	
	calcular(&R);
	
	return 0;
}

