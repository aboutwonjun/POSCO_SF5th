
#include <iostream>
#include <time.h>
#include <vector>

using namespace std;


int main() {

    // 1. 크기가 1인 test_vec 생성
    vector<int> test_vec1 (1);
    // 2. push_back 1억회 수행, ms 단위로 측정 후 출력

    auto start = chrono::steady_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        test_vec1.push_back(i);
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    double result = chrono::duration <double, milli> (diff).count();

    cout << "test_vec 1 수행시간 : " << result << "millisecond" << "\n";
    cout << "test_vec 1 수행시간 : " << result << "millisecond" << "\n";
    // 3. 크기가 1인 벡터 생성
    vector<int> test_vec2 (1);
    // 4. reserve() 1억개 만큼의 공간을 예약.
    test_vec1.reserve(100000000);

    auto start = chrono::steady_clock::now();
    for (int i = 0; i < 100000000; ++i) {
        test_vec1.push_back(i);
    }
    auto end = chrono::steady_clock::now();
    auto diff = end - start;
    double result = chrono::duration <double, milli> (diff).count();

    cout << "test_vec 2 수행시간 : " << result << "millisecond" << "\n";

    return 0;

}
