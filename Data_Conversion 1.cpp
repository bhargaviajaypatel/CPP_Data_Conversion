#include<iostream>

using namespace std;

class weight

{

int kilo,gram;

public:

weight(int,int);

operator int();

~weight()

{ }

};

weight::weight (int a,int b)

{

//cout<<"object created with two parameters"<<endl;

kilo = a;

gram = b;

}

weight::operator int()

{

//cout<<"Class type to Basic type conversion"<<endl;

return(kilo*1000+gram);

}

int main()

{

int k,g,duration;

cout<<"Class type to Basic type conversion"<<endl;

cout<<"Enter kilograms:";

cin>>k;

cout<<"Enter Grams";
cin>>g;

weight t(k,g);

//duration = t;

duration = (int) t;

cout<<"Kilogram:"<<k<<endl;
cout<<"Gram:"<<g<<endl;

cout<<"Total:"<<duration;

return 0;

}