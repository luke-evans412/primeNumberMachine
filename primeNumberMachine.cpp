#include <iostream>
#include <list>
#include <math.h>

using namespace std;
    //n variable is declared for comparison
    //list is declared to contain 25 prime numbers
    int n = 1000000001;
    list<int> listOf25;
    int count = 0;
    
    //this is a method that prints the list of 25 prime numbers 
    void printList() {
     for (int item : listOf25) {
        cout << item << " ";
     }
    }
    //determines if the number is prime by calculating its factors
    void factorPrime(){
        for(int i = 1; i <= 1000000000; i++)
        {
            if(n % i == 0){
                count++;
            }
            if(count == 2){
               cout << n << " is not prime." << endl;
               break;
            }
            if((i == 1000000000) && (count == 1)){
                listOf25.push_back(n);
                cout << n << " IS PRIME." << endl;
                break;
            } 
        }
    }
    
int main()
{
    int lowerNumber;
    int upperNumber;
    cout << "Enter two numbers to find the number of prime number between them." << "\n";
    cout << "Start with entering the smaller number: " << "\n";
    cin >> lowerNumber;
    cout << "Now enter the larger number: ";
    cin >> upperNumber;
    //variable declarations for ints and booleans 
    lowerNumber = lowerNumber/(log(lowerNumber));
    upperNumber = upperNumber/(log(upperNumber));
    int difference = upperNumber - lowerNumber;
    bool on = true;
    
    //this while loop runs until there are 25 elements in the list
    while(on) {
     factorPrime();
     //determines if the number of prime numbers in the list is 25. The while loop stops when the condition is true 
     if(listOf25.size() == 25) {
         on = false;
         break;
     } 
     n++;
     count = 0;
    }
    
    cout << "Number of Primes between " << lowerNumber << " and " << upperNumber <<  ": " << difference << endl;
    cout << "List of 25 Primes between 1 billion and 2 billion: " << endl;
    printList();
    return 0;
 }
  
  




