#include "LinkStack.h"
#include "LinkStack.c"

int main (int argc, char **argv)
{
        LinkStack *s = InitStack();
        Push(s,77);
        Push(s,88);
        Pop(s);
        Push(s,99);
        Push(s,100);
        printf("%d",GetTop(s));

        evaluate();
        return 0;

}
