typedef unsigned int   uint;
typedef unsigned short ushort;
typedef unsigned char  uchar;
typedef uint pde_t;

// Lock struct for P3B 
// typedef struct __lock_t {
typedef struct lock_t {
    uint ticketnumber;
    uint turn;
} lock_t;

