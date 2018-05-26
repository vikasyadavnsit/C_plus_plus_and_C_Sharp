#include<iostream.h>
class a
{
public:
int age;
char name[20];
char gender;
};
class b : public a
{
public:
int bno;
char no[20];
};
class c : class b
{
public:
void input()
{
printf("/nenter the age");
scanf("%d",&age);
puts("/nenter name");
gets(name);
}
}
void main()
{
a d;
a.input();
}
