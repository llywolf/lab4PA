#include "liste.h"


int main()
{
    Node *headTimp=NULL;
    int nrFunctii;
    printf("Nr fucntii: ");
    scanf("%d",&nrFunctii);
    getchar();
    for(int i = 0; i < nrFunctii; i++)
    {
        int timp;
        printf("\ntimp executie: ");
        scanf("%d", & timp);
        getchar();
        addAtEnd(&headTimp, timp);
    }
    printf("\n\n");
    display(headTimp);
    addAtPos(&headTimp, 3, 4);
    actualizare(&headTimp, nrFunctii + 1);
    printf("\n\n");
    display(headTimp);
    return 0;
}
