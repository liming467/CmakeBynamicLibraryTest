if not exist build (  #判断文件夹build是否存在，不存在则就创建
    mkdir build
) else (
    del /S /Q /F build
    rd /S /Q build
    mkdir build
)
 
cd build
cmake ..
cmake --build .
TIMEOUT /T -1
