#include <iostream>
using namespace std ;
int main()
{
     /*Write a in C++ program to find the size of fundamental data types.
Sample Output:
Find Size of fundamental data types :
------------------------------------------
The sizeof(char) is : 1 bytes
The sizeof(short) is : 2 bytes
The sizeof(int) is : 4 bytes
The sizeof(long) is : 8 bytes
The sizeof(long long) is : 8 bytes
The sizeof(float) is : 4 bytes
The sizeof(double) is : 8 bytes
The sizeof(long double) is : 16 bytes
The sizeof(bool) is : 1 bytes*/
   int a=1;
    char b= 'b';
   /* float a;
    double a;
    long a;
    long long a;
    long double a;
    bool a;*/

cout<<"The sizeof(char) is :" <<sizeof(b ) <<"bytes\n";
 //cout<<"The sizeof(short) is : "<<sizeof(short)<<"bytes\n";
 cout<<"The sizeof(int) is :"<< sizeof(a) <<"bytes\n";
 //cout<<"The sizeof(long) is :"<<sizeof(a) <<"bytes \n";
 /*cout<<"The sizeof(long long) is : "<<sizeof(a)<<" bytes\n";
 cout<<"The sizeof(float) is : "<<sizeof(a)<<"bytes \n";
cout<<"The sizeof(double) is :"<<sizeof(a) <<" bytes\n";
 cout<<"The sizeof(long double) is :"<<sizeof(a)<<"  bytes\n";
 cout<<"The sizeof(bool) is :"<<sizeof(a)<< "bytes\n";*/

    
    
    
    return 0;
}
