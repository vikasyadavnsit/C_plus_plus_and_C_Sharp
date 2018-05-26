#include<iostream>
using namespace std;

template <int t>
class piss_off
{
   public:
       static int counter()
       {   int  a=piss_off<t-1>::counter();
           cout<<t<<endl;
           return a;
       }
};

template<>
class piss_off<0>
{
   public:
       static int counter()
       {
           auto m=1;
           return m;
       }
};


class pipp
{
 public:
  static int a;
  pipp()
  {
    a++;
    cout<<a<<endl;
  }
};
int pipp::a=0;

int recur(int N)
{
  if(N==0) return 1;
  recur(N-1);
  cout<<N<<endl;

}


int main()
{
  piss_off<100>::counter();
 // pipp obj[100];
   //recur(100);



  return 0;

}
