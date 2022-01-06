
// Your First C++ Program
#include <vector> 
#include <iostream> 
#include <locale> 
 
int main() { 
    unsigned long primes = 0; 
 
    std::locale me(""); 
    std::cout.imbue(me); 
    int number = 1'000'000; 
    std::vector<bool> sieve(number,false); 
    sieve[0] = sieve[1] = true; 
    for(int i = 2; i<number; i++) { 
        if(!sieve[i]) { 
            ++primes; 
            for (int temp = 2*i; temp<number; temp += i) 
                sieve[temp] = true; 
        } 
    } 
    std::cout << "found: " << primes << " Primes\n"; 
} 
