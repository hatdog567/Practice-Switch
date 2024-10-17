#include <stdio.h>

int main(){
    //gusto ko iexpand na pwede multiple orders

    //variables
    char food_menu; 
    int tot_amount, money, cost;

    //order display
    printf("---------------------------\n");
    printf("Order Menu\n");
    printf("B = Burger\n");
    printf("F = French Fries\n");
    printf("P = Pizza\n");
    printf("S = Sandwich\n");
    printf("---------------------------\n");

    //order input
    printf("Enter a your order: \t");
    scanf("%c %c", &food_menu, &food_menu);

    //selection
    switch(food_menu)
    {
    case 'B':
        printf("Burger = Php200 \n");
        break;
    case 'F':
        printf("French Fries = Php50\n");    
        break;
    case 'P':
        printf("Pizza = Php 500\n");    
        break;
    case 'S':
        printf("Sandwich = Php 150\n");    
        break;
    default:
        printf("Input Invalid");
        break;
    }


    //Enter your order
    printf("\nEnter the cost of the order: ");
    scanf("%d",&cost);
    printf("\nHow much is your money?: ");
    scanf("%d",&money);

    //process
    tot_amount = money - cost;

    //output
    printf("------------------------------------");
    printf("\nYour total amount is: %d", tot_amount); 


        
        
}