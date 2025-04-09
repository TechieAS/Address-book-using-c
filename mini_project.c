#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    int id;
    int mobile_Number;
    char email[100];
    int choice;

    for(int i = 0; i < 5; i++) {
        id = -1;
    }

    while(1){
        printf("\n---Address Book---\n");
        printf("1. Add Details\n");
        printf("2. Delete Details\n");
        printf("3. Display Details\n");
        printf("4. Search Details\n");
        printf("5. Exit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        getchar(); 
        int idNumber; 
    
        switch(choice){
            case 1:
                for(int i = 0; i < 5; i++){
                    if(id == -1) {  
                        printf("Enter ID: ");
                        scanf("%d", &id);
                        getchar();  

                        printf("Enter Name: ");
                        scanf("%s",&name[i]); 

                        printf("Enter Contact Details: ");
                        scanf("%d",& mobile_Number);

                        printf("Enter Email Address: ");
                        scanf("%s",email[100]);  
                        break;
                    }
                }
                break;
            case 2:
                
                printf("Enter ID number to delete detail: ");
                scanf("%d", &idNumber);
                for(int i = 0; i < 5; i++){
                    if(id == idNumber){
                        id= -1;  
                        printf("Details Deleted\n");
                        break;
                    }
                }
                break;
            case 3:
                for(int i = 0; i < 5; i++){
                    if(id != -1) {  
                        printf("\nName: %s", name[i]);
                        printf("\nContact Details: %s", mobile_Number);
                        printf("\nEmail Address: %s\n", email[i]);
                    }
                }
                break;
            case 4:
                printf("Search functionality not implemented yet.\n");
                break;
            case 5:
                printf("Exiting Program\n");
                return 0;
            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}