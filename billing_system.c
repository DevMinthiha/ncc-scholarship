//For Login
//Card Number ==> 100200300
//Password ==> 123
#include <stdio.h>

void login();
void shopping();
void selectProduct();
int calculateCost(int totalMoney, int enterMoney);

int main()
{
    
    printf("\n");
    printf("WELCOME TO C-SHOP \U0001F600 \n");
    printf("\n");
    
    login();

    return 0;
}

void login() {
    int condition = 1;
    int phoneNumber = 0;
    int password = 0;
    printf("Fill phone number and password to login ... \n");
    //phone number loop
    while (condition)
    {
        printf("Enter your phone number : ");
        scanf("%d", &phoneNumber);
        if (phoneNumber == 100200300) {
            // password loop
            printf("Enter your password : ");
            scanf("%d", &password);
            while (password)
            {
                if(password == 123) {
                    printf("Login success \U0001F600 \n");
                    printf("\n");
                    shopping();
                    break;
                } else {
                    printf("Invaild passwrod! Please try again ... \n");
                    printf("Enter your password : ");
                    scanf("%d", &password);
                }
            }   
            break;
        } else {
            printf("Wrong number! Please try again ... \n");
        }  
    }

}

void shopping() {

    printf("VALID PRODUCTS \n");
    for(int i = 0; i < 20; i++) { 
        printf("=");
    }
    printf("\n");
    printf("a ==> apple (700 MMK) \n");
    printf("b ==> burger (2500 MMK ) \n");
    printf("c ==> cola (500 MMK) \n");
    printf("w ==> water (350 MMK) \n");
    printf("p ==> pizza (5000 MMK) \n");
    printf("n ==> noodle (400 MMK) \n");
    printf("h ==> hotdog (1000 MMK) \n");
    printf("s ==> sandwich (1800 MMK) \n");
    printf("\n");
    selectProduct();
}

void selectProduct() {
    int condition = 1;
    int totalMoney = 0;
    int balance = 0;
    int quit = 0;
    char product;
    while (condition)
    {
        printf("Choose character to buy : ");
        scanf(" %c", &product);
        switch(product) {
            case 'a': 
                totalMoney = calculateCost( totalMoney, 700);
                if(totalMoney <= 20000) {
                    printf("You bought apple \n");
                    printf("Total cost is %d MMK ... ", totalMoney);
                    balance = 20000 - totalMoney;
                    printf("Your balance is %d \n", balance);
                    printf("\n");
                    printf("Press 1 to buy again / press 0 to quit ==> ");
                    scanf("%d", &quit);
                    if(quit == 1) {
                        break;
                    } else {
                        printf("Thanks for shopping \U0001F600 \n");
                        condition = 0;
                        break;
                    } 
                } else {
                    printf("Not enough money \n");
                    printf("Thanks for shopping! Bye Bye \U0001F600 \n");
                    condition = 0;
                    break;
                }    
            case 'b': 
                totalMoney = calculateCost( totalMoney, 2500);
                if(totalMoney <= 20000) {
                    printf("You bought burger \n");
                    printf("Total cost is %d MMK ... ", totalMoney);
                    balance = 20000 - totalMoney;
                    printf("Your balance is %d \n", balance);
                    printf("\n");
                    printf("Press 1 to buy again / press 0 to quit ==> ");
                    scanf("%d", &quit);
                    if(quit == 1) {
                        break;
                    } else {
                        printf("Thanks for shopping \U0001F600 \n");
                        condition = 0;
                        break;
                    } 
                } else {
                    printf("Not enough money \n");
                    printf("Thanks for shopping! Bye Bye \U0001F600 \n");
                    condition = 0;
                    break;
                }    
            case 'c': 
                totalMoney = calculateCost( totalMoney, 500);
                if(totalMoney <= 20000) {
                    printf("You bought cola \n");
                    printf("Total cost is %d MMK ... ", totalMoney);
                    balance = 20000 - totalMoney;
                    printf("Your balance is %d \n", balance);
                    printf("\n");
                    printf("Press 1 to buy again / press 0 to quit ==> ");
                    scanf("%d", &quit);
                    if(quit == 1) {
                        break;
                    } else {
                        printf("Thanks for shopping \U0001F600 \n");
                        condition = 0;
                        break;
                    } 
                } else {
                    printf("Not enough money \n");
                    printf("Thanks for shopping! Bye Bye \U0001F600 \n");
                    condition = 0;
                    break;
                }    
            case 'w': 
                totalMoney = calculateCost( totalMoney, 350);
                if(totalMoney <= 20000) {
                    printf("You bought water \n");
                    printf("Total cost is %d MMK ... ", totalMoney);
                    balance = 20000 - totalMoney;
                    printf("Your balance is %d \n", balance);
                    printf("\n");
                    printf("Press 1 to buy again / press 0 to quit ==> ");
                    scanf("%d", &quit);
                    if(quit == 1) {
                        break;
                    } else {
                        printf("Thanks for shopping \U0001F600 \n");
                        condition = 0;
                        break;
                    } 
                } else {
                    printf("Not enough money \n");
                    printf("Thanks for shopping! Bye Bye \U0001F600 \n");
                    condition = 0;
                    break;
                }                                     
            case 'p': 
                totalMoney = calculateCost( totalMoney, 5000);
                if(totalMoney <= 20000) {
                    printf("You bought pizza \n");
                    printf("Total cost is %d MMK ... ", totalMoney);
                    balance = 20000 - totalMoney;
                    printf("Your balance is %d \n", balance);
                    printf("\n");
                    printf("Press 1 to buy again / press 0 to quit ==> ");
                    scanf("%d", &quit);
                    if(quit == 1) {
                        break;
                    } else {
                        printf("Thanks for shopping \U0001F600 \n");
                        // condition = 0;
                        break;
                    } 
                } else {
                    printf("Not enough money \n");
                    printf("Thanks for shopping! Bye Bye \U0001F600 \n");
                    condition = 0;
                    break;
                }
            case 'n': 
                totalMoney = calculateCost( totalMoney, 400);
                if(totalMoney <= 20000) {
                    printf("You bought noodle \n");
                    printf("Total cost is %d MMK ... ", totalMoney);
                    balance = 20000 - totalMoney;
                    printf("Your balance is %d \n", balance);
                    printf("\n");
                    printf("Press 1 to buy again / press 0 to quit ==> ");
                    scanf("%d", &quit);
                    if(quit == 1) {
                        break;
                    } else {
                        printf("Thanks for shopping \U0001F600 \n");
                        condition = 0;
                        break;
                    } 
                } else {
                    printf("Not enough money \n");
                    printf("Thanks for shopping! Bye Bye \U0001F600 \n");
                    condition = 0;
                    break;
                }      
            case 'h': 
                totalMoney = calculateCost( totalMoney, 1000);
                if(totalMoney <= 20000) {
                    printf("You bought hotdog \n");
                    printf("Total cost is %d MMK ... ", totalMoney);
                    balance = 20000 - totalMoney;
                    printf("Your balance is %d \n", balance);
                    printf("\n");
                    printf("Press 1 to buy again / press 0 to quit ==> ");
                    scanf("%d", &quit);
                    if(quit == 1) {
                        break;
                    } else {
                        printf("Thanks for shopping \U0001F600 \n");
                        condition = 0;
                        break;
                    } 
                } else {
                    printf("Not enough money \n");
                    printf("Thanks for shopping! Bye Bye \U0001F600 \n");
                    condition = 0;
                    break;
                }     
            case 's': 
                totalMoney = calculateCost( totalMoney, 1800);
                if(totalMoney <= 20000) {
                    printf("You bought sandwich \n");
                    printf("Total cost is %d MMK ... ", totalMoney);
                    balance = 20000 - totalMoney;
                    printf("Your balance is %d \n", balance);
                    printf("\n");
                    printf("Press 1 to buy again / press 0 to quit ==> ");
                    scanf("%d", &quit);
                    if(quit == 1) {
                        break;
                    } else {
                        printf("Thanks for shopping \U0001F600 \n");
                        condition = 0;
                        break;
                    } 
                } else {
                    printf("Not enough money \n");
                    printf("Thanks for shopping! Bye Bye \U0001F600 \n");
                    condition = 0;
                    break;
                }                              
            default:
                printf("Invalid product! type again ... \n"); 
                break;
    }
    }
}

int calculateCost(int totalMoney, int enterMoney) {
    totalMoney = totalMoney + enterMoney;
    return totalMoney;
}
