#include<iostream>
#include<execute.h>
#include<execute2.h>
using namespace std;

#ifdef EXECUTE_EXAMPLE_1
int main() {
    cout<<"hello first main";
    return 0;
     }// example of one of the "mains" in one cpp
#endif

#ifdef EXECUTE_EXAMPLE_2
int main() { return 0; } // another "main" in an other cpp
#endif

#ifdef EXECUTE_EXAMPLE_3
int main() { return 0; } // yet another "main" somewhere else
#endif
