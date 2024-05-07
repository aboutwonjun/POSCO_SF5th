//회원 명부 작성하기
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;


int main()
{

    cout << "** 회원 명부 작성하기**" << endl;
    cout << "3명의 회원에 대한 이름 비밀번호를 순차적으로 입력해주세요. " << endl;
    cout << "'quit'를 입력하면 종료합니다. " << endl;

    ofstream file ("member.txt");
    vector <string> members;
    vector <int> membersPw;

    string name;
    int pw;

    int i = 0;


    while (true) // 무한 루프
    {
        cout << i + 1 << "번째 회원의 이름과 비밀번호를 입력하세요: ";
        cin >> name;
        if (name == "quit") // 종료 조건 확인
            break;

        cin >> pw;

        members.push_back(name);
        membersPw.push_back(pw);
        i++; // 다음 회원 번호 증가
    }


    for (size_t i = 0; i < members.size(); ++i) // 파일에 회원 정보 쓰기
    {
        file << members[i] << " " << membersPw[i] << endl;
    }
    file.close();

    ifstream readfile("member.txt");
    string s; 
     while (getline(readfile,s)) //file의 내용을 읽어서 s에 저장
    {
        cout << s << endl;
    }
    readfile.close();








    






}
