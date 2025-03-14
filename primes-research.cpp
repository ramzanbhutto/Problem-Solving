#include <cmath>
#include <iostream>

class Solution {
public:
    long long countPrimes(long long n) {
        if (n <= 1)
            return 0;

        // Prime Number Theorem approximation
        double logN = log(n);
        double piN = n / logN;

        // Adjust for better accuracy (optional)
        piN *= 1.1; // Empirical adjustment for better results

        return static_cast<long long>(piN);
    }
};

int main() {
    Solution solution;
    long long n;
  std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Estimated number of primes less than " << n << ": "
              << solution.countPrimes(n) << std::endl;
    return 0;
}
