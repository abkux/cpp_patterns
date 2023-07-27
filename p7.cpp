#include <iostream>

/*
 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5
*/

int main() {
    int n;
    std::cin >> n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while (col <= row) {
            std::cout << row << " ";
            col++;
        }
        std::cout << std::endl;
        row++;
    }
    return 0;
}
