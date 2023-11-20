#include<iostream>
using namespace std;
int main(){
  int i,n,j;
  float avg[20],tmp;
  cout<<"Input n : ";cin>>n;
  //input
  for(i=0;i<n;i++){
    cout<<"Input average "<<"["<<i<<"]:";cin>>avg[i];
  }  
  cout<<"After delete"<<endl;
  //delete
  for(i=0;i<n;i++)
    if(avg[i]<50)
    {
      n=n-1;
      for(j = i ; j < n ;j++)
      avg[j] = avg[j+1];
      i--;
    }
    for(i=0;i<n;i++){
    cout<< avg[i]<<"\n";
  }
  cout<<"After sort"<<endl;
  //sort 
  for(i=0;i<n-1;i++)
  for(j=i+1;j<n;j++)
  if(avg[i]>avg[j]){
    tmp    = avg[i];
    avg[i] = avg[j];
    avg[j] = tmp;
  }
  //output
  for(i=0;i<n;i++){
    cout<< avg[i]<<"\n";
  }
  return 0;
}


//#include<iostream>
//#include<conio.h>
//using namespace std;
//	int main(){
//		int i,j,n;
//		float avg[20],tmp;
//		
//		cout<<"Input n:";cin>>n;
//		for(i=0;i<n;i++){
//			cout<<"Average["<<i<<"]:";cin>>avg[i];
//		}
//		
//		for(i=0;i<n;i++)
//			for(j=i+1;j<n;j++)
//				if(avg[i]>avg[j]){
//					tmp=avg[i];
//					avg[i]=avg[j];
//					avg[j]=tmp;
//				}
//		for(i=0;i<n;i++)
//			cout<<"\t"<<avg[i]<<endl;	
//			
//	getch();
//	return 0;
//}


//#include<iostream>
//using namespace std;
//int main(){
//	int n,i,j;
//	float tmp;
//	string name[20];
//	cout<<"Enter n:";cin>>n;
//	for(i=0;i<n;i++){
//		cout<<"name["<<i<<"]:";cin>>name[i];
//	}
//	//sorting
//	for(i=0;i<n-1;i++)
//		for(j=i+1;j<n;j++)
//			if(name[i]>name[j]){
////				tmp=name[i];
//				name[i]=name[j];
//				name[j]=tmp;
//			}
//	for(i=0;i<n;i++)
//		cout<<name[i]<<endl;	
//	
//	//Deteting
//	
//	return 0;
//}










































