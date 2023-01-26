#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cout << "n의 약수" << i << "입니다" << endl;
        }
    }
    return 0;
}

/*
    약수란 
    어떤 수나 식을 나누어 나머지가 없이 떨어지는 수나 식을 일컫는 말.

    시간복잡도 
    O(N)

    이 방법은 일일히 이 수가 나머지가 없이 떨이지나 확인하여 약수를 구하는 방법입니다. 
*/