//aniq
#include <stdio.h>
int ChooseCookies(char*[1][6]);
int GetPackage(char*[1][3]);
int GetQuantity(void);
float ProcessOrder(float[6][3],char*[1][6],int,char*[1][3],int,int);
int main(){
    char* cookie_names[1][6]={"Orange","Pear","Apple","Durian","Guava","Plum"};
    char* package_types[1][3]={"12 pcs","24 pcs","100 pcs"};
    float cookie_price[6][3]={{3.50,5.00,25.00},{3.50,5.00,24.50},{1.50,4.00,14.00},
        {2.90,5.00,15.00},{2.70,4.00,12.80},{2.00,3.00,11.00}};
    char response;
    float total_sales=0.0;
    do{
        printf("***Welcome to Cute Cookies***\n\n");
        int cookie=ChooseCookies(cookie_names);
        int package=GetPackage(package_types);
        int quantity=GetQuantity();
        float sales=ProcessOrder(cookie_price,cookie_names,cookie,package_types,package,quantity);
        total_sales+=sales;
        printf("Do you want to order another cookies: ");
        scanf(" %c",&response);
        if(response=='n'||response=='N')
            break;
    }while(response=='y'||response=='Y');
    printf("\nTotal amount to pay is: RM%.2f\n",total_sales);
    return 0;
}
int ChooseCookies(char* cookie_names[1][6]){
    int j;
    do{
        printf("You may choose from the following flavours:\n\tFlavour\n");
        int i;
        for(i=0;i<6;i++){
            printf("%d. %s\n",i+1,cookie_names[0][i]);
        }
        printf("\nEnter your choice:");
        scanf("%d",&j);
        if(j<1||j>6)
            printf("Sorry, wrong choice! Try again\n\n");
    }while(j<1||j>6);
    printf("You have chosen %s cookies\n\n",cookie_names[0][j-1]);
    return j;
}
int GetPackage(char* package_types[1][3]){
    printf("Available packages:");
    int i;
    for(i=0;i<3;i++){
        printf("\t%d) %s",i+1,package_types[0][i]);
    }
    printf("\nChoose which package (1 or 2 or 3):");
    int j;
    scanf("%d",&j);
    return j;
}
int GetQuantity(void){
    int x;
    printf("\nEnter quantity:");
    scanf("%d",&x);
    return x;
}
float ProcessOrder(float cookie_price[6][3],char* cookie_names[1][6],int cookie,char* package_types[1][3],int package,int quantity){
    printf("\nConfirmation of order:\n");
    printf("%d pack(s) of %s package of %s cookies\n",quantity,package_types[0][package-1],cookie_names[0][cookie-1]);
    float x;
    x=quantity*cookie_price[cookie-1][package-1];
    printf("Amount to pay is %.2f\n\n",x);
    return x;
}