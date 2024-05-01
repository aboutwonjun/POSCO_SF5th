
#include <iostream>
#include <string>
using namespace std;


int main() {

    cout << "학생들의 정보를 관리해주는 간단한 프로그램입니다." << endl;
    
    string exit_option;

    while (true) {
        cout << "프로그램을 시작하려면 '1'을 종료하려면 'exit'를 입력하세요): ";
        cin >> exit_option;
        if (exit_option == "exit") {
            cout << "프로그램을 종료합니다." << endl;
            break;
        }

        else if (exit_option == "1") {
            cout << "프로그램을 시작합니다." << endl;
            break;
        }

    }

    
    // 1. 몇명의 학생을 입력할 것인지 묻기
    int student_num = 0;
    cout << "몇 명의 학생을 입력하시겠습니까? : ";
    cin >> student_num;

    // 1-1. 동적 배열 생성
    string* name = new string[student_num];
    int* age = new int[student_num];
    int* birth_year = new int[student_num];
    int* birth_month = new int[student_num];
    int* birth_day = new int[student_num];


    //2. 학생 수 만큼 이름, 나이, 생일 순서로 한번에 입력받기
    for (int i = 0; i < student_num; i++){
        cout << i + 1<< "번째 학생의" << "이름을 입력하세요 : ";
        cin >> name[i];
        cout << i + 1<< "번째 학생의" << "나이를 입력하세요 : ";
        cin >> age[i];
        cout << i + 1<< "번째 학생의" << "생일을 입력하세요 (ex : YYYYMMDD) : ";
        cin >> birth[i];
    } 

    //3-1. 학생의 정보 출력 - for 문을 돌며 저장 된 값 출력하기 
    for (int i = 0; i < student_num; i++) {
        cout << i + 1 << "번째 학생의 정보는 " << name[i] << ", " << age[i] << ", " << birth[i] << "입니다." << endl;
    }

    //3-2. 평균 나이
    int sum_age = 0;
    for (int i = 0 ; i < student_num; i++){
        sum_age += age[i];
    } 
    double aver_age = sum_age / student_num;
    cout << "학생들의 평균 나이는? : " << aver_age << endl;

    //3-3. 가장 빠른 생일? 의 의미를 다시 여쭤보기 
    //YYYYMMDD
    int earliest_birth_index = 0; // 가장 먼저 입력 받은 학생부터 비교

    for (int i = 1; i < student_num; i++) {
        if (birth_month[i] < birth_month[earliest_birth_index]) {
            earliest_birth_index = i; // 더 빠른 월을 가진 학생의 인덱스 저장
        } 
        else if (birth_month[i] == birth_month[earliest_birth_index] && birth_day[i] < birth_day[earliest_birth_index]) {
            earliest_birth_index = i; // 더 빠른 월이 같고 더 빠른 일을 가진 학생의 인덱스 저장
        }
    cout << "가장 빠른 생일(어린)을 가진 학생은 " << name[earliest_birth_index] << "입니다." << endl;


    // 동적 배열 해제
    delete[] name;
    delete[] age;
    delete[] birth_year;
    delete[] birth_month;
    delete[] birth_day;
    
    return 0;

    }
}
