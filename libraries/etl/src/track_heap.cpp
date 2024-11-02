#include "track_heap.hpp"

size_t HeapTracker::allocated_all_time = 0;

void* operator new(size_t size) {
  HeapTracker::allocated_all_time += size;
  return malloc(size);
}

void operator delete(void* object, size_t size) noexcept { free(object); }
