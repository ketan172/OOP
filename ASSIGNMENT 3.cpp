#include<iostream>
using namespace std;

 class Shape
{
   public: 
          
        
virtual void get_data()=0;
virtual void display_area()=0;
};

class Rectangle:public Shape
{    
double a,b,area1;
 	
public: 
	
        void get_data()
	{
   		cout<<"\n ENTER THE LENGTH AND BREADTH OF RECTANGLE: ";
		cin>>a>>b;
	}
        void display_area()
	{
		cout<<"\n LENGTH: "<<a;
		cout<<"\n BREADTH: "<<b;
		area1=a*b;
		cout<<"\n AREA OF RECTANGLE IS: "<<area1;
	}
};
class Traingle :public Shape
{
double a,b,area2;
	public:
		
	void get_data()
	{
		cout<<"\n ENTER THE BASE AND HEIGTH OF TRIANGLE:";
		cin>>a>>b;
        }
        void display_area()
	{
		cout<<"\n BASE : "<<a;
		cout<<"\n HEIGHT: "<<b;
		area2=(0.5*(a*b));
		cout<<"\n AREA OF TRIANGLE IS: "<<area2;
	}
};
class Circle :public Shape
{
double r,area3;
	public:
		
	void get_data()
	{
		cout<<"\n ENTER THE RADIUS OF CIRCLE:";
		cin>>r;
        }
        void display_area()
	{
		cout<<"\n RADIUS : "<<r;
		
		area3=(3.14*(r*r));
		cout<<"\n AREA OF CIRCLE IS: "<<area3;
	}
};
int main()
{
   
    Rectangle R;
     
    Traingle T;
  
    Circle C;

    int ch;
do{
    cout<<"\n ENTER YOUR CHOICE: ";
    cout<<"\n 1. AREA OF RECTANGLE"<<"\n 2. AREA OF TRIANGLE"<<"\n 3.AREA OF CIRCLE"<<endl; 
    cin>>ch;
  
    switch(ch)
    {
        
	
	case 1: 	
      	       R.get_data();
     	       R.display_area();
               break;
	case 2:
               T.get_data();
	       T.display_area();
               break;
        case 3:
               C.get_data();
	       C.display_area();
               break;
        default:
               cout<<"\n INVALID CHOICE"<<endl;
   }
   }while(ch<4);		

     
      
    return 0;
}




