// 파일 거꾸로 읽기



#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() 
{   
    // 1) 기존 Hello txt 파일 읽어오기 
    ifstream file("hello.txt");

    //hint 벡터 사용하기! 
    vector <string> v;
    string s;

    // 2) 벡터 이용해서 담고 파일 닫기 
    while (getline(file,s))
    {
        cout << s << endl;
        v.push_back( s );
    }
    file.close();

    //3) Reverse 함수로 순서 변경하기 
    reverse(v.begin(), v.end());

    cout << "Reverse 결과 확인" << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<< endl;
    }

    //4) 새로운 파일 열어서 입력하고 닫기
    ofstream write_file("new_hello.txt");
    for (const auto& str : v) 
    {
        write_file << str << endl;
    }

    write_file.close();

    return 0;


}