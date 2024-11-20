#include <stdio.h> 

int main() {
    // Khai bao va khoi tao hai bien so nguyen 
    
	// Bien so nguyen thu nhat
	int num1 = 12; 
    
    // Bien so nguyen thu hai
	int num2 = 4; 

    // Tinh tong hai so  
    int total = num1 + num2;

    // Tinh hieu hai so 
    int difference = num1 - num2;
	
	// Tinh tich hai so 
	int product = num1 * num2;
	
	// Thuong thuong hai so  
	int quotient = num1 / num2; 
	
	// Ket qua 
    printf("Tong: %d + %d = %d\n", num1, num2, total);
    printf("Hieu: %d - %d = %d\n", num1, num2, difference);
    printf("Tich: %d * %d = %d\n", num1, num2, product);
    printf("Thuong: %d / %d = %d\n", num1, num2, quotient);

    return 0;
}
