#include <stdio.h>
void main()
{
    int N, x, y, sum, c;
    sum = 0; c = 0;

    scanf("%d",&N);
    
    while(N--){
        scanf("%d%d",&x, &y);
        while(1){
            if(x %2 != 0)
            {
                sum += x;
                c++;
                if(c == y)
                {
                    printf("%d\n",sum);
                    sum = 0;
                    c = 0;
                    break;
                }
            }
            x++;
        }
    }
}
