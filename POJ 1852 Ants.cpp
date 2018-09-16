#include<stdio.h>
#include<stdlib.h>
#define MAXn 1000000 

int L , n , ansmin , ansmax , ant_pos[MAXn];  /*L����l(pole)�����סAn�����ƪ��ӼơAansmin�O�̫�һݪ�o�̤֮ɶ��Aansmax�h�O�̫�һݪ᪺�̦h�ɶ�*/ 
/*Find_min_times��ƬO�Ψӧ�ansmin���ȡA�æC�L�X�ӡC*/ 
void Find_min_time(void) 
{
    
    int min;
    ansmin = -1;  /*��l��ansmin*/ 
    for(int i = 0 ; i < n ; i++) 
    {
            min = ( (ant_pos[i]) < (L - ant_pos[i]) ? (ant_pos[i]):(L - ant_pos[i]) );  /*�C�����Ƴ�����Ӥ�V�i�H���A���үӮɶ��̤֪���min*/ 
            if(min > ansmin)       /*�C�����Ƴ����U�۩Ҫ᪺�̤֮ɶ�(min)�A���O�@�w�n��min�̤j�����Ƭ�ansmin�A�]����L���ƭn���o�����ƶ]���~���������*/ 
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
    int cases;  /*cases�O�����檺�רҼƥ�*/ 
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
