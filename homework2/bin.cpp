#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

int bin_search(std::vector<int> v, int n, int num){
    int L = 0;
    int R = n - 1;
    while(L <= R){
        int m = (L + R) / 2;
        if (v[m] < num)  {L = m + 1;}
        else if (v[m] > num) {R = m - 1;}
        else return m;
		}
    return -1;
}

int main(){
	int num;
	std::vector <int> seq;
	std::string str;
	std::cout << "Give array using whitespace:\n";
  getline(std::cin, str);
  str += ' ';

  while (str.length() > 0){
      std::string tmp = str.substr(0, str.find(' '));
      str.erase(0, str.find(' ') + 1);
      int tmp_int = stoi(tmp);
      seq.push_back(tmp_int);
    }

  int n = seq.size();
  sort(seq.begin(), seq.end());
	std::cout<<"Give number:\n";
	std::cin>>num;
	if (bin_search(seq, n, num)!=-1) std::cout << "Yes";
	else std::cout<<"No";
}
