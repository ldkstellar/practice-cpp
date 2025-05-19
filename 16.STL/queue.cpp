#include <iostream>
#include <queue>
int main(int argc, char const *argv[]) {
  std::queue<std::string> studentNameQueue;
  studentNameQueue.push("Coco");
  studentNameQueue.push("Mocha");
  while (!studentNameQueue.empty()) {
    std::cout << "waiting student: " << studentNameQueue.front() << std::endl;
    studentNameQueue.pop();  // 가장 삽입되었던요소 뺀다.
  }
  std::queue<int> myqueue;
  myqueue.push(1);
  myqueue.push(2);
  myqueue.push(3);
  int &front = myqueue.front();
  int &back = myqueue.back();
  std::cout << front << " " << back << std::endl;

  return 0;
}
