#include<iostream>
using namespace std;
int main()
{
   int k, i, j;
   for (i=1; i<=3; i++){ 	
    for (k=i; k<3; k++)
	{		
    cout<<" ";
	}
    for(j=1; j<= (2*i -1); j++)
	{
	cout<<"*";
	}
   cout<<endl;
}
   for (i=2; i>=1; i--){ 
	for (k=i; k<=2; k++)
	{
    	cout<<" ";
	}
	for(j=1; j<= (2*i -1); j++)
	{
        cout<<"*";
	}
   cout<<endl;
}
system("pause");
return 0;
}
