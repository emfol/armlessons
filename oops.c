#include <stdio.h>

#define ARRAY_SIZE(obj, item) (sizeof(obj) / sizeof(item))

int add3sub1(int a, int b, int c, int d);

struct test_case {
  int a, b, c, d;
};

int main(int argc, char **argv)
{
  int i;
  struct test_case *tcp, test_cases[] = {
    { 10, 20, 30, 18 },
    { 101, 34, -190, 25 },
  };
  for (i = 0; i < ARRAY_SIZE(test_cases, struct test_case); ++i) {
    tcp = test_cases + i;
    printf("Test case #%d\n"
           "a = %d\n"
           "b = %d\n"
           "c = %d\n"
           "d = %d\n"
           "result = %d\n\n",
           i + 1, tcp->a, tcp->b, tcp->c, tcp->d,
           add3sub1(tcp->a, tcp->b, tcp->c, tcp->d));
  }
  return 0;
}
