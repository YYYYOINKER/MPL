#ifndef clox_chunk_h

#define clox_chunk_h
#include "common.h"

// Return from current function
typedef enum {
  OP_RETURN,

} OpCode;

// For storing data
typedef struct {
  int count;
  int capacity;
  uint8_t* code;
} Chunk;

// Initialize the byte array (Starts empty)
void initChunk(Chunk* chunk);

// Append a Byte to the end of the chunk
void writeChunk(Chunk* chunk, uint8_t byte);

#endif
