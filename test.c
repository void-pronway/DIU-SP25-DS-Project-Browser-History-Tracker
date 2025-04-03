#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>

#define MAX_NODES 5

typedef struct std {
    char name[20];
    int id;
    char sec;
    time_t tm;
    char tmstr[20];
    struct std *next;
    struct std *prev;
} node;

void insert(node **start, char name[], int id, char sec);
void del(node **start);
void printReverse(node *start);
void printSingle(node *current);
node* goFrwd(node *current);
node* goPrev(node *current);
int countNodes(node *start);

int main() {
    node *start = NULL;
    node *current = NULL;
    int n, id;
    char name[20], sec, ch;

    while(1) {
        system("cls");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Print All (Most Recent First)\n");
        printf("4. Navigate Forward\n");
        printf("5. Navigate Backward\n");
        printf("6. Print Current\n");
        printf("Enter your choice: ");
        scanf("%d", &n);

        switch(n) {
        case 1:
            fflush(stdin);
            printf("Name: ");
            scanf("%[^\n]", name);
            getchar();
            printf("ID: ");
            scanf("%d", &id);
            fflush(stdin);
            printf("Section: ");
            scanf("%c", &sec);
            getchar();
            insert(&start, name, id, sec);

            current = start;
            while(current->next != NULL) current = current->next;
            break;
        case 2:
            del(&start);
            if(start == NULL) current = NULL;
            break;
        case 3:
            {
                int count = countNodes(start);
                printf("\nTotal records: %d\n", count);
                printReverse(start);
                break;
            }
        case 4:
            if(current == NULL) {
                printf("No records available!\n");
            } else {
                current = goFrwd(current);
                printSingle(current);
            }
            break;
        case 5:
            if(current == NULL) {
                printf("No records available!\n");
            } else {
                current = goPrev(current);
                printSingle(current);
            }
            break;
        case 6:
            {
                int count = countNodes(start);
                printf("\nCurrent record (%d of %d):\n",
                       (current ? current->id : 0), count);
                printSingle(current);
                break;
            }
        default:
            printf("Error!\n");
        }

        printf("\nPress any key to continue...");
        getch();
    }

    return 0;
}

void insert(node **start, char name[], int id, char sec) {
    int nodeCount = countNodes(*start);

    if(nodeCount >= MAX_NODES) {
        del(start);
    }

    node *newnode = (node*)malloc(sizeof(node));
    strcpy(newnode->name, name);
    newnode->id = id;
    newnode->sec = sec;
    time(&newnode->tm);
    struct tm* local = localtime(&newnode->tm);
    strftime(newnode->tmstr, sizeof(newnode->tmstr), "%a %I:%M %p", local);
    newnode->next = NULL;

    if(*start == NULL) {
        newnode->prev = NULL;
        *start = newnode;
    } else {
        node *ptr = *start;
        while(ptr->next != NULL) {
            ptr = ptr->next;
        }
        ptr->next = newnode;
        newnode->prev = ptr;
    }
}

void del(node **start) {
    if(*start == NULL) {
        printf("List is empty!\n");
        return;
    }

    node *temp = *start;
    *start = (*start)->next;
    if(*start != NULL) {
        (*start)->prev = NULL;
    }
    free(temp);
}

void printReverse(node *start) {
    if(start == NULL) {
        printf("List is empty!\n");
        return;
    }

    node *ptr = start;
    while(ptr->next != NULL) {
        ptr = ptr->next;
    }

    int count = 1;
    while(ptr != NULL) {
        printf("\nRecord %d:\n", count++);
        printf("Name: %s\n", ptr->name);
        printf("ID: %d\n", ptr->id);
        printf("Section: %c\n", ptr->sec);
        printf("Time: %s\n", ptr->tmstr);
        ptr = ptr->prev;
    }
}

void printSingle(node *current) {
    if(current == NULL) {
        printf("No record selected!\n");
        return;
    }

    printf("\nCurrent Record:\n");
    printf("Name: %s\n", current->name);
    printf("ID: %d\n", current->id);
    printf("Section: %c\n", current->sec);
    printf("Time: %s\n", current->tmstr);
}

node* goFrwd(node *current) {
    if(current == NULL) return NULL;

    if(current->next != NULL) {
        return current->next;
    } else {
        printf("Already at the last record.\n");
        return current;
    }
}

node* goPrev(node *current) {
    if(current == NULL) return NULL;

    if(current->prev != NULL) {
        return current->prev;
    } else {
        printf("Already at the first record.\n");
        return current;
    }
}

int countNodes(node *start) {
    int count = 0;
    node *ptr = start;
    while(ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    return count;
}
