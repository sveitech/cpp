#pragma once

#include <cstddef>
#include <cstdlib>

class HeapTracker {
 public:
  static HeapTracker& instance() {
    static HeapTracker s;
    return s;
  }

  static size_t allocated_all_time;

 private:
  HeapTracker() {}
  ~HeapTracker() {}
};

void* operator new(size_t size);
void operator delete(void* object, size_t size) noexcept;
