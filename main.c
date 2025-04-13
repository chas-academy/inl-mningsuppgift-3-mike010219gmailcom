#include <stdio.h>
#include <math.h>




float calculate_hypotenuse (float a, float b){

float result = sqrt(pow(a, 2.0) + pow(b, 2.0));

return result;

}




int main() {
    float a = 3.0;
    float b = 4.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 5.00

    //Changing the values
    a = 5.0;
    b = 12.0;

    printf("%.2f\n", calculate_hypotenuse(a, b));  // Expected output: 13.00

    return 0;
}