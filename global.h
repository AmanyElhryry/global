

#ifndef GLOBAL_H
#define GLOBAL_H

typedef struct elmenttype{
short int etype;
union{
int  I_type ;
char C_type ;
double D_type;
}info;
}ElmentType;

#define MAXELEMNT 100

typedef ElmentType QueueEntry ;
#define MAXQUEUE MAXELEMNT

typedef ElmentType StackEntry ;
#define MaxSize MAXELEMNT

typedef ElmentType ListEntry ;
#define MaxList MAXELEMNT

#endif // GLOBAL_H

