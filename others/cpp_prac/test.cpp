#include <iostream>
using namespace std;

int main()
{
  string S;
  cin >> S;

  // 1の数を表す変数
  int count = 0;

  // 9文字の式に限定していることに注意
  for (int i = 0; i < 9; i++)
  {

    // 1があればcountを増やす
    if (S.at(i) == '1')
    {
      count++;
    }
  }

  cout << count << endl;
}
