//실습 8.vector 중복삭제
//iterator를 이용해서 문제 해결
//Unique라는 함수가 있다! 

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std; // Unique 함수를 쓰기 위함


int main(){
    // 오류로 인해 Push_back으로 요소 추가. 
    vector<int> myVector;
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);
    myVector.push_back(20);
    myVector.push_back(40);
    myVector.push_back(10);
    myVector.push_back(50);
    
    cout << "원 함수 ";
    for (int i = 0; i < myVector.size(); i++)
    cout << myVector[i] << " ";
    cout << endl;

    cout << "중복 원소 제거 ";

    sort(myVector.begin(), myVector.end());
    myVector.erase(unique(myVector.begin(),myVector.end()), myVector.end());


    for (int i = 0; i < myVector.size(); i++)
    cout << myVector[i] << " ";


    return 0;
    
}