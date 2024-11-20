#include <stdio.h> 

int main() {
    // Khai b�o hang so PI
    const float PI = 3.14;

    // Khai bao v� khoi tao b�n kinh hinh tron
    float radius = 8.0; 

    // T�nh chu vi hinh tron
    float circumference = 2 * PI * radius;

    // T�nh dien tich hinh tron
    float area = PI * radius * radius;

    // Ket qua 
    printf("Ban kinh hinh tron: %.2f\n", radius);
    printf("Chu vi hinh tron: %.2f\n", circumference);
    printf("Dien tich hinh tron: %.2f\n", area);

    return 0;
}
