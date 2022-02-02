
#include <stdio.h>
#include "function.h"


int test (){
  int grade, pass, fail, total_test;

  pass = 0;
  fail = 0;

  do
    {
      printf ("\nEnter grade:\n");
      scanf ("%d", &grade);

      if (grade < 10 && grade >= 5)
	pass = pass + 1;
      else
	fail = fail + 1;
      printf ("\nPass: %d", pass);
      printf ("\nFail: %d", fail);
      total_test = (pass + fail);
    }

  while (total_test <= 14);

}
