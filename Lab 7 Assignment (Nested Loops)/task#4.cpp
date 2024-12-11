#include<iostream>
#include<string>
using namespace std;
int main()
{
	int i,j; 
   	for (i=4;i>=1;i--){ 
		for (j=4-i;j>0;j--){ 
			cout << " "; 
		} 
		for (j=0;j<2*i-1;j++){
			if(j%2 == 1){ 
				cout << "0"; 
			}else{ 
				cout << "1"; 
			} 
		} 
		cout << "\n"; 
	} 
}
