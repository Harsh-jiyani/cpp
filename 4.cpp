//function overloadings
/*#include<iostream>
 using namespace std;
 int main (){
    int a;
    cout<<"enter a number"<<endl;
cin>>a;
for (int i = 0; i <=10; i++)
{
    cout<<a<<"x"<<i<<"="<<a*i<<endl;
}
return 0;
}*/
#include<iostream>
 using namespace std;
 int sum(int a, int b){
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
 }
    int sum(int a, int b, int c){
        cout<<"using function with 3 arguments"<<endl;
        return a+b+c;
    }
     
int main (){
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3, 7 and 6 is "<<sum(3,7,6)<<endl;
    
return 0;
}
 