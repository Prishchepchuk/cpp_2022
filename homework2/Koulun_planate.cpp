#include <iostream>
#include <string>
#include<vector>


int main()
{   int i;
    std::vector <std::string> result;
    std::string data, s;
    std::cout<<"Give string:\n";
    getline(std::cin, data);
    for (i = 0; i < data.size(); i++){
        if ((data[i] >= 'A') && (data[i] <= 'z') || (data[i] == '-')) {
            s = "";
            while ((data[i] >= 'A') && (data[i] <= 'z') || (data[i] == '-')){
                s += data[i];
                i++;
            }
            result.push_back(s);
        }
        if (data[i] == '.'){result.push_back(".");}
        if (data[i] == ','){result.push_back(",");}
        if (data[i] == '!'){result.push_back("!");}
        if (data[i] == '?'){result.push_back("?");}
        if (data[i] == ';'){result.push_back(";");}
        if (data[i] == ':'){result.push_back(":");}
    }
    for (i = 0; i < result.size(); i++){
        std::cout << result[i] << ' ';
    }
    return 0;
}
