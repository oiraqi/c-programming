#include <stdio.h>
#define TAX_RATE 20

int main(){
    int quantity;
    float price, net_total_price, tax, total_price;

    printf("Quantity: ");
    scanf("%d", &quantity);
    printf("Price: ");
    scanf("%f", &price);

    net_total_price = price * quantity;
    tax = net_total_price * TAX_RATE / 100;
    total_price = net_total_price + tax;

    printf("Net Total Price: %f\n", net_total_price);
    printf("Tax: %f\n", tax);
    printf("Total Price: %f\n", total_price);

    return 0;
}
