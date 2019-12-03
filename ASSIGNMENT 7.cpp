#include<iostream>
#include<list>
using namespace std;
int display(list<int>&l)
{
list<int>::iterator itr;
for(itr=l.begin();itr!=l.end();++itr)
{
cout<<*itr;
cout<<" ";
}
return 0;
}
int main()
{
int value;
list<int>l1(3);
list<int>l2(5);
cout<<"\n ADD AT THE BACK"<<endl;
for(int i=0;i<5;i++)
{
cin>>value;
l1.push_back(value);
l2.push_back(value+5);
}
display(l1);
cout<<" ";
display(l2);
cout<<" ";
cout<<"\n SORT LIST 1 AND LIST 2"<<endl;
l1.sort();
l2.sort();
display(l1);
cout<<" ";
display(l2);
cout<<" ";

cout<<"\n MERGE TWO LIST"<<endl;

l1.merge(l2);
display(l1);
cout<<" ";
cout<<"\nAdd at the front\n";
for(int i=0;i<5;i++)
{
cin>>value;
l1.push_front(value);
l2.push_front(value+5);
}
display(l1);
cout<<" ";
display(l2);
cout<<" ";
return 0;
}
