#include<iostream>
#include<vector>
using namespace std;
vector<int> v;
int v_size,v_elements,v_position,v_scalar;
vector <int>::iterator itr=v.begin();
void display()
{
	for(int i=0;i<v.size();i++)
	  cout<<v[i]<<" ";
	cout<<endl;
}
void accept()
{
	cout<<"ENTER THE SIZE OF VECTOR : ";
	cin>>v_size;
	cout<<"\nENTER "<<v_size<<" VALUES ";
	for(int i=0;i<v_size;i++)
	{
		cin>>v_elements;
		v.push_back(v_elements);
	}
	display();
}
void scalar()
{
	cout<<"\n ENTER THE SCALAR VALUE TO MULTIPLY: ";
	cin>>v_scalar;	
	for(int i=0;i<v.size();i++)
	v[i]=v[i]*v_scalar;
	display();
}
void modify()
{
	cout<<"ENTER THE POSITION TO MODIFY: ";
	cin>>v_position;
	itr=v.begin()+v_position;
	cout<<"\nENTER THE NEW VALUE: ";
	cin>>v_elements;	
	v.at(v_position)=v_elements;
	display();
}
void insert_pos()
{ 
	cout<<"\nENTER THE POSITION: ";
	cin>>v_position;
	cout<<"\nENTER THE VALUE: ";
	cin>>v_elements;
	itr=v.begin()+v_position;
	v.insert(itr,v_elements);
	display();
}
int main()
{
	int ch;
	accept();
	do{
	cout<<"1.DISPLAY \n2.MODIFY\n3.MULTIPLY\n4.INSERT AT POSITION \n5.EXIT";
	cout<<"\nENTER CHOICE: ";
	cin>>ch;
	switch(ch)
	{
		case 1:display();
			break;
		case 2:modify();
			break;
		case 3:scalar();
			break;
		case 4:insert_pos();
			break;
		case 5:return 0;
		default:cout<<"\nWRONG CHOICE";
	
	}
	}while(ch<=5);	
	return 0;
}

