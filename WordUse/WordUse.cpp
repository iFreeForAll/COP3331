#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*
   If the words entered were 
   "The quick brown fox stop"
   and the numbers were
   1 2 3 4 3 2 1 -1,
   the output should be
   "The quick brown fox brown quick The"
*/

int main() {

   vector<string> str;
   vector<int> num;
   string temp_str;
   int temp_num;
   
   cin >> temp_str;
   int n = 0;
   
   while(temp_str != "stop") {
      str.push_back(temp_str);
      n++;
      cin >> temp_str;
   }
   
   cin >> temp_num;
   
   while(cin && temp_num > 0 && temp_num <= n) {
      num.push_back(temp_num);
      cin >> temp_num;
   }
      
   int size = num.size();
   
   for(int i = 0; i < size; i++) {
      cout << str[num[i] - 1] << " ";
   }
   
   return 0;
}
