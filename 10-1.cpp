
//note:this is simple Polymorphism

#include<iostream>
using namespace std;
int  main(){
// Base class
class Animal {
    public:
      void animalSound() {
        cout << "The animal makes a sound \n";
      }
  };
  
  // Derived class
  class Pig : public Animal {
    public:
      void animalSound() {
        cout << "The pig says: wee wee \n";
      }
  };
  
  // Derived class
  class Dog : public Animal {
    public:
      void animalSound() {
        cout << "The dog says: bow wow \n";
      }
  };
 
}