#include<iostream>
#include<string>
using namespace std;

class Clock{
    int hour;
    int minute;
    int second;
    public:
        void set(int hour, int minute, int second)
        {
            Clock::hour = hour;
            Clock::minute = minute;
            Clock::second = second;
        }
        string to_str()
        {
            string h, m, s;
            if(hour>9){
                h=to_string(hour);
            }
            else{
                h="0"+to_string(hour);
            }
            if(minute>9){
                m=to_string(minute);
            }
            else{
                m="0"+to_string(minute);
            }
            if(second>9){
                s=to_string(second);
            }
            else{
                s="0"+to_string(second);
            }
            return h + ":" + m + ":" + s;
        }
        void shift(int diff_second)
        {
            Clock::second += diff_second;
            while (second > 59)
            {
                minute++;
                second -= 60;
            }
            while (second < 0)
            {
                minute--;
                second += 60;
            }
            while (minute > 59)
            {
                minute -= 60;
                hour++;
            }
            while (minute < 0)
            {
                minute += 60;
                hour--;
            }
            while(hour>23){
                hour-=24;
            }
            while(hour<0){
                hour+=24;
            }
        }
};

int main()
{
    int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;
 
  // Clock構造体のオブジェクトを宣言
  Clock clock;
 
  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);
 
  // 時刻を出力
  cout << clock.to_str() << endl;
 
  // 時計を進める(戻す)
  clock.shift(diff_second);
 
  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}