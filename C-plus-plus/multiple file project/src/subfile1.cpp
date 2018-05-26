#include<iostream>
using namespace std;

#include "subfile1.h"

subfile1::subfile1()
{
   cout<<" Calling Constructor from the Subclass "<<endl;
}

subfile1::~subfile1()
{
   cout<<" Calling Destructor from the Subclass "<<endl;
}
