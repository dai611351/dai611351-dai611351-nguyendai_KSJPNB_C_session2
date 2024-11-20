#include <stdio.h> 

int main() {
    // Khai bao va khoi tao bien canh hinh vuong 
    
	//Canh hinh vuong 
	int side = 3; 

    // Tính chu vi hinh vuong
    int perimeter = 4 * side;

    // Tính dien tích hinh vuong
    int area = side * side;

    // Ket qua 
    printf("Canh hinh vuong: %d\n", side);
    printf("Chu vi hinh vuong: %d\n", perimeter);
    printf("Dien tich hinh vuong: %d\n", area);

    return 0;
}
