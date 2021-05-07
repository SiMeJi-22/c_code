//holiday_counter.c
#include<stdio.h>
int monthtoday(int month)
{
    int day=0;
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
        day = day+31;
    else
        day = day+30;
    return day;
}

int main(void)
{
    int st_year=0, st_mon=0, st_day=0, st_mtd=0, st_rest=0, st_iso=0;
    int to_year=0, to_mon=0, to_day=0, to_mtd=0;
    int year=0, total=0, a=0, hoilday=0;

    printf("시작 년도 입력 ");
    scanf("%d",&st_year);
    printf("시작 월 입력 ");
    scanf("%d",&st_mon);
    printf("시작 일 입력 ");
    scanf("%d",&st_day);

    printf("오늘 년도 입력 ");
    scanf("%d",&to_year);
    printf("오늘 월 입력 ");
    scanf("%d",&to_mon);
    printf("오늘 일 입력 ");
    scanf("%d",&to_day);

    printf("휴가 나간 일수 입력 ");
    scanf("%d",&st_rest);
    printf("격리한 일수 입력 ");
    scanf("%d",&st_iso);

    year = to_year - st_year;
    while(1)
    {
        st_mtd = st_mtd + monthtoday(st_mon);
        if(st_mon>0)
            st_mon = st_mon-1;
        else
            break;
    }
    while(1)
    {
        to_mtd = to_mtd + monthtoday(to_mon);
        if(to_mon>0)
            to_mon = to_mon-1;
        else
            break;
    }
    total = (year*365) + to_mtd + to_day - st_mtd - st_day - st_rest - st_iso;
    a = total/28;
    hoilday = a*3;
    printf("휴가일은 %d일 입니다",hoilday);

    return 0;
}