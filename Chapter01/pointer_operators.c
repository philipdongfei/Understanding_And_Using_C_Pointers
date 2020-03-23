#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int vector[] = {28, 41, 7};
    int *pi = vector; // pi:100

    printf("%d\n", *pi); // displays 28
    pi += 1;             // pi: 104
    printf("%d\n", *pi); // displays 41
    pi += 1;             // pi: 108
    printf("%d\n", *pi); // displays 7

    short s;
    short *ps = &s;
    char c;
    char *pc = &c;

    printf("Content of ps before: %d\n", ps);
    ps = ps + 1;
    printf("Content of ps after: %d\n", ps);

    printf("Content of pc before: %d\n", pc);
    pc = pc + 1;
    printf("Content of pc after: %d\n", pc);

    int num = 5;
    void *pv = &num;
    printf("%p\n", pv);
    pv = pv + 1;

    int *pii = vector + 2; // pi: 108
    printf("%d\n", *pi); // displays 7 
    pi -= 1;             // pi: 104
    printf("%d\n", *pi); // displays 41
    pi -= 1;             // pi: 100
    printf("%d\n", *pi); // displays 28 


    int *p0 = vector;
    int *p1 = vector+1;
    int *p2 = vector+2;

    printf("p2-p0: %d\n", p2-p0);
    printf("p2-p1: %d\n", p2-p1);
    printf("p0-p1: %d\n", p0-p1);

    printf("p2>p0: %d\n", p2>p0);
    printf("p2<p0: %d\n", p2<p0);
    printf("p0>p1: %d\n", p0>p1);

    char *titles[] = {"A Tale of Two Cities",
            "Wuthering Heights", "Don Quixote",
            "Odyssey", "Moby-Dick", "Hamlet",
            "Gulliver's Travels"};
    char **bestBooks[3];
    char **englishBooks[4];

    bestBooks[0] = &titles[0];
    bestBooks[1] = &titles[3];
    bestBooks[2] = &titles[5];

    englishBooks[0] = &titles[0];
    englishBooks[1] = &titles[1];
    englishBooks[2] = &titles[5];
    englishBooks[3] = &titles[6];

    printf("%s\n", *englishBooks[1]); // Wuthering Heights 

    const int limit = 500;
    const int *pci;
    pci = &limit;
    
    printf("    num - Address: %p  value: %d\n", &num, num);
    printf("  limit - Address: %p  value: %d\n", &limit, limit);
    printf("     pi - Address: %p  value: %p\n", &pi, pi);
    printf("    pci - Address: %p  value: %p\n", &pci, pci);
    printf("%d\n", *pci);

    pci = &num;
    //*pci = 200; // error
    
    //int *const cpi = &limit;

    int age;
    int *const cpi = &num;
    //cpi = &age; // error
    const int * const cpci = &limit;
    //cpci = &num; // error
    //*cpci = 25;//error
    const int * const * pcpci = &cpci;

    printf("%d\n", *cpci);
    pcpci = &cpci;
    printf("%d\n", **pcpci);

    
    return 0;
}
