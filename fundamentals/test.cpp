#include<iostream>

struct string {
    char* array{};

    string(char* array) {
        this->array = array;
    }

    void read_from() {
        std::cout << array << std::endl;
    }

    void write_to(char* character, int pos) {
        int length = sizeof(array) / sizeof(array[0]);

        if (pos > 0 && pos < length) {
            std::cout << array << " to ";
            array[pos] = *character;
            std::cout << array << std::endl;
        }
    }
};


int main() {

    string nome{ "Vitor" };

    nome.read_from();

    nome.write_to("a", 1);

    /*
      char lower[] "abc?e";
      char upper[] = "ABC?E";
      char* upper_ptr = upper;

      lower[3] = 'd';
      upper_ptr[3] = 'D';

      char letter_d = lower[3];
      char letter_D = upper_ptr[3];
    */

}
