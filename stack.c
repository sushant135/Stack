#include<stdio.h>
int stack[20],choice,n,top=-1,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    printf("\n Enter the size of stack[max=20]:");
    scanf("%d",&n);
    do
    {
        printf("\n\t 1.push\n\t 2.pop\n\t 3.display\n\t 4.exit");
        printf("\n enter your choise:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
            push();
            break;
        }
    case 2:
    {
        pop();
        break;
    }
    case 3:
    {
display();
break;
    }
    case 4:
    {
        break;
    }
    default:
    {
        printf("\n\t please enter a valid choice(1/2/3/4)");
    }
}
    }
    while(choice!=4);
    return 0;
}
void push(){

if(top==n-1)
{
    printf("\n\t stack is overflow");

}
else
{
    printf("enter a value to be pushed:");
    scanf("%d",&x);
    top++;
    stack[top]=x;
}
}
void pop(){

if(top==-1)
{
    printf("\n\t stack is underflow");

}
else{
    printf("\n\t the popped element is %d",stack[top]);
    top--;
}
}
void display()
{
    if(top>=0)
    {
        printf("\n the element in stack \n");
        for(i=top;i>=0;i--)
        printf("\n%d",stack[i]);
        printf("\n press next choice");
    }
    else
    { 
        printf("\n the stack is empty");
}
}