#include <stdio.h>

int main(void) {
  double startRange,endRange,cmVar,inchVar;
  printf("Enter the starting range: ");
  scanf("%lf",&startRange);
  printf("Enter the ending range: ");
  scanf("%lf",&endRange);
  printf("Centimeters\t\tInches\n");
  for(inchVar=startRange;inchVar<=endRange;inchVar+=6){
     cmVar=inchVar*2.54;
     printf("%.2lf\t\t\t%.2lf\n",cmVar,inchVar);
  }
  return 0;
}
