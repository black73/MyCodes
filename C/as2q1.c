#include<stdio.h>
int max = 100;
int stack[101];
int top = -1;
int push(int n){
    if(top == max){
        printf("Stack Overflow");
    } else {
        top++;
        stack[top] = n;
    }
}

int pop(){
    if(top == -1){
        printf("Stack Underflow");
    } else {
        top--;
        printf("Popped Element: %d\n", stack[top+1]);
        return stack[top+1];
    }
}

int display(){
    int temp = top;
    if(temp == -1) printf("Stack empty");
    else {
        printf("Stack Elements are: \n");
        while(temp!= -1){
            printf("%d ", stack[temp]);
            temp--;
        }
    }
}

int main(){
    int c;
    printf("\nEnter the no. to perform the task:\n");
        printf("1- Push elements\n");
        printf("2- Pop an element\n");
        printf("3- Display all elements\n");
        printf("4- Stop\n");
    do{
        scanf("%d", &c);
        switch(c){
            case 1:
                {
                printf("Enter no of elements to push: ");
                int n; 
                scanf("%d",&n);
                printf("Enter elements: ");
                    while(n--){
                        int temp; 
                        scanf("%d",&temp);
                        push(temp);
                    }
                }
                break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: break;
        }
    } while( c!=4);
}