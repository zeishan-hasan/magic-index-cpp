#include <iostream>
#include <vector>

int magic_check(std::vector<int> some_vec) {
    std::vector<int>::iterator itr;
    int magic_size = some_vec.size();
    int count = 0;
    for (itr = some_vec.begin(); itr < some_vec.end(); itr++ ) {
        if (*itr == count) {
            // std::cout << "You got it!" << std::endl;
            return count;
        }

        count++;
    }

    return -1;
}

int main() {
    std::vector<int> magic_vec {5, 8, 2, 6, 9};
    std::vector<int> not_magic_vec {1, 2, 3, 4};
    int result = magic_check(magic_vec);

    if (-1 == result) {
        std::cout << "Alas! No magic index found." << std::endl;
    } else {
        std::cout << "The magic index is: " << result << std::endl;
    }

    result = magic_check(not_magic_vec);
    if (-1 == result) {
        std::cout << "Alas! No magic index found." << std::endl;
    } else {
        std::cout << "The magic index is: " << result << std::endl;
    }

    return 0;
}