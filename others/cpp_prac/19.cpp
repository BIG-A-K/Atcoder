#include <iostream>
#include<vector>
using namespace std;

void saiten(vector<vector<int>> &A,int &correct,int &wrong) {
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(A.at(i).at(j)==(i+1)*(j+1)){
                correct++;
            }
            else{
                A.at(i).at(j)=(i+1)*(j+1);
                wrong++;
            }
        }
    }
}


int main() {
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> A.at(i).at(j);
    }
  }

  int correct_count = 0; // ここに正しい値のマスの個数を入れる
  int wrong_count = 0;   // ここに誤った値のマスの個数を入れる

  saiten(A, correct_count, wrong_count);

  // 正しく修正した表を出力
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << A.at(i).at(j);
      if (j < 8) cout << " ";
      else cout << endl;
    }
  }
  cout << correct_count << endl;
  cout << wrong_count << endl;
}
