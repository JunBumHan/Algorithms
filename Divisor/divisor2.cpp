#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n / 2; ++i) {
        if(n % i == 0) {
            cout << "n의 약수는" << i << "입니다" << endl;
        }
    }
    cout << "n의 약수는" << n << "입니다" << endl;
    return 0;
}

/*
    이 방법은 일일히 어떤 수의 약수는 나를 제외한 수의 절반 보다 작다는 사실을 착안하여 만든 방법입니다.
*/

