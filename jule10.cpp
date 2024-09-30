#include <iostream>
void drawTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    drawTriangle(n);
    return 0;
}
