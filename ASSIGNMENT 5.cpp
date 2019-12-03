#include<iostream> //standard input output header file
#include<stdexcept> //for handling exception
#include<typeinfo> //for variable datatype identification
#include<string> //string comparison purpose
#include<cstring> //for string manipulation in c/c++ for various fun. and array

using namespace std;

int main()
{
int i,n; 
char car;
char city[20];
cout<<"\n ENTER THE CITY OF PERSON:";
cin>>city;
 try
{
 if(strcmp(city, "Pune")&& strcmp(city, "Banglore")&& strcmp(city,"Chennai")&& strcmp(city, "Mumbai")) 
 throw runtime_error("\n PERSON IS NOT STAYING IN Pune/Mumbai/Banglore/Chennai");
}
 catch(const exception& e)
{
  cout<<"CAUGHT EXCEPTION:"<<e.what()<<'\n';
}

cout<<"\n WHETHER THE PERSON HOLDS 4 WHEELER OR NOT? (y/n):";
cin>>car; 
 try
{
 if(car=='n')
 throw runtime_error("\n PERSON SHOULD HOLD FOUR WHEELER");
}
 catch(const exception& e)
{
  cout<<"CAUGHT EXCEPTION:"<<e.what()<<'\n';
}

cout<<"\n INFORMATION OF THE PERSON IS AS FOLLOWS:";
cout<<"\n LOCATION:"<<city;
cout<<"\n HOLDING 4 WHEELER OR NOT?:"<<car<<endl;

return 0;
}

