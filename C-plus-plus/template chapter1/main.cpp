#include<iostream>
using namespace std;

template<class Ta, class Tb>
class arithmetic1
{
   Ta num1;
   Tb num2;
  public:
   arithmetic1(Ta nm , Tb nv)
   {
       cout<<nm+nv<<endl;
   }
};

template<typename t , int x>
class voshky
{
    t Tt;
    int  m;
    public :
    voshky(t n, int ax)
    {
       Tt=n;
       m=ax;
    }
    void print()
    {
        cout<<Tt<<" "<<m*100<<endl;
    }
};

template<typename t=int>
class vocal
{
    t Tt;
    public :
    vocal(t n)
    {
       Tt=n;
    }
    void print()
    {
        cout<<Tt<<endl;
    }
};


template<typename tt >
class time
{
    public :
    time(tt df)
    {
      cout<<df<<" it never print integer"<<endl;
    }
};

template<>
class time<int>
{
    public :
    time(int df)
    {
      cout<<df<<" it only print integer"<<endl;
    }

};

template<class pp>
pp heythere(pp iam)
{
    return(iam++)+(++iam);
}

template<int N>
struct elaborate
{
     enum
     {
       val1=2*elaborate<N-1>::val1
     };

};

template<>
struct elaborate<0>
{
    enum
    {
      val1=1
    };

};


int main()
{

    arithmetic1<int,int> b(10,20);
    arithmetic1<double,double> c(23.2424234,5435354.234234);
    arithmetic1<char , char >('a','b');

    voshky<string,9> obj("kickass",20);
    obj.print();

    vocal<string> obj1("sHE") ;
    obj1.print();
    vocal<> obj2(2342);
    obj2.print();

    time<float> obj12(23.23432);
    time<string> obj13("DaFaq");
    time<int> obj21(100);

    cout<<heythere(100)<<endls;

    cout<<elaborate<8>::val1<<endl;

    return 0;
}
