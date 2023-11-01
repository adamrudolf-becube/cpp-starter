#include <iostream>
#include <glog/logging.h>

int main(int argc, char* argv[])
{
    google::InitGoogleLogging(argv[0]);
    std::cout << "Hello world!" << std::endl;
    LOG(INFO) << "Example log message";
}