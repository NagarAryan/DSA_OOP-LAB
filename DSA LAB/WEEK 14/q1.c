#include<stdio.h>
#include<stdlib.h>      
#include<ctype.h>     
#include<string.h>

#define SIZE 10
char stack[SIZE];
int top = -1;

void push(char item)
{
    if(top >= SIZE-1)
    {
        printf("\nStack Overflow.");
    }
    else
    {
        top = top+1;
        stack[top] = item;
    }
}

char pop()
{
    char item ;

    if(top <0)
    {
        printf("Stack is under flow.");
        getchar();
        exit(1);
    }
    else
    {
        item = stack[top];
        top = top-1;
        return(item);
    }
}

int is_op(char sym)
{
    if(sym == '*' || sym == '^' || sym == '/' || sym == '+' || sym =='-')
    {
        return 1;
    }
    else
    {
    return 0;
    }
}

int precedence(char sym)
{
    if(sym == '^')
    {
        return(3);
    }
    else if(sym == '*' || sym == '/')
    {
        return(2);
    }
    else if(sym == '+' || sym == '-')         
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

void InfixToPostfix(char infix_exp[], char postfix_exp[])
{ 
    int i, j;
    char item;
    char x;

    push('(');                               
    strcat(infix_exp,")");                  

    i=0;
    j=0;
    item=infix_exp[i];        

    while(item != '\0')       
    {
        if(item == '(')
        {
            push(item);
        }
        else if( isdigit(item) || isalpha(item))
        {
            postfix_exp[j] = item;              
            j++;
        }
        else if(is_op(item) == 1)        
        {
            x=pop();
            while(is_op(x) == 1 && precedence(x)>= precedence(item))
            {
                postfix_exp[j] = x;                  
                j++;
                x = pop();                      
            }
            push(x);
            push(item);                
        }
        else if(item == ')')        
        {
            x = pop();                   
            while(x != '(')              
            {
                postfix_exp[j] = x;
                j++;
                x = pop();
            }
        }
        else
        { 
            printf("\nInvalid infix Expression.\n");        
            getchar();
            exit(1);
        }
        i++;


        item = infix_exp[i]; 
    } 
    if(top>0)
    {
        printf("\nInvalid infix Expression.\n");       
        getchar();
        exit(1);
    }
    if(top>0)
    {
        printf("\nInvalid infix Expression.\n");       
        getchar();
        exit(1);
    }


    postfix_exp[j] = '\0';
}

int main()
{
    char infix[SIZE], postfix[SIZE];         
    printf("\nEnter Infix expression : ");
    gets(infix);

    InfixToPostfix(infix,postfix);                   
    printf(" The Postfix Expression is: ");
    puts(postfix);                    
    return 0;
}