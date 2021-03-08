int x;
int* p;
int* q;

p = q;
* p = 56;
p = x;
* p = *q;
q = &x;
* p = q;
