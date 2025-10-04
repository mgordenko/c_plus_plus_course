#include <iostream>
#include <vector>
#include <vector>
#include <random>

std::mt19937_64 rd(time(nullptr));

double rnd() {
  return 1.0 * rd() / UINT64_MAX;
}

double p(double t, double df) {
  return std::exp(df/t);
}


int main() {
  size_t n;
  std::cin >> n;
  std::vector<int> w(n);
  long long s0 = 0;
  long long s1 = 0;
  for (auto& item : w) {
    std::cin >> item;
    s0 += item;
  }
  std::vector<int> mask(n); // 0 - в 1 куче элемент, 1 в 2 куче
  long long curr = s0;
  int best = s0;
  double t = 100000;
  while (t > 0.00001) {
    t *= 0.999997;

    size_t index = rd() % n;

    if (mask[index] == 0) {
      s0 -= w[index];
      s1 += w[index];
    } else {
      s0 += w[index];
      s1 -= w[index];
    }
    int delta = std::abs(s0 - s1);
    if(delta < curr || p(t, curr - delta) > rnd()){
      mask[index] = 1 - mask[index];
      curr = delta;
      best = std::min(best, delta);
    } else if( mask[index] == 0 ){
      s0 += w[index];
      s1 -= w[index];
    } else {
      s0 -= w[index];
      s1 += w[index];
    }
  }

  std::cout << best << '\n';
  return 0;
  std::cout << best << '\n';
  return 0;
}