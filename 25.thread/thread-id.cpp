#include <iostream>
#include <string>
#include <sstream>
#include <thread>


void printMessage(const std::string messagge){
    std::cout<<messagge<<std::endl;
}

int main(int argc, char const *argv[])
{
    std::thread thread(printMessage,"저는 동규 입니다.");
    thread.join();//스레드 끝날때까지 Wait 아니면 
    std::thread::id child_id = thread.get_id();// platform 마다 다르다 변수형들이
    std::stringstream ss;
    ss<<child_id;
    std::string child_thread_id_str = ss.str();
    printMessage("waiting the child thread id:" + child_thread_id_str);
   
    return 0;
}
