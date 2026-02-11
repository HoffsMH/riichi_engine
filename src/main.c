#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

typedef enum {
	SUIT_WIND,
	SUIT_DRAGON,
	SUIT_MAN,
	SUIT_SOU,
	SUIT_PIN,
} Suit;

typedef struct {
	Suit suit;
	uint8_t value;
} Tile;

bool is_honor(Tile *tile) {
	return tile->suit < 2;
}

void print_utf8(uint32_t code_point) {
	// all of the mahjong tiles are utf8'ed to 4 bytes
  uint8_t bottom_6 = code_point & 0x3F;
	uint8_t byte4 = 0x80 | bottom_6;

  uint8_t chunk3 = (code_point >> 6) & 0x3F;
	uint8_t byte3 = 0x80 | chunk3;

  uint8_t chunk2 = (code_point >> 12) & 0x3F;
	uint8_t byte2 = 0x80 | chunk2;

  uint8_t chunk1 = (code_point >> 18) & 0x07;
	uint8_t byte1 = 0xF0 | chunk1;

  printf("%c%c%c%c", byte1, byte2, byte3, byte4);
}

static const uint32_t suit_base[] = {0x1F000, 0x1F004, 0x1F007, 0x1F010, 0x1F019};

uint32_t tile_to_code_point(Tile *tile) {
	return suit_base[tile->suit] + (tile->value - 1);
}

int main(void) {
	Tile *ptr = malloc(sizeof(Tile));

	if (ptr == NULL) {
		exit(1);
	}

	ptr->suit = SUIT_SOU;
	ptr->value = 8;
	
	printf("address\n");
	printf("%p", (void *)ptr);
	printf("\n\nsize\n");
	printf("%zu", sizeof(Tile));

	printf("\n\nsuit\n");
	printf("%u", ptr->suit);

	printf("HERE is wind");
	printf("%d", SUIT_WIND);

	tile_to_code_point(ptr);

	printf("\n\n--------\n\n");
	print_utf8(tile_to_code_point(ptr));
	printf("\n\n--------\n\n");
	free(ptr);

}

