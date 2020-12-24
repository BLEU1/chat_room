#include <stdio.h>
#include "./Account_UI.h"
#include "../Common/Common.h"
#include "../Service/Account_Srv.h"
int Account_UI_SignIn(){
    char name[30] , sex[10],password[30];
    int sexflag;
    printf("请输入要注册的用户名:");
    scanf("%s",name);
    ffflush();
    while(1){
        printf("请输入性别(男/女):");
        scanf("%s",sex);
        ffflush();
        if(strcmp(sex ,"男") == 0){
            sexflag = 1;
            break;
        }
        else if(strcmp(sex ,"女") == 0){
            sexflag = 0;
            break;
        }
        else{
            printf("请输入“男”或“女”！\n");
        }
    }
    printf("请输入密码:");
    scanf("%s",password);
    ffflush();
    return Account_Srv_SignIn(name ,sexflag ,password);
}

int Account_UI_Login(){
    char name[30] , password[30];
    printf("请输入用户名:");
    scanf("%s",name);
    ffflush();
    printf("请输入密码:");
    scanf("%s",password);
    ffflush();
    return Account_Srv_Login(name , password);
    
}
