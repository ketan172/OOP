#include<iostream>
using namespace std;


template <class T>
void selectionSort(T arr[], int n)  
{  
    int i, j, min_idx;  
    for (i = 0; i < n-1; i++)  
    {  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  			T temp=arr[min_idx];
  			arr[min_idx]=arr[i];
  			arr[i]=temp;	
 
    }  
}  
  
template <class P>
void printArray(P arr[], int size)  
{  
    int i;  
    for (i=0; i < size; i++)  
        cout << arr[i] << "   ";  
    cout << endl;  
}  
  

int main()  
{  	int k;
        int n;
do{
cout<<"ENTER 1. TO SORT INTEGER ARRAY \n 2. TO SORT FLOAT ARRAY"<<endl;
cin>>n;
case 1:
		cout<<"\n INTEGER ARRAY";
		cout<<"\n ENTER SIZE OF ARRAY";
		cin>>k;
		int arr[k];
		for(int i=0;i<k;i++)
		{
			cout<<"\n ENTER ELEMENT";
			cin>>arr[i];
		}  
    selectionSort(arr, k);  
    cout << "\nSORTED ARRAY: \n";  
    printArray(arr, k);
    break;
case 2:  
    
    cout<<"\n  FLOAT ARRAY";
		cout<<"\n ENTER THE SIZE OF ARRAY";
		cin>>k;
		float carr[k];
		for(int i=0;i<k;i++)
		{
			cout<<"\n ENTER ELEMENT NO:";
			cin>>carr[i];
		}  
    selectionSort(carr, k);  
    cout << "\nSORTED ARRAY: \n";  
    printArray(carr, k);
      break;
default:"\n ENTER A VALID CHOICE"<<endl;
}while(n<3);
    return 0;  
}  
  

