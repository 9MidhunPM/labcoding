#include <stdio.h>
#include <string.h>
int main(){
  int stack[50];
  char input[50];
  int value,top=-1;
  printf("Command lines: \n 1.push <value> \n 2.pop \n 3.display \n 4.peek\n 5.isfull \n 6.isempty \n 7.exit\n");
  while(1==1){
    printf("Enter a Command:");
    fgets(input,sizeof(input),stdin);
    if(strncmp(input,"push",4)==0){
        if(top>=4)
          printf("Stack Overflow\n");
        else{
          sscanf(input+5,"%d",&value);
          top++;
          stack[top] = value;
          printf("Pushed %d into the stack\n",value);
          }
        }
    if(strncmp(input,"pop",3)==0){
       if(top==-1)
          printf("Stack Underflow\n");
       else{
          top--;
          printf("Popped %d from the stack\n",stack[top+1]);
          }
        }
    if(strncmp(input,"display",6)==0){
        printf("Current Stack:\n");
        for(int i = top; i >= 0; i--){
          if(i == top)
            printf("| %d | <-Top\n",stack[i]);
          else
            printf("| %d |\n",stack[i]);
          }
        }
    if(strncmp(input,"peek",4)==0){
        printf("Top Element is %d\n",stack[top]);
        }
    if(strncmp(input,"isfull",6)==0){
        if(top == 4)
          printf("Stack is Full\n");
        else
          printf("Stack is not Full\n");
        }
    if(strncmp(input,"isempty",7)==0){
        if(top == -1)
          printf("Stack is Empty\n");
        else
          printf("Stack is not Empty\n");
        }
    if(strncmp(input,"exit",4)==0){
        break;
        }
    }
  return 0;
  }
