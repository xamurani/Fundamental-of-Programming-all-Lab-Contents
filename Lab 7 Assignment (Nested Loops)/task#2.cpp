#include<iostream>
using namespace std;
int main()
{
	int i=0;
    while(i<9){
		for (int j=0; j<=i; j++) {
			cout <<  "*";
		}
		i+=2;
		cout<<endl;
	}
	for (int i=1; i<=9; i+=2){
        for (int j=i ; j<=9; j++){
          cout<<"*";
      }
    cout<<endl; 
	}
}
