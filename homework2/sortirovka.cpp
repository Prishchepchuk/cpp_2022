#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::vector <int> v;
    std::string str;
    std::cout << "Give array using whitespace:\n";

    getline(std::cin, str);
    str += ' ';

    while (str.length() > 0){
        std::string tmp = str.substr(0, str.find(' '));
        str.erase(0, str.find(' ') + 1);
        int tmp_int = stoi(tmp);
        v.push_back(tmp_int);
      }

    int n = v.size();
    int i = 0;
    while (i < n){
        int j = i;
        while (j > 0 && v[j - 1] > v[j])
        {
            std::swap(v[j], v[j - 1]);
            j -= 1;
        }

        i += 1;
    }

    std::cout << "\nSorted array:\n";

    for (int i = 0; i < n; i++)
        std::cout << v[i] << ' ';

    std::cout << '\n';

    return 0;
}
