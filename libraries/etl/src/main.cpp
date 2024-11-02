#include <etl/set.h>
#include <spdlog/spdlog.h>

#include "track_heap.hpp"

int main() {
  SPDLOG_INFO("Heap: {}", HeapTracker::allocated_all_time);
  std::string s =
      "This is a very long string that should circumvent small-strings "
      "optimization";
  SPDLOG_INFO("Heap: {}", HeapTracker::allocated_all_time);
  auto number = new int{};
  SPDLOG_INFO("Heap: {}", HeapTracker::allocated_all_time);

  etl::set<int, 100> numbers;
  SPDLOG_INFO("Heap: {}", HeapTracker::allocated_all_time);

  numbers.insert(10);

  return 0;
}
