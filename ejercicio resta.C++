#include<iostream>

#include<conio.h>

using namespace std;

int main(){
	
	int n; 
	
	cout<<"INGRESE LA DIMENSION DE LAS MATRICES:\t "; 
	
	cin>>n; 
	
	int matrizA[n][n]; 
	
	int matrizB[n][n]; 
	
	int matrizC[n][n];
	
	//UTILIZAMOS BUCLES PARA RELLENAR LA MATRIZ A
	
	for(int i=0; i<n; i++){ 
	
		for(int j=0; j<n; j++){
		
			
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]:  "; 
			cin>>matrizA[i][j];
		}
		cout<<endl;
	}
	
	cout<<"MATRIZ A:\n";
	cout<<"\n";
	
	// IMPRIMIR LA MATRIZ A 
	
	for(int i=0; i<n; i++){ 
	
		for(int j=0; j<n; j++){ 
		
			cout<<matrizA[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"\n";
	cout<<"\n";
	
	
	
	//RELLENAMOS LA MATRIZ B
	
	for(int i=0; i<n; i++){ 
	
		for(int j=0; j<n; j++){ 
		
			
			cout<<"Ingrese un numero ["<<i<<"]["<<j<<"]:  ";
			cin>>matrizB[i][j];
		}
		cout<<endl;
	}
	
	cout<<"MATRIZ B:\n";
	cout<<"\n";
	cout<<"\n";
	
	
	//IMPRIMIMOS LA MATRIZ B 
	
	for(int i=0; i<n; i++){ 
	
		for(int j=0; j<n; j++){ 
		
			cout<<matrizB[i][j]<<"\t";
		}//fin del bucle j
		cout<<endl;
	}
	
	
	cout<<"LA RESTA DE LAS MATRIZ A MENOS LA MATRIZ B ES: MATRIZ C";
	cout<<"\n";
	cout<<"\n";
	
	//RESTA DE LAS MATRICES
	
	for(int i=0; i<n; i++){ 
	
		for(int j=0; j<n; j++){ 
		
			matrizC[i][j]=matrizA[i][j]-matrizB[i][j];
			
			cout<<matrizC[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	getch();
	return 0;
}