#include "stdio.h"
#include "malloc.h"
#include "string.h"

struct nodeType
{
	char* name;
	nodeType* link;

};

void main()
{
	void linkedListFunction();

	linkedListFunction();

	getchar();
	printf("\n\n Type any character <Enter> : ");
	getchar();

}

void linkedListFunction()
{
	nodeType* newNode;
	nodeType* head;
	nodeType* current;
	nodeType* previousNode;

	head = NULL;

	char* name;
	int choice;

	printf("\n insert=1, delete=2, search=3, traverse=4, quit=9 : ");
	scanf("%i", &choice);
	while (choice != 9)
	{
		switch (choice)
		{
		case 1:
			printf(" Type insert name : ");
			name = (char*)malloc(20);
			scanf("%s", name);

			newNode = (nodeType*)malloc(sizeof(nodeType));
			newNode->name = name;
			newNode->link = NULL;
			if (head == NULL)
			{
				head = newNode;

			}
			else
			{
				current = head;
				while (current != NULL)
				{
					previousNode = current;
					current = current->link;

				};
				previousNode->link = newNode;

			}

			break;

		case 2:
			printf(" Type remove name : ");
			name = (char*)malloc(20);
			scanf("%s", name);

			current = head;
			if (current != NULL)
			{
				if (!strcmp(head->name, name))
				{
					head = current->link;

				}
				else
				{
					while (current != NULL)
					{
						if (strcmp(current->name, name))
						{
							previousNode = current;
							current = current->link;

						}
						else
						{
							previousNode->link = current->link;
							break;
						}

					}

				}

			}
			if (current == NULL)
				printf("\n Have no node \n");
			else
				printf("\n delete name : %s\n", current->name);
			break;

		case 3:
			printf(" Type search name : ");
			name = (char*)malloc(20);
			scanf("%s", name);

			current = head;
			while (current != NULL)
			{
				if (strcmp(current->name, name))
					current = current->link;
				else break;

			}
			if (current == NULL)
			{
				printf("\n Have no node \n");

			}
			else
			{
				printf("\n search name : %s\n", current->name);

			}
			break;

		case 4:
			if (head == NULL)
			{
				printf("\n Have no node \n");

			}
			else
			{
				current = head;
				while (current != NULL)
				{
					printf("\n %s %p, %p", current->name, current,current->link);
					current = current->link;

				}
				printf("\n");

			}
			break;

		default: printf("\n Type Error \n");

		}

		printf("\n insert=1, delete=2, search=3, traverse=4, quit=9 : ");
		scanf("%i", &choice);

	}

}
