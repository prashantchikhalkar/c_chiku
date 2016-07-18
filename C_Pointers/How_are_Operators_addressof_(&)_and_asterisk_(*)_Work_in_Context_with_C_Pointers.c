#if 0

Well! Asterisk (*) is used as a binary operator when used in binary arithmetic meaning it then takes two operands on either side. When used as a Unary operator, it’s frequently used with pointers, pointer expressions and arrays. Address of operator (&) is generally used to fetch address of any operand as lvalue. lvalue means variable on the left side of assignment statement. Both these operators are frequently used with pointers. For example:

/* 
 * address_indirection1.c -- Program shows using of addressof (&) and 
 * indirection (*) operators with pointers
 */
#include <stdio.h>
int main(void)
{
    int den = 11;   /* den is initialized to value 11 */
    int *ip = &den; /* ip is initialized address of integer den */
 
    printf("In exp. \'ip = &den\',\nAddress of den is %p and\ncontents of "
           "ip is %p\n", &den, ip);
 
    return 0;
}

Output of the above program follows:

In exp. 'ip = &den',
Address of den is 0x7fffd3fec074 and
contents of ip is 0x7fffd3fec074

Notice that two addresses are same which means that pointer ip is also pointing to location where den is stored. Accessing the value of den by using asterisk (*) with pointer ip is called indirection or dereferencing the pointer. Let’s see how is this performed. For example:

/* 
 * address_indirection2.c -- Program shows using of addressof (&) and 
 * indirection (*) operators with pointers
 */
#include <stdio.h>
int main(void)
{
    int den = 11;   /* den is initialized to value 11 */
    int *ip = &den; /* ip is initialized address of integer den */
 
    printf("In exp. \'ip = &den\',\nAddress of den is %p and\nContents of "
           "ip is %p\n", &den, ip);
 
    printf("Value of den is %d\nAnd by performing indirection on pointer ip"
           " is %d\n", den, *ip);/* '*' is an indirection operator in *ip */
 
    return 0;
}

Output as,

In exp. 'ip = &den',
Address of den is 0x7fffe4b6eca4 and
Contents of ip is 0x7fffe4b6eca4
Value of den is 11
And by performing indirection on pointer ip is 11


Notice that value of den is 11 when accessed indirectly using asterisk (*) on pointer ip and so perhaps this process is called indirection or dereferencing the pointer. This is general with pointer to any type. ad

#endif
