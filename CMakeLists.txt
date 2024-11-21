cmake_minimum_required(VERSION 3.28)
project(Clion_PS)

set(CMAKE_CXX_STANDARD 17)

# 실행 파일 이름은 고유해야 합니다. 중복된 정의를 제거하거나 이름을 변경하세요.
# 올바른 실행 파일 정의
add_executable(Out BOJ_2935.cpp) # 실제 소스 파일을 지정하세요.
