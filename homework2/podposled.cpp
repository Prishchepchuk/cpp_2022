#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> fill_dyn_matrix(string x,string y){
    vector <vector <int>> L(x.size() + 1, vector <int> (y.size() + 1, 0));
    for (int i = 1; i <= x.size(); i++){
        for (int j = 1;j <= y.size(); j++){
            if (x[i-1] == y[j-1]){
                L[i][j] = L[i-1][j-1] + 1;
            }
            else{
                L[i][j] = max(L[i][j-1], L[i-1][j]);
            }
        }
    }
    return L;
}


vector<char> LCS_DYN(string x, string y){
    vector <vector <int>> L(x.size() + 1, vector <int> (y.size() + 1, 0));
    L = fill_dyn_matrix(x, y);
    vector<char> LCS;
    int x_i = x.size() - 1;
    int y_i = y.size() - 1;
    while ((x_i >= 0) && (y_i >= 0)) {
        if (x[x_i] == y[y_i]){
            LCS.push_back(x[x_i]);
            x_i--;
            y_i--;
        }
            else {
                if (L[x_i-1][y_i] > L[x_i][y_i-1]){
                    x_i--;
                }
                else{y_i--;}
            }
          }
  reverse(begin(LCS),end(LCS));
  return LCS;
}

int main()
{   int i, j;
  string first_seq, second_seq;
  cout<< "Give 1 string:\n";
  cin>> first_seq;
  cout<< "Give 2 string:\n";
  cin>> second_seq;

  vector<char> result;
  result = LCS_DYN(first_seq, second_seq);

  for (int i = 0; i < result.size(); i++){
      cout << result[i];
  }
  return 0;
}
