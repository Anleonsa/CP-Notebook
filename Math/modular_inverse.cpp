// If mod is prime
template <typename T>
T modular_inverse (T x) {return bin_pow(x, MOD - 2);}