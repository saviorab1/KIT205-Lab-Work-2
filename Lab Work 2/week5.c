// week5.c
#include <stdio.h>
#include "list_wk5.h"
#include "hashtable_wk5.h"

int main() {
	int command = 1;
	HashTable table = create_hashtable(11);
	char buffer[100];

	while (command) {
		scanf_s("%d", &command);
		switch (command) {
		case 1:
			scanf_s("%s", buffer, 100);
			hash_insert(&table, buffer);
			break;
		case 2: // TODO: remove
			break;
		case 3: // TODO: print
			break;
		}
		printf("\n");
	}
	// TODO: destroy
}