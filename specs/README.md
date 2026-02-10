# Riichi Mahjong Engine - Project Specification Hub

## Project Vision

A riichi mahjong engine built as a learning vehicle for modern C development practices.

## Learning Approach

This project follows a **discovery-based learning** model:
1. You describe desired behavior or data structures
2. You attempt implementation independently
3. When stuck, request small code hints with explanations
4. No large code dumps - incremental understanding is the goal

---

## Modern C Practices to Learn

### Code Quality
- **Linting**: `clang-tidy`, `cppcheck` for static analysis
- **Formatting**: `clang-format` for consistent style
- **Compiler warnings**: `-Wall -Wextra -Werror -pedantic`

### Testing
- **Unit testing**: Using frameworks like `Unity`, `Check`, or `greatest`
- **Memory checking**: `valgrind`, AddressSanitizer (`-fsanitize=address`)
- **Coverage**: `gcov`/`lcov`

### Build Systems
- **Make**: Traditional, ubiquitous, teaches dependency graphs
- **Just**: Modern command runner, cleaner syntax, complements Make

### Project Structure
```
riichi_engine/
├── src/           # Source files (.c)
├── include/       # Header files (.h)
├── tests/         # Test files
├── specs/         # Specifications and documentation
├── Makefile       # Build configuration
├── justfile       # Task runner commands
└── .clang-format  # Code style configuration
```

### Other Production Practices
- **Header guards** or `#pragma once`
- **Opaque types** for encapsulation
- **Const correctness**
- **Error handling patterns** (return codes, errno)
- **Documentation**: Doxygen-style comments
- **Separation of concerns**: Clean module boundaries

---

## Architecture Goals

### Interface Types (Ports)
- Standard I/O (stdin/stdout)
- File-based input/output
- (Future) Network sockets
- (Future) Shared memory / IPC

### Serialization Formats
- JSON (using a library or hand-rolled parser)
- Custom binary format (to learn byte-level thinking)
- Plain text (human-readable game states)

---

## Specifications Index

_As the project grows, individual specs will be linked here:_

- [ ] `tile.md` - Tile representation
- [ ] `hand.md` - Hand structure and operations
- [ ] `wall.md` - Wall and dealing
- [ ] `scoring.md` - Yaku and scoring
- [ ] `game_state.md` - Full game state machine
- [ ] `serialization.md` - Data format specifications
- [ ] `interfaces.md` - I/O port specifications

---

## Current Phase: Baby's First C Steps

Focus areas for initial development:
1. Get a "hello world" compiling with both Make and Just
2. Set up linting and formatting
3. Represent a single mahjong tile
4. Print a tile to stdout

---

## Backlog

Topics and tools parked for future exploration live in [`./backlog/`](./backlog/).

---

## Resources

_To be populated as we discover useful references_
