//
// Created by Kina on 2020/02/05.
//
/*
#include <iostream>
#include <cstring>
using namespace std;

template <class T>
T Max(T a, T b){
    return a>b?a:b;
}

template <>
char* Max(char* a, char* b){
    cout<<"char* Max<char*>(char* a, char* b)"<<endl;
    return strlen(a)>strlen(b)?a:b;
}

template <>
const char* Max(const char* a, const char* b){
    cout<<"const char* Max<char*>(const char* a, const char* b)"<<endl;
    return strcmp(a, b)>0?a:b;
}

int main(void){
    cout<<Max(11,15)<<endl;
    cout<<Max('T', 'Q')<<endl;
    cout<<Max(3.5, 7.5)<<endl;
    cout<<Max("Apple", "Zoodasa")<<endl;

    char str1[]="Apple";
    char str2[]="Zoodasa";
    cout<<Max(str1, str2)<<endl;
    return 0;
}*/