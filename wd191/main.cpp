#include "stdio.h"
#include "time.h"
main()
{
    time_t lt; /*define a longint time varible*/
    lt=time(NULL);/*system time and date*/
    printf("%s",ctime(&lt)); /*english format output*/
    printf("%s",asctime(localtime(&lt)));/*tranfer to tm*/
    printf("%s",asctime(gmtime(&lt))); /*tranfer to Greenwich time*/
}
