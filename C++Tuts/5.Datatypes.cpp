#include <iostream>
#include <climits>
#include <cfloat>
#include <iomanip>

using namespace std;

int main()
{
   //Built-in types: int, char, wchar_t, float, double, bool, void
   //Modifiers: signed, unsigned, short, long

   char c = 'A';
   signed char sc = 'B';
   unsigned char usc = 'C';
   

   cout<<"Size of char:"<<sizeof(char)<<setw(40)<<"   Range of char:"<<CHAR_MIN<<"-"<<CHAR_MAX<<setw(20)<<"   Value:"<<c<<endl;
   cout<<"Size of signed char:"<<sizeof(signed char)<<setw(40)<<"   Range of signed char:"<<SCHAR_MIN<<"-"<<SCHAR_MAX<<setw(20)<<"   Value:"<<sc<<endl;
   cout<<"Size of unsigned char:"<<sizeof(unsigned char)<<setw(40)<<"   Range of unsigned char:"<<"No macros available"<<setw(20)<<"   Value:"<<usc<<endl;

   short int si = 0;
   signed short int ssi = -1;
   unsigned short int usi = 1;
   int i = 0;
   signed int sii = -1;
   unsigned int usii = 1;
   long int li = 0;
   signed long int sli = -1;
   unsigned long int usli = 1;

   cout<<"Size of short int:"<<sizeof(short int)<<setw(40)<<"   Range of short int:"<<SHRT_MIN<<"-"<<SHRT_MAX<<"   Value:"<<si<<endl;
   cout<<"Size of signed short int:"<<sizeof(signed short int)<<setw(40)<<"   Range of signed short int:"<<SHRT_MIN<<"-"<<SHRT_MAX<<"   Value:"<<ssi<<endl;
   cout<<"Size of unsigned short int:"<<sizeof(unsigned short int)<<setw(40)<<"   Range of unsigned short int:"<<"No macros available"<<"   Value:"<<usi<<endl;

   cout<<"Size of int:"<<sizeof(int)<<setw(40)<<"   Range of int:"<<INT_MIN<<"-"<<INT_MAX<<"   Value:"<<i<<endl;
   cout<<"Size of signed int:"<<sizeof(signed int)<<setw(40)<<"   Range of signed int:"<<INT_MIN<<"-"<<INT_MAX<<"   Value:"<<sii<<endl;
   cout<<"Size of unsigned int:"<<sizeof(unsigned int)<<setw(40)<<"   Range of unsigned int:"<<"No macros available"<<"   Value:"<<usii<<endl;

   cout<<"Size of long int:"<<sizeof(long int)<<setw(40)<<"   Range of long int:"<<INT32_MIN<<"-"<<INT32_MAX<<"   Value:"<<li<<endl;
   cout<<"Size of signed long int:"<<sizeof(signed long int)<<setw(40)<<"   Range of signed long int:"<<INT32_MIN<<"-"<<INT32_MAX<<"   Value:"<<sli<<endl;
   cout<<"Size of unsigned long int:"<<sizeof(unsigned long int)<<setw(40)<<"   Range of unsigned long int:"<<"No macros available"<<"   Value:"<<usli<<endl;



    float f = 10.1;
    double d = 20.009;


    cout<<"Size of float:"<<sizeof(float)<<setw(40)<<"   Range of float:"<<FLT_MIN<<"-"<<FLT_MAX<<"   Value:"<<f<<endl;
    cout<<"Size of double:"<<sizeof(double)<<setw(40)<<"   Range of unsigned long int:"<<DBL_MIN<<"-"<<DBL_MAX<<"   Value:"<<d<<endl;
 
}