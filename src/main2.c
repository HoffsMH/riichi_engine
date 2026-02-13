#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define SUIT_WIND  0
#define SUIT_DRAGON  1
#define SUIT_MAN  2
#define SUIT_SOU  3
#define SUIT_PIN  4

typedef struct {
	uint8_t suit;
	uint8_t value;

} Tile;

//form a codepoint
const uint32_t suit_base[] = {0x1F000, 0x1F004, 0x1F007, 0x1F010, 0x1F019};

uint32_t something(Tile *tile) {
	assert(tile->suit < 5);

	assert(tile->value < 9);

	return suit_base[tile->suit] + (tile->value - 1);
}


int main(void) {
	Tile* tile1 = malloc(sizeof(Tile));
	tile1->suit = 1;
	printf("hi %d", SUIT_WIND);
	printf("hi %d", tile1->suit);

	free(tile1);
}
