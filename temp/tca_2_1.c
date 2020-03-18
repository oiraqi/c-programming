#include <stdio.h>

int main(){
    int quantity;
    float price, total_price;

    printf("Quantity: ");
    scanf("%d", &quantity);
    printf("Price: ");
    scanf("%f", &price);

    total_price = price * quantity;

    printf("Total price: %f\n", total_price);

    return 0;
}
