//������ ���� ö�ٷ��� ��6.1�ټ�����
#include <stdio.h>

int main()
{
    int x,y,z;
    int n;
    while(scanf("%d",&n)!=EOF){
    for(x = 0;x <=100;x++)
    {
        for(y = 0;y <= 100-x ;y++)
        {
            z = 100 - x - y;
            if(15 * x + 9 * y + z <= 3 * n)
                printf("x = %d,y = %d,z = %d\n",x,y,z);
        }

    }
  }
    return 0;
}
