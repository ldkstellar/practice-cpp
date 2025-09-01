#include <iostream>
#include <mutex>
#include <queue>
#include <thread>

static std::mutex sQueueLock;
static std::condition_variable sEvent;
static std::queue<int> sQueue;

void consume() {
  while (true) {
    int val;
    {
      std::unique_lock<std::mutex> lock(sQueueLock);
      sEvent.wait(lock,
                  [] { return !sQueue.empty(); });  // empty가 아니면 return
      val = sQueue.front();
      sQueue.pop();
    }
    std::cout << val << std::endl;
  }
}

void produce() {
  std::unique_lock<std::mutex> lock(sQueueLock);
  sQueue.push(1);
  sEvent.notify_one();
}  // unlock

int main(int argc, char const *argv[]) {
  std::thread producer(produce);
  std::thread consumer(consume);
  consumer.join();
  producer.join();

  return 0;
}
