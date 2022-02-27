#include <stdio.h>
#include <stdlib.h>

int main()
{

for (int i = 1; i<10; i++) {
for(int j=10; j>=i-1; j--)
printf(j);
}
printf("\n");
}
