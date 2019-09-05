#include<stdlib.h>
 
int main()
{
    char message[100], ch;
    int i, key;
    
    printf("Vendosni nje mesazh per te dekriptuar: ");
    gets(message);
    printf("Vendosni hapin: ");
    scanf("%d", &key);
    
    for(i = 0; message[i] != '\0'; ++i){
        ch = message[i];
        
        if(ch >= 'a' && ch <= 'z'){
            ch = ch - key;
            
            if(ch < 'a'){
                ch = ch + 'z' - 'a' + 1;
            }
            
            message[i] = ch;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            ch = ch - key;
            
            if(ch < 'A'){
                ch = ch + 'Z' - 'A' + 1;
            }
            
            message[i] = ch;
        }
    }
    
    printf("Mesazhi i dekriptuar: %s", message);
    
    return 0;
}
