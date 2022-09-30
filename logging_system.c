#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8

    struct user{
        char fullName[50];
        char email[50];
        char password[50];
        char username[50];
        char phone[50];

    };
    void takeinput(char ch[50]){
        fgets(ch, 50, stdin);
        ch[strlen(ch) - 1] = 0;
    }
    char generateUserName(char email[50], char username[50]){
        for(int i=0;i<strlen(email); i++){
            if(email[i] = '@') break;
            else username[i] = email[i];
        }

    }
    void takepassword(char  pwd[50]){
        int i =0;
        char ch;
         while(1){
            ch = getch();
            if(ch == ENTER || ch == TAB){
                pwd[i++] = ch;
                break;
            }else if(ch == BCKSPC){
                if(i>0){
                    i--;
                    printf("\b \b");
                }
            }else{
                pwd[i] = '\0';
                printf("* \b");
            }
         }
    }
    
int main(){
    system("color 5");  

    int opt;
    struct user user;
    char password2[50];

    printf("\n\t\t\t\t-------------Welcome to authentication system-------------");
    printf("\nPlease chose your opreation");
    printf("\n1.Signup");
    printf("\n2.Login");
    printf("\n3.Exit");

    printf("\n\nYour choice\t");
    scanf("%d", &opt);
    fgetc(stdin);

    switch(opt){
        case 1:
        printf("Enter your full name:\t");
        takeinput(user.fullName);
        printf("Enter your email:\t");
        takeinput(user.email);
        printf("Enter your contact no:\t");
        takeinput(user.phone); 
        printf("Enter your password:\t");
        takepassword(user.password);
        printf("Confirm your password\t");
        takepassword(password2);

        if(!strcmp(user.password, password2)){
            printf("\nYour password is matched\t");
        }
        else{
            printf("\nPassword do not matched\t");
        }


    }

    return 0;
}