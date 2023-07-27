#include <iostream>

/*
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1
*/

int main() {
    int n;
    std::cin >> n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while (col <= n) {
            std::cout << n - col + 1 << " ";
            col++;
        }
        std::cout << std::endl;
        row++;
    }
    return 0;
}
