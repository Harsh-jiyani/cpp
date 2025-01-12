// loops and switch
#include<iostream>
using namespace std;
int  main(){
   int age;
 cout<<"tell me your age"<<endl;
 cin>>age;
 /*
 if ((age <18) && (age>0)){
 cout<<"you can not come to my party"<<endl;
}
 else if  (age==18){
    cout<<"you are kid and  you get kid pass for party"<<endl;
 }
else if (age<1)
{
    cout<<"baby are not allows";
}

else{
    cout<<"welcome to our party"<<endl;
}
*/

// ********************switch************************

switch (age)
{
case 18:
cout<<"you are 18"<<endl;
break;
 
  case 2:
cout<<"you are 2"<<endl;
 break;
 
 case 22:
cout<<"you are 22"<<endl;
 break;

default:
 cout<<"no special case"<<endl; 
    break;
}


return 0;

}