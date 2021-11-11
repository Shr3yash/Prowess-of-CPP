#include <iostream>
#include <bits/c++io.h>
#include <cstring>
using namespace std;

int main(){

        string name;
        char str[20];

        //cin.getline(name, 5);
        //this works only with char declaration way apparently.
        //so we use this generalization:

        getline(cin, name);


        //now lets see a way to convert a string in char array.
        int n = name.length();
        char char_array[n];
        strcpy(char_array, name.c_str());
        for(int i = 0; i<n; i++)
                cout<<char_array[i];


        /*
        *cout<<name.length();
        *cout<<name[6];
        *cout<<name[2];
        */

        /*
        for(int i = 0; i<name.length()/2;i++)
                swap(name[i], name[name.length() - i -1]);
                cout<<name;
        */

        return 0;

/*
        int array[4] = { 10, 20, 30, 40 };
        cout<<array<<endl<<&array<<endl<<array+1<<endl<<&array+1;

        //array is jst pointer to the first element and it is of integer type increment, &array is a ptr to the whole array[].


        //access array size wo sizeof()

        int size = *(&array + 1) - array;
        cout<<"\n"<< size;

*/


        }

