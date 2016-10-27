#include <stdio.h>

#define SIZEOF(var)   ((char *)(&var + 1) - (char *) (&var))

int main (void)
{
  int i;
  char c;
  float f;
  double d;
  
  void *ptr;
  
  struct {
    double d;
    float f;
    int i;
    char c;
  }s;
  
  int array [10];
  
  printf ("size of int = %d\n", SIZEOF(i));
  printf ("size of char = %d\n", SIZEOF(c));
  printf ("size of float = %d\n", SIZEOF(f));
  printf ("size of double = %d\n", SIZEOF(d));
  printf ("size of struct s = %d\n", SIZEOF(s));
  printf ("size of pointer = %d\n", SIZEOF(ptr));
  printf ("size of pointer = %d\n", SIZEOF(array));
  
  int *p = array;
  
  printf ("p = %x\n", p);
  printf ("*p = %x\n", *p);
  printf ("&array = %x\n", &array);
  printf ("array = %x\n", array);
  
  return 0;
}
