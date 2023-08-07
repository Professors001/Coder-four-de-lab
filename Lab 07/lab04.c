#include <stdio.h>

int strcmpbybanklnwza(char *last,char *now,int len) {
    int i = 0, count = 0;
    for(; i < len;i++) {
        char x,y;
        x = last[i]; y = now[i];
        if(x != y)
            count++;
    }
    return count;    
}

int main()
{
  int len = 0,n = 0,i = 1, key = 1;
  scanf("%d\n%d", &len, &n);
  char lc[len+1],now[len+1];
  scanf("%s", lc);
  for(;i < n; i++){
    scanf("%s", now);
    int f = strcmpbybanklnwza(lc,now,len);
    if(key) {
        if(f <= 2)
            for(int j = 0;j < len; j++)
                lc[j] = now[j];
        else
            key = 0;
    }
  }
  printf("%s", lc);
}