
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX_STACK 3

typedef struct
{
    int top;
    char data[3][3];
}STACK;

STACK tumpuk;

void inisialisasi()
{
    tumpuk.top=-1;
}

int IsEmpty()
{
    if(tumpuk.top == -1)
        return 1;
    else
        return 0;
}

int isfull()
{
    if(tumpuk.top == MAX_STACK - 1)
        return 1;
    else
        return 0;
}
void push(char d[3])
{
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top],d);
}
void pop()
{
    printf("data yang diambil = %s\n",tumpuk.data[tumpuk.top]);
    tumpuk.top--;
}
void tampil()
{
    for(int i=tumpuk.top;i>=0;i--)
    {
        printf("data : %s\n",tumpuk.data[i]);
    }
}
void clear()
{
   tumpuk.top = -1;
}
int main()
{
    int pilihan;
    inisialisasi();
    char dt[3];
    do
    {
        printf("1.push data\n");
        printf("2.pop data\n");
        printf("3.cetak array stack\n");
        printf("4.hapus array stack\n");
        printf("5.keluar\n");
        printf("masukan pilihanmu: ");
        scanf("%d",&pilihan);

       switch(pilihan)
       {
            case 1:
                if(isfull()!= 1)
            {
                printf("data yang ongin disimpan : ");
                scanf("%s",&dt);
                push(dt);
            }else
                 printf("\narray stack sudah penuh!\n");
                 break;
            case 2: if (IsEmpty()!= 1)
                pop();
            else
                printf("masuh kosong\n");
                break;
            case 3: if(IsEmpty()!= 1)
                tampil();
                else
                    printf("masuh kosong\n");
                    break;
            case 4: clear();
               printf("array sydah dibersihkan\n");
               break;
       }
       getch();
    } while(pilihan != 5);
     printf("keluar dari program");
     getch();
}
