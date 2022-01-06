#include<stdio.h>
#include<conio.h>
int choice,j,i=0,arr[50],b[10],s;

void main()
    {
     printf("\nLimit of array : ");
     scanf("%d",&s);
     printf("\nAdd elements to array: ");

     for(i=0;i<s;i++)
     {
        scanf("%d",&arr[i]);
     }

     menu();
     getch();
    }

    menu()
    {
        printf("\n");
        printf("\n\n Array Operations");
        printf("\n\t1. Insert");
        printf("\n\t2. Delete");
        printf("\n\t3. Sort");
        printf("\n\t4. Search");
        printf("\n\t5. Display");
        printf("\n\t6. Exit");
        printf("\n\n\t Your Choice :");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1: insert();
            break;
        case 2:
            delete();
            break;
        case 3: sort();
            break;
        case 4: search();
            break;
        case 5 : display();
            break;
        case 6 :
            exit(1);
        }
    }


    insert()
    {
        int loc,ele;
        printf("\n\n\tArray Insertion\n");
        printf("\n");
        printf("\n\n\tCurrent Array : ");
        for(i=0;i<s;i++)
            printf("%d  ",arr[i]);
        printf("\n\n\tEnter location : ");
        scanf("%d",&loc);
        printf("\n\tEnter Element : ");
        scanf("%d", &ele);
        for(i=s;i>loc-1;i--)
            arr[i]=arr[i-1];
        arr[loc-1]=ele;
        printf("\n\n\tElement Inserted");
        printf("\n\n\tNew Array : ");
        s++;
        for(i=0;i<s;i++)
            printf("%d  ",arr[i]);
        getch();
        menu();
    }


    delete()
    {       int loc;
        printf("\n\n\tArray Deletion\n");
        printf("\n");
        printf("\n\n\tCurrent Array : ");
        for(i=0;i<s;i++)
            printf("%d  ",arr[i]);
        printf("\n\n\tEnter location : ");
        scanf("%d",&loc);

        for(i=loc;i<s-1;i++)
        {
            arr[i]=arr[i+1];
        }
        arr[s-1]=NULL;
        printf("\n\n\tElement Deleted");
        printf("\n\n\tNew Array : ");
        s--;
        for(i=0;i<s;i++)
            printf("%d  ",arr[i]);
        getch();
        menu();
    }

      display()
    {
        int i;

        if(s==0)
        {
            printf("\n\n\tno elements to display");
            return;
        }

        printf("\n\n\tarray elements are :");

        for(i=0;i<s;i++)
        {
            printf("%d\t",arr[i]);
        }
    }

    search()
    {
        int ele,loc;
        printf("\n\n\tArray Searching\n");
        printf("\n");
        printf("\n\n\tEnter Element to be searched : ");
        scanf("%d",&ele);
        printf("\n\n\tElements Found at Position: ");
        for(i=0;i<s;i++)
        {       if(ele==arr[i])
            printf("%d ",i+1);
        }
        getch();
        menu();

    }

    sort()
    {
        printf("\n\n\tArray Sorting\n");
        printf("\n");
        printf("\n\n\tCurrent Array : ");
        for(i=0;i<s;i++)
            printf("%d  ",arr[i]);
        for(i=0;i<s;i++)
        {
            for(j=i+1;j<s;j++)
            if (arr[i]>arr[j])
            {         arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
         }
        printf("\n\n\tElements Sorted");
        printf("\n\n\tSorted Array : ");
        for(i=0;i<s;i++)
            printf("%d  ",arr[i]);
        getch();
        menu();
    }


