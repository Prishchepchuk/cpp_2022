#include <vector>
#include <iostream>

class Table{
  public:
    std::vector<int> value;

    void push(int val){
      value.push_back(val);
    };

    int pop(void){
      int tmp = value[value.size() - 1];
      value.pop_back();
      return tmp;
    };


    Table operator+(Table second_table) {
        int n = value.size();
        if (n != (second_table.value).size()){
          std::runtime_error("Incorrect concatenation");
        } else {
            std::vector<int> new_value;

            for (int i=0; i<n; i++){
              new_value.push_back(value[i] + second_table.value[i]);
            }

            Table new_table;
            new_table.value = new_value;
            return new_table;
            }
          };


    Table operator++(){
        int n = value.size();
        Table new_table;
        std::vector<int> new_value;
        for (int i=0; i<n; i++){
          new_value.push_back(value[i] + 1);
        }
        value = new_value;
        new_table.value = new_value;
        return new_table;
      };


    int operator[](int i) {return value[i];}


    friend std::ostream& operator<< (std::ostream &out, const Table &table);
};
std::ostream& operator<< (std::ostream &out, const Table &table)
{
    int n = table.value.size();
    for (int i=0; i<n; i++){
      out << table.value[i] << ' ';
    }
    return out;
}

int main() {
  Table T;
  T.value = {221, 432, 24, 52};
  std::cout << "T1 = "<< T << '\n';

  std::cout  << '\n';

  Table X = ++T;
  std::cout << X << '\n';
  std::cout << T << '\n';

  std::cout  << '\n';

  std::cout << T + X << '\n';

  std::cout  << '\n';

  T.push(48);
  std::cout << T << '\n';

  std::cout  << '\n';

  T.pop();
  std::cout << T << '\n';

  return 0;
}
