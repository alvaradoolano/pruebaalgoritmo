#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int n;
	
	cout<<"Ingrese la Dimension de la MATRIZ: ";
	cin>>n;
	
	cout<<"\n";
	
	int matriz[n][n];
	
	int a=0;
	int m=0;
			
	for(int i=0; i<n; i++){		
			
		for(int j=0; j<=i; j++){
							
			matriz[i][j]=m+j;
			
			cout<<matriz[i][j]<<"\t";
			
		}
		
		a++;
		m=m+a;	
				
		cout<<"\n";
		
	}
		
	getch();
	return 0;
}