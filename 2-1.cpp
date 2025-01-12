
//for loop

#include<iostream>
using namespace std;
int main(){
 /*for ( int i = 1; i <= 40; i++)
 {
    cout<<i<<endl;
    
 }*/
//*************************************Infiniteloop***************************** */
/*for (int i = 1; 43 < 35; i++)
{
    cout<< i<<endl;
}

  */

 /*  ***************************** while loop********************************  */
/*int i =1;
 while (i <= 40)
 {
    cout<<i<<endl;
    i++;
 }
 */

// ************************** do while loop *****************************
/*int i =1;
do
{
    cout<<i<<endl;
    i++;
} while (i<=40);
*/


  int n;

    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 10; ++i) {
        cout << n << " * " << i << " = " << n * i << endl;
    }

    return 0;
}