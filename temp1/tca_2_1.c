#include <stdio.h>

int main(){
    int quantity;
    float price, total_price;

    printf("Price: ");
    scanf("%f", &price);
    printf("Quantity: ");
    scanf("%d", &quantity);

    total_price = price * quantity;

    printf("Total Price: %f\n", total_price);

    return 0;
}
