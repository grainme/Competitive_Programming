#include <bits/stdc++.h>

using namespace std;

struct person {
  int height, weight;
};

bool comp(person A, person B) {
  return A.height > B.height || A.weight < B.weight;
}

int main(void) {
  person p1, p2;
  p1 = {10, 3};
  p2 = {10, 8};
  person arr[2];
  arr[0] = p1;
  arr[1] = p2;
  // we can either use lambda or function call
  sort(arr, arr + 2, [&](person A, person B) {
    return A.height > B.height || A.weight < B.weight;
  });
  for (int i = 0; i < 2; i++) {
    cout << arr[i].weight << endl;
  }
}
