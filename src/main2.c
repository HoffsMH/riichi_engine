#include <stdint.h>
#include <stdio.h>

#define SUIT_WIND  0
#define SUIT_DRAGON  1
#define SUIT_MAN  2
#define SUIT_SOU  3
#define SUIT_PIN  4

typedef struct {
	uint8_t suit;
	uint8_t value;

} Tile;

int main(void) {
	Tile* tile1 = malloc(sizeof(Tile))
	printf("hi %d", SUIT_WIND);
}
