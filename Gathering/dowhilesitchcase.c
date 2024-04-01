// Online C compiler to run C program online
#include <stdio.h>
void calc()
{
    int a , b , ch;
    do{
        printf("\npress 1 for +\npress 2 for\npress 3 for +\npress 4 for / \npress 5 for %\npress 0 for the exit");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        printf("\n enter a&b");
        scanf("%d %d",&a,&b);
        
        switch(ch)
        {
            case 1: printf("\n addition is %d",a+b);
            break;
            case 2: printf("\n minus is %d",a-b);
            break;
            case 3: printf("\n multiply is %d",a*b);
            break;
            case 4: printf("\n divide is %d",a/b);
            break;
            case 5: printf("\n modules is %d",a%b);
            break;
            case 0: break;
            default: printf("\n invalid choice");
            
        }
    }
    while(ch!=0);
}
int main() {
    calc();
    return 0;
}