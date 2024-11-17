#include<iostream>
#include<limits.h>
using namespace std;

int main(){
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout<<"Size of minimum char: "<< CHAR_MIN <<endl;
    cout<<"Size of maximum char: "<< CHAR_MAX <<endl;

    cout<<"Size of int: "<<sizeof(int)<< "byte"<<endl;
    cout<<"Size of short int: "<<sizeof(short int)<< "byte" <<endl;
    cout<<"Size of long int: "<<sizeof(long int)<< "byte" <<endl;
    cout<<"Size of Signed long int: "<<sizeof(signed long int)<< "byte" <<endl;
    cout<<"Size of Unsigned long int: "<<sizeof(unsigned long int)<< "byte" <<endl;

    cout<<"size of double: "<<sizeof(double)<<"byte" <<endl;
    cout<<"Size of wchar_t: "<<sizeof(wchar_t)<< "byte"<<endl;
    return 0;

}