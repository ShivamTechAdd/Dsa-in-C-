#include<iostream>
#include<vector>
#include<math.h>
#include<limits.h>
using namespace std;

        bool isPrime(int n) {
            if (n <= 1) return false;
            if (n <= 3) return true;
            if (n % 2 == 0 || n % 3 == 0) return false;
            for (int i = 5; i * i <= n; i += 6) {
                if (n % i == 0 || n % (i + 2) == 0)
                    return false;
            }
            return true;
        }
    
        int sumOfPrimeFactors(int n) {
            int sum = 0;
            for (int i = 2; i * i <= n; i++) {
                while (n % i == 0) {
                    sum += i;
                    n /= i;
                }
            }
            if (n > 1) sum += n;  // If there's any prime factor left
            return sum;
        }
    
        int smallestValue(int n) {
            while (!isPrime(n)) {
                n = sumOfPrimeFactors(n);
            }
            return n;
        }
    
    int main(){
        int n;
        cout<<"Enter the noumber:-";
        cin>>n;
      cout<<smallestValue(n);
    }