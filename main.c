#include "List_include/init_List.h"
#include "List_include/merge_List.h"
#include "List_include/insert_List.h"
#include "List_include/struck_List.h"
#include "List_include/get_List.h"

int main() {
    int i;
    SqList L1, L2, L3;
    InitList_Sq(&L1);
    InitList_Sq(&L2);
    InitList_Sq(&L3);
    for (i = 0; i < 5; i++)
        scanf("%d",);
        ListInsert_Sq(&L1, i, i + 1);
    for (i = 0; i < 5; i++)
        ListInsert_Sq(&L2, i, i + 1);
    for (i = 0; i < 7; i++)
        ListInsert_Sq(&L3, i, i + 1);
    margeList_Sq(L1, L2, &L3);
    for (i = 0; i < L3.length; i++)
        printf("%d", L3.elem[i]);
    return 0;
}
