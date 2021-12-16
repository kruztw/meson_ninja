#include <stdio.h>
#include <pthread.h>

void *handler(void *arg) {
    int tid = *(int *)arg;
    printf("hello %d\n", tid);
    return NULL;
}

int main()
{
    pthread_t p1, p2;
    int id1 = 1, id2= 2;

    pthread_create(&p1, NULL, handler, &id1);
    pthread_create(&p2, NULL, handler, &id2);
    pthread_join(p1, NULL);
    pthread_join(p2, NULL);


    return 0;
}
