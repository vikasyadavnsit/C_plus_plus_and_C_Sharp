#include<iostream>
#include<regex>
using namespace std;

int main()
{
    string str;
    while(99)
    {
       cin>>str;
    //  register::ECMAscript;
      // regex b_bb("abc");
      // regex b_bb("abc.");
       // regex b_bb("abc.",regex_constants::icase);
      //  regex b_bb("abc?");
      // regex b_bb("abc*");
       //   regex b_bb("ab*c*");
         //regex b_bb("abc+", regex_constants::ECMAScript);
         // regex b_bb("ab[c d]");
           // regex b_bb("ab[^cd]");
          //  regex b_bb("ab[^cd]*");
           //  regex b_bb("ab[^cd]{3}");
           //  regex b_bb("ab[^cd]{3,}");
            //regex b_bb("ab[^cd]{3,5}");
            //regex b_bb("abc|def");
           // regex b_bb("abc|d[ef]");
            //regex b_bb("(abc)def+\\1");
            //regex b_bb("(ab)d(ef+)\\2\\1");
           //  regex b_bb("[[:W:]]+");
            //   regex b_bb("[[:W:]]+@[[:W:]]+\.com");
            //  regex b_bb("^abc");
             //   regex b_bb("^abc[[:W:]]+");
            //   regex b_bb("abc$");
             //   regex b_bb("[[:W:]]+abc$");
              //    regex b_bb("[[:digit:]]+abc$");
         regex b_bb("[[:alpha:]]+abc$");


  //       bool ma_tch=regex_match(str,b_bb);
          bool ma_tch=regex_search(str,b_bb);


       cout<<(ma_tch ? "Matched" : "Not Matched");

    }

    return 2;
}
