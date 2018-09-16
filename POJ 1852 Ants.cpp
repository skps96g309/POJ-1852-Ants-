#include<stdio.h>
#include<stdlib.h>
#define MAXn 1000000 

int L , n , ansmin , ansmax , ant_pos[MAXn];  /*L為竿子(pole)的長度，n為螞蟻的個數，ansmin是最後所需花得最少時間，ansmax則是最後所需花的最多時間*/ 
/*Find_min_times函數是用來找ansmin的值，並列印出來。*/ 
void Find_min_time(void) 
{
    
    int min;
    ansmin = -1;  /*初始化ansmin*/ 
    for(int i = 0 ; i < n ; i++) 
    {
            min = ( (ant_pos[i]) < (L - ant_pos[i]) ? (ant_pos[i]):(L - ant_pos[i]) );  /*每隻螞蟻都有兩個方向可以走，取所耗時間最少的給min*/ 
            if(min > ansmin)       /*每隻螞蟻都有各自所花的最少時間(min)，但是一定要取min最大的螞蟻為ansmin，因為其他螞蟻要等這隻螞蟻跑完才算全都掉落*/ 
                   ansmin = min;
    }
    printf("%d ",ansmin);
}
void Find_max_time(void)
{
    
    int max;
    ansmax = -1;
    for(int i = 0 ; i < n ; i++)
    {
            max = ( (ant_pos[i]) > (L - ant_pos[i]) ? (ant_pos[i]):(L - ant_pos[i]) );
            if(max > ansmax)
                   ansmax = max;
    }
    printf("%d\n",ansmax);
}
    

int main(void)
{
    int cases;  /*cases是欲執行的案例數目*/ 
    scanf("%d",&cases);
    while(cases--)
    {              
        scanf("%d %d", &L , &n);
        for(int i = 0 ; i<n ; i++)
                scanf("%d",&ant_pos[i]);
        Find_min_time();
        Find_max_time();
    }
    system("pause");
    return 0;
}
