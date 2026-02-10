#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef enum {
	SUIT_DRAGON,
	SUIT_WIND,
	SUIT_MAN,
	SUIT_PIN,
	SUIT_SOU,
} Suit;

typedef struct {
	Suit suit;
	uint8_t value;
} Tile;

bool is_honor(Tile *tile) {
	return tile->suit < 2;
}

void tile_to_utf8(Tile *tile) {
	if (is_honor(tile)) {
		printf("is Honor");
		return;
	}
	printf("is not honor");
}

int main(void) {
	Tile *ptr = malloc(sizeof(Tile));

	if (ptr == NULL) {
		exit(1);
	}

	ptr->suit = SUIT_MAN;
	
	printf("address\n");
	printf("%p", (void *)ptr);
	printf("\n\nsize\n");
	printf("%zu", sizeof(Tile));

	printf("\n\nsuit\n");
	printf("%u", ptr->suit);

	printf("HERE is wind");
	printf("%d", SUIT_WIND);

	tile_to_utf8(ptr);

	free(ptr);
	printf("🀍  🀜\n");
}

