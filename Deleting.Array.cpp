#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	float avg[20];
	cout<<"n:";cin>>n;
	//input
    for(i=0;i<n;i++){
    	cout<<"avg:"<<"["<<i<<"]:"; cin>>avg[i];
	}
	//loop delete
	for(i=0;i<n;i++)
		if(avg[i]<50){
			n=n-1;
			for(j=i;j<n;j++)
				avg[j]=avg[j+1];
				i--;
				
			}
			
	
	//output
	for(i=0;i<n;i++){
		cout<<avg[i]<<"\t";
	}
	return 0;	
}







