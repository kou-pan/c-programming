#include <stdio.h>
int main() {
int i,n,s=0;
for(i=1; i<=10; i++){
printf("%d\n",i);
s=s+i;
}
printf("合計は%dです\n",s);
return 0;
}
