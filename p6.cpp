#include <iostream>

/*
 *
 * *
 * * *
 * * * *
 * * * * *
*/

int main() {
    int n;
    std::cin >> n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while (col <= row) {
            std::cout << '*' << " ";
            col++;
        }
        std::cout << std::endl;
        row++;
    }
    return 0;
}
