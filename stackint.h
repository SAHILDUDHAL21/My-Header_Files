#define max 50
  
 struct stack 
 { 
         int a[30]; 
         int top; 
 }s1; 
  
 void init() 
 { 
       s1.top=-1; 
 } 
  
 int isempty() 
 { 
        if(s1.top==-1) 
               return 1; 
         else 
             return 0; 
 } 
  
 int isfull() 
 { 
       if(s1.top==max-1) 
             return 1; 
       else 
            return 0; 
 } 
  
 void push(int num) 
 { 
         if(isfull()) 
         printf("Stack is full \t Don't Push::"); 
       else 
         { 
               s1.top++; 
               s1.a[s1.top]=num; 
               
         } 
 } 
  
 int pop() 
 { 
       int val; 
       if (isempty()) 
            printf("Stack is Empty  \t can't pop"); 
       else 
       { 
               val=s1.a[s1.top]; 
               s1.top--; 
              return val; 
       } 
 } 
  
 void disp() 
 { 
       int i; 
       for(i=s1.top;i>=0;i--) 
       { 
                 printf("%d ",s1.a[i]); 
       } 
 }
 
int peek()
{
	return s1.a[s1.top];

}
 
