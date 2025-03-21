#include <iostream>
#include <math.h>
using namespace std; 

int getSum(int n){
    
    int sum = 0;
    
    for(int i = 1; i < sqrt(n); i++) { 
if (n % i == 0) { 
// For n : (1, n) will always be pair of divisor // acc to def., we must ignore adding n itself as divisor // when calculating for abundant number
 if(i == 1) 
sum = sum + i; 
// Example For 100 (10,10) will be one of the pair
 // But, we should add value 10 to the sum just once 
else if(i == n/i) 
sum = sum + i;
 // add both pairs as divisors
 // For any divisor i, n/i will also be a divisor
 else 
sum = sum + i + n/i; 
} 
} 
return sum; 
} 
int main() { 
int n = 12; 
int sum = getSum(n); 
if(sum > n) { 
cout << n << " is an Abundant Number\n";
 cout << "The Abundance is: " << (sum-n); 
} else
 cout << n << " is not an Abundant Number\n"; 
} 
// Time Complexity: O(√N) 
// Space Complexity: O(1)