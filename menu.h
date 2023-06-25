
void conclusion(void){
    printf("\n \n \n ");
    printf("\t \t Alave\n");
    printf("\t \t Id:2312303042 \n");
    printf("\n \n \n ");
    printf("\t \t Thanks for using my console.....");

}

void art_list (void){
printf(" _________International Folk Fest 2023_________\n");
printf(" vanue: Bangladesh Army Stadium.\n ");
printf(" Date: 5th July, 2023.\n ");
printf(" Time: 4.00 p.m.- 12.00 p.m.\n ");
printf("********************************************************* \n");
printf("********************************************************** \n");
printf("Artist line up:\n");
printf("1.Bappa Mazumder\n ");
printf("2.Artcell\n");
printf("3.Arbo Virus\n");
printf("4.kailesh kher\n");
printf("5.Momtaz\n");
printf("6.pritom\n");
printf("\n \n ");
}


void pay_menu(void){
    system("cls");
   printf("Payment Options:\n");

    int option,
        bkash_number,
        nagad_number,
        transaction_id;
    menu:
    printf("1. Visa.\n");
    printf("2. Paypal.\n");
    printf("3. Nagad.\n");
    printf("4. Bkash.\n");
    printf("5. Return to main menu.\n");
    printf("Input your payment option: \n");
    scanf("%d",&option);
    system("cls");

    switch(option){
    case 1:
        printf("Sorry, Visa Payment is not available right now...\n");
        printf("Sorry for this inconvenience...\n");
        printf("Try to make payment using Nagad or Bkash\n");
    goto menu;

    case 2:
        printf("Sorry, Paypal Payment is not available right now...\n");
        printf("Sorry for this inconvenience...\n");
        printf("Try to make payment using Nagad or Bkash\n");
    goto menu;

    case 3:
        printf("Input your Nagad Number : ");
        scanf("%d",&nagad_number);
        system("cls");
        printf("Input your payment Transaction ID : ");
        scanf("%d",&transaction_id);
        system("cls");

    case 4:
        printf("Input your Bkash Number : ");
        scanf("%d",&bkash_number);
        system("cls");
        printf("Input your payment Transaction ID : ");
        scanf("%d",&transaction_id);
        system("cls");

    case 5:
        return 0;
    }
}

void menu(void){

    int option,
        user_option;

    printf("************************** Main Menu ************************\n \n");
    printf("1. Sign Up.\n");
    printf("2.  Login.\n");
    printf("3. Exit.\n");
    printf("Enter option: ");
    scanf("%d",&option);
    system("cls");

    switch(option){
    case 2:
        login();
        art_list();
        pay_menu();
        conclusion();
        return 0;

    case 1:
        registration();
        login();
        art_list();
        pay_menu();
        conclusion();
        return 0;

    case 3:
                exit(0);
        }
}

