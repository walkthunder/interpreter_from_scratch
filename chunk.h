#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"

// Operation Code
typedef enum {
    OP_CONSTANT,
    OP_RETURN,
} OpCode;

// Data come with the instructions
typedef struct {
    int count;
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk* chunk, Value value);
static int getLine(Chunk* chunk, int line);
#endif
