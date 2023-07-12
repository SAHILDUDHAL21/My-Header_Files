# define max 50

struct stack 
{
        char a[max];
        int top;
}s;

void init()
{
      s.top=-1;
}

int isempty()
{
          if(s.top==-1)
                   return 1;
          else
                return 0;
}

int isfull()
{
          if(s.top==max-1)
                    return 1;
          else
                   return 0;
}

void push(char c)
{
        if(isfull())
        printf("\n sk is Full ");
         else
         {
                  s.top++;
                  s.a[s.top]=c;
         }
}

char pop()
{       
          char ch;
          if(isempty())
          printf("\n sk is Empty   ");
          else
          {
          ch=s.a[s.top];
          s.top--;
          return ch;
          }
}

int pri(char x)
{
            if(x=='(')
              return 0;
            if(x=='+'||x=='-')
              return 1;
               if(x=='/'||x=='*')
              return 2;
                if(x=='$'||x=='^')
              return 3;
              return 0;
}

void reverseString(char* str)
{
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void disp()
{
        int i;
        for(i=s.top;i>=0;i--)
        printf("%c",s.a[i]);

}

