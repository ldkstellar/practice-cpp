#include <pthread.h>

#include <iostream>

void *printMessage(void *arg) {
  std::cout << "hello";
  return NULL;
}

int main(int argc, char const *argv[]) {
  pthread_t thread = 0;

  int result_code = pthread_create(&thread, NULL, printMessage, NULL);
  std::cout << "world";
  result_code = pthread_join(thread, NULL);
  std::cout << "world";

  return 0;
}
