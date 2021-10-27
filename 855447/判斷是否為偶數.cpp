#include <iostream>
using namespace std;
int main(){
int num;
  cout << "請輸入數字:";
  cin >> num;
  if (num % 2 == 0){
    cout << "您輸入數字為2之倍數";
  }else{
    cout << "您輸入的數字非2之倍數";
  }
}