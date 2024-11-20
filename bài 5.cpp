#include <stdio.h> 

int main() {
    // Khai bao và khoi tao hai bien chieu dai và chieu rong
    
	// Chieu dai hinh chu nhat 
	int length = 20; 
    
	// Chieu rong hinh chu nhat 
	int width = 10;   

    // Tính chu vi hinh chu nhat
    int perimeter = 2 * (length + width);

    // Tính dien tích hinh chu nhat
    int area = length * width;

    // Ket qua 
    printf("Chieu dai: %d\n", length);
    printf("Chieu rong: %d\n", width);
    printf("Chu vi hinh chu nhat: %d\n", perimeter);
    printf("Dien tich hinh chu nhat: %d\n", area);

    return 0;
}

