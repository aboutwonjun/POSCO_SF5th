#include <iostream>
#include <string>
using namespace std;



// bool isAllDigits(const string &s) {
//     for (char c : s) { // 문자열 s의 각 문자를 반복하면서
//         if (!isdigit(c)) { //만약 현재 문자 c가 숫자가 아니라면 false
//             return false;
//         }
//     }
//     return true;
// } 




bool isAllDigits(int num) {
    string s = to_string(num); // 입력된 숫자를 문자열로 변환
    for (char c : s) { // 문자열 s의 각 문자를 반복하면서
        if (!isdigit(c)) { // 만약 현재 문자 c가 숫자가 아니라면
            return false; // 거짓을 반환하고 함수를 종료합니다.
        }
    }
    return true; // 모든 문자가 숫자인 경우 참을 반환합니다.
}


int main() {
    string one, two;

    // 1. 두 문자열을 입력받아서 둘 모두 숫자인지 검사, 아니면 다시 입력 받음 
    while (true) {
        cout << "두 문자열을 입력하세요: ";
        cin >> one >> two;

        int oneNum = stoi(one); // 문자열을 정수로 변환
        int twoNum = stoi(two); // 문자열을 정수로 변환

        if (isAllDigits(oneNum) && isAllDigits(twoNum)) { // isAllDigits 함수에 정수를 전달하여 호출
            cout << "OK" << endl;
            break;

        } 
        else {
            cout << "재입력해주세요" << endl;
        }
    }
    
    // 2. 입력받은 두 숫자를 이어 붙여서 출력
    string result = one + two;
    cout << "두 숫자를 이어붙인 결과: " << result << endl;

    // 3. 앞에서 입력받은 두 숫자의 합을 출력
    int sum = stoi(one) + stoi(two);
    cout << "두 숫자의 합: " << sum << endl;

    return 0;
}




