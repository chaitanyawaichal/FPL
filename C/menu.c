#include <stdio.h>
int main(){
    int itemnum;
    printf("Today's Menu\n");
    printf("1. Coffee\n");
    printf("2. Tea\n");
    printf("3. Sandwich\n");
    printf("4. Burger\n");
    printf("5. Pizza\n");
    printf("6. Chocolate\n");
    printf("7. Pasta\n");
    printf("8. Tandoori Chicken\n");
    printf("9. Veg. Biryani\n");
    printf("10. Chicken Biryani\n");
    printf("10. Vada Pav\n");
    printf("Enter the item number of the item you want to order:\t");
    scanf("%d", &itemnum);
    switch (itemnum)
    {
    case 1:
        printf("Coffee ordered");
        break;
    
    case 2:
        printf("Tea ordered");
        break;
    
    case 3:
        printf("Sandwich ordered");
        break;
    
    case 4:
        printf("Burger ordered");
        break;
    
    case 5:
        printf("Pizza ordered");
        break;
    
    case 6:
        printf("Chocolate ordered");
        break;
    
    case 7:
        printf("Pasta ordered");
        break;
    
    case 8:
        printf("Tandoori Chicken ordered");
        break;
    
    case 9:
        printf("Veg. Biryani ordered");
        break;
    
    case 10:
        printf("Chicken Biryani ordered");
        break;
    
    case 11:
        printf("Masala Dosa ordered");
        break;
    
    case 12:
        printf("Vada Pav ordered");
        break;
    
    default:
    printf("Enter the valid item number");
        break;
    }
    return 0;
}