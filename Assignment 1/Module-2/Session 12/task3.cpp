#include<stdio.h>
struct MovieShow
{
    char Movie[50];
    int Screen;

    struct Time
    {
        int hours;
        int minutes;
    } Time;
};
main()
{
    struct MovieShow m = {"Avengers", 3, {7, 30}};

    printf("Movie: %s\n", m.Movie);
    printf("Screen: %d\n", m.Screen);
    printf("Time: %d:%d\n", m.Time.hours, m.Time.minutes);
}
