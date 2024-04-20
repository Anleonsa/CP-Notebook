const int mxM = 1e5;
 
vector<int> primes = {2};
bool isPrime[mxM + 1] = {false};
 
void fillPrimes() {
    isPrime[2] = true;
    for (int i = 3; i <= 99991; i += 2) {
        bool prime = true;
        for (int j = 0; j < 65 && primes[j] * primes[j] <= i; j++) {
            if (i % primes[j] == 0) {
                prime = false;
                break;
            }
        }
        if (prime) {
            if (i <= 316) primes.pb(i);
            isPrime[i] = true;
        }
    }
}