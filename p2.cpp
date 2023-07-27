#include <iostream>

/*
 1 2 3 4
 1 2 3 4
 1 2 3 4
 1 2 3 4
*/

int main() {
    int n;
    std::cin >> n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while (col <= n) {
            std::cout << col << " ";
            col++;
        }
        std::cout << std::endl;
        row++;
    }
    return 0;
}
