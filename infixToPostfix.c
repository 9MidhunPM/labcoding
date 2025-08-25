#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;
int evaluation = 0;

void push(char c) {
    stack[++top] = c;
}

void pushint(int c){
	stack[++top] = c;
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void infixToPostfix(char* infix, char* postfix) {
    int i, k = 0;
    for (i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];

        if (isalnum(c)) {
            postfix[k++] = c;
        }

        else if (c == '(') {
            push(c);
        }

        else if (c == ')') {
            while (top != -1 && peek() != '(')
                postfix[k++] = pop();
            pop();
        }

        else if (isOperator(c)) {
            while (top != -1 && precedence(peek()) >= precedence(c))
                postfix[k++] = pop();
            push(c);
        }
    }

    while (top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';
}
int PostFixEvaluation(char* postfix){
	for(int i = 0; postfix[i] != '\0'; i++){
	char c = postfix[i];
	if (isalnum(c)){
		c = c - '0';
		pushint(c);
		}
	else if(isOperator(c)){
		int operand1 = pop();
		//printf("Operand1 = %d\n",operand1);
		int operand2 = pop();
		//printf("Operand2 = %d\n",operand2);
		int result = 0;
		switch(c){
			case '+': result = operand1 + operand2; break;
			case '-': result = operand1 - operand2; break;
			case '*': result = operand1 * operand2; break;
			case '/': result = operand1 / operand2; break;
			case '^': 
				result = 1; 
				for(int j=0;j<operand1;j++)result *= operand2;
				break;
			}
		//printf("evaluation = %d top of stack = %c, c = %c, result = %d\n", evaluation, peek(),c,result);
		evaluation = result;
		push(result);
		}
	}
	return evaluation;

}


int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);
	int X = PostFixEvaluation(postfix);
    printf("Evaluation : %d\n",evaluation);

    return 0;
}

