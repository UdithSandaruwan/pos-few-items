#include<stdio.h>
#include<string.h>

//functions
void menu();
void question();
void invoice();

//variables
int list[]={0,1280,2000,480,830,50,360};  //menu prices
int userReply[5];  //to get user's answere
int inputIndex , inputQuantity ;  //to get inpuputs for index & quantity
int tempTotal , amount1 , amount2 , amount3 , amount4 , amount5 , amount6 ;  //to store temp. total
int index1 , index2 , index3 , index4 , index5 , index6 ;  // to store index Numbers
int quantity1 , quantity2 , quantity3 , quantity4 , quantity5 , quantity6 ;  // to store user req. quantity

int main(){
printf("\n*****************************************************\n");
printf("************WELLCOME TO GROCERY STORE****************\n");
printf("*****************************************************\n\n");
menu();
printf("Do you want to buy something ?\n( yes / no )\n");
scanf("%s",userReply);
if (strcmp(userReply,"yes") ==0){
    question();
    amount1=tempTotal;index1=inputIndex;quantity1=inputQuantity;
    if (strcmp(userReply,"yes") ==0){
        question();
        amount2=tempTotal;index2=inputIndex;quantity2=inputQuantity;
        if (strcmp(userReply,"yes") ==0){
            question();
            amount3=tempTotal;index3=inputIndex;quantity3=inputQuantity;
            if (strcmp(userReply,"yes") ==0){
                question();
                amount4=tempTotal;index4=inputIndex;quantity4=inputQuantity;
                if (strcmp(userReply,"yes") ==0){
                    question();
                    amount5=tempTotal;index5=inputIndex;quantity5=inputQuantity;
                    if (strcmp(userReply,"yes") ==0){
                        printf("Enter an Index Number : \n");
                        scanf("%d",&inputIndex);
                        printf("\nEnter the quantity you want : \n");
                        scanf("%d",&inputQuantity);
                        printf("LKR : %d",inputIndex*inputQuantity);
                        amount6=tempTotal;index6=inputIndex;quantity6=inputQuantity;
                        invoice();
                    }else if (strcmp(userReply,"no" ==0)){
                        invoice();
                    }else{
                        printf("somethin went wrong ...\n");
                        invoice();
                    }
                }else if (strcmp(userReply,"no") ==0){
                    invoice();
                }else{
                    printf("somethin went wrong ...\n");
                    invoice();
                }
            }else if (strcmp(userReply,"no") ==0){
                invoice();
            }else{
                printf("somethin went wrong ...\n"); 
                invoice(); 
            }
        }else if (strcmp(userReply,"no") ==0){
            invoice();
        }else{
            printf("somethin went wrong ...\n");
            invoice();
        }
    }else if (strcmp(userReply,"no") ==0){
        invoice();
    }else{
        printf("somethin went wrong ...\n");
        invoice();
    }
}else if (strcmp(userReply,"no") ==0){
    printf("you choosed to exit this prohran ...\n");
}else{
    printf("somethin went wrong ...\n");
}
getch();
return 0;
}

void menu(){
    printf("-----------------------------------------------------------------------------------\n");
    printf(" | Index No |  \t  Item Name  \t\t\t\t      |   Item Price   |\n");
    printf("-----------------------------------------------------------------------------------\n");
    printf("\t1\tPremium Keeri Samba Rice ( 5kg[bag] )\t\tLKR : 1,280\n \t2\tSri Lankan Basmathi ( 4kg[bag] )\t\tLKR : 2,000\n \t3\tPasta Penne Rigate ( 500g )\t\t\tLKR : 480\n \t4\tClassic Instant Coffee ( 50g )\t\t\tLKR : 830\n \t5\tEggs\t\t\t\t\t\tLKR : 50\n \t6\tFesh Milk\t\t\t\t\tLKR : 360\n\n");
}
void question(){
    printf("Enter an Index Number : \n");
    scanf("%d",&inputIndex);
    printf("\nEnter the quantity you want : \n");
    scanf("%d",&inputQuantity);
    tempTotal=list[inputIndex]*inputQuantity;
    printf("Temp. Total is : LKR : %d",tempTotal);
    printf("\nDo you want to buy another item ?\n( yes / no )\n");
    scanf("%s",userReply);
}
void invoice(){
    printf("\n-------------------------------------------------\n-------------------GROCERY-----------------------\n-------------------------------------------------\n");
    printf (" | Index No | \tQty \t|\t Amount \t|\n");
    printf("\t%d",index1);printf("\t%d",quantity1);printf("\t\tLKR : %d\n",amount1);
    printf("\t%d",index2);printf("\t%d",quantity2);printf("\t\tLKR : %d\n",amount2);
    printf("\t%d",index3);printf("\t%d",quantity3);printf("\t\tLKR : %d\n",amount3);
    printf("\t%d",index4);printf("\t%d",quantity4);printf("\t\tLKR : %d\n",amount4);
    printf("\t%d",index5);printf("\t%d",quantity5);printf("\t\tLKR : %d\n",amount5);
    printf("\t%d",index6);printf("\t%d",quantity6);printf("\t\tLKR : %d\n",amount6);
    int x=amount1+amount2+amount3+amount4+amount5+amount6;
    printf("\n-------------------------------------------------\n");
    printf("Total Amount is \t:: LKR : %d",x);
    printf("\n-------------------------------------------------\n");
    printf("\n    ... Thank you ;! come again ...\n");
}
