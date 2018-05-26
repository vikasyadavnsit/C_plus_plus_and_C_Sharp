#include<stdio.h>
class a
{
public:
int age;
char name[20];
char gender;
};
class b : public a
{int b::n;
public:
int bno;
char no[20];
};
class c : b
{

public:
void input()
{
printf("\n enter the age");
scanf("%d",&age);
puts("\n enter name");
gets(name);
puts("\n enter bed n.");
scanf("%d",&bno);
}
void output()
{
    printf("age");
    puts(n);
}
};
int main()
{
c d;
d.input();
return 0;
}
