#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    vector<int> solution;

    int n;
    cin >> n;

    for (int i = 1; i <= sqrt(n); ++i) {
        if(n % i == 0) {
            solution.push_back(i);
            if(i != n / i) solution.push_back(n / i);
        }
    }

    sort(solution.begin(), solution.end());

    for (auto i = solution.begin(); i != solution.end(); ++i) {
        cout << "n의 소수는" << *i << "입니다" << endl;
    }

}

/*
    이 방법은 수학적 원리는 잘 모르겠지만
    약수는 대응되는 수가 존재하기 때문에 위처럼 작성이 가능 한것 같다.
*/