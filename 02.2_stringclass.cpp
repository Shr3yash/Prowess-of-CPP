#include <iostream>
#include <bits/c++io.h>

using namespace std;

int main()
{
        int times;
        cin>>times;
        string fun(times, 'x');
        cout<<fun<<'\n';

        string fun2(fun, 3, 4);
        //initialized string fun2 from fun from 3rd index upto 4 characters.
        //can also replace numbers by fun.begin() i.e. the starting value/index and fun.begin()+ any integer, in bound int**
        cout<<fun2;

        const char* funarr = fun.c_str();
        //returns char array of fun string with \0 appended at the back.


        fun2.clear(); //yes, this deletes.
        char ch = fun.at(2); //fun[2] same. beware this is third character of the string not 2nd.

        /*
        char fu[5] = "blah";
        char f = fu.front();
        char b = fu.back();
        */

        fun.append("attribute");
        fun.append(fun,3,6); //appends from 3rd index to 6th.
        cout<<endl<<fun;

        //same thing happens with       .erase()      in terms of syntax

        fun.replace(3, 9, "yooooo");
        cout<<endl<<fun;

        //one more thing
        int variable = fun.find("o");
        cout<<endl<<variable;
        //returns "INDEX" at which that argument is encountered for the very first time.


        //and more
        if(fun.compare(fun)==0)
                cout<<'\n'<<"equal or what?"<<'\n';

        //and more fun
        cout<<fun.find("yooo")<<'\n';
        //returns index from where "yooo" starts.
        //try finding something which is partially present in our string, partially from the last.



        return 0;

}
