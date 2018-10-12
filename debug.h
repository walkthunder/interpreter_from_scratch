#ifndef cox_debug_h
#define cox_debug_h

#include "chunk.h"

void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int i);

static int constantInstruction(const char* name, Chunk* chunk, int offset);

#endif