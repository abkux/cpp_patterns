#include <iostream>

/*
 1 1 1 1
 2 2 2 2
 3 3 3 3
 4 4 4 4
*/

int main() {
    int n;
    std::cin >> n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while (col <= n) {
            std::cout << row << " ";
            col++;
        }
        std::cout << std::endl;
        row++;
    }
    return 0;
}
