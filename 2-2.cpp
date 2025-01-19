
// array
#include<iostream>
using namespace std;
int main(){
    // array example
    
    int mathmark[]={12,23,94,54};
    
     cout<<mathmark[0]<<endl;

     cout<<mathmark[1]<<endl;
    
     cout<<mathmark[2]<<endl;
     
     cout<<mathmark[3]<<endl;
    
//cout<<"This are mathmarks"<<endl;
/* ********************************************this is array using loops *************************************** 
for (int  i = 1; i <= 1 ; i++)
{
   cout<<"the value after adding 10 is_"<<mathmark[0] + 10<<endl;
   cout<<"the value after adding 10 is_"<<mathmark[1] + 10<<endl;
   cout<<"the value after adding 10 is_"<<mathmark[2] + 10<<endl;
   cout<<"the value after adding 10 is_"<<mathmark[3] + 10<<endl;
}





     cout<<mark[0]<<endl;
    
     cout<<mark[1]<<endl;
    
     cout<<mark[2]<<endl;
    
     cout<<mark[3]<<endl;*/


     // pointers and array ***********************************************************************

     int* p = mathmark;
     cout<<*(p++);
     
     cout<<*(++p);
     /*cout<<"the value of marks[0]"<<*(p+1);
     
     cout<<"the value of marks[1]"<<*(p+2);

     cout<<"the value of marks[2]"<<*(p+3);

     cout<<"the value of marks[3]"<<*(p+4);*/




     return 0;
    
    
}