#include <pthread.h>
#include <iostream>
void *printMessage(void* args){

    std::cout<<"helloworld"<<std::endl;


    return NULL;
}
int main(int argc, char const *argv[])
{
    pthread_t thread=0; // 0으로 초기화 해야한다// 운영체제마다 다르게 구성 맥은 구조체포인터임
    int result_code = pthread_create(&thread,NULL,printMessage,NULL);// pthread 호출 후 print message 실행 결과값출력
    result_code = pthread_join(thread,NULL);//메인 블로킹 print message 실행
    std::cout<<result_code<<std::endl;
    return 0;
}
