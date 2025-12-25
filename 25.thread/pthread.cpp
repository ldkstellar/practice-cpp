#include <pthread.h>

#include <iostream>

void *printMessage(void *arg) {
  std::cout << "hello ";
  return NULL;
}

int main(int argc, char const *argv[]) {
  pthread_t thread = 0;

  int result_code = pthread_create(&thread, NULL, printMessage, NULL);
  result_code = pthread_join(thread, NULL);// thread block을 해제한다.
  std::cout << "world";

  return 0;
}
