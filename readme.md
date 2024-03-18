## 自动驾驶算法学习


### 环境搭建

* 安装Eigen3
  * brew install eigen

* 安装opencv
  * 进入OpenCV源码目录，并创建一个用于构建（build）的临时目录。在这个构建目录中，使用CMake配置编译选项，并指定安装路径。
  ```
  cd opencv  
  mkdir build  
  cd build  
  cmake -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local ..  
  ```
  * 使用make命令编译OpenCV，并使用sudo make install命令安装它。
  ```
  make 
  sudo make install
  ```
  * 为了使编译器能够找到OpenCV的库和头文件，你可能需要将OpenCV的库路径添加到你的环境变量中。这通常涉及编辑你的shell配置文件（如.bash_profile或.zshrc），并添加类似下面的行：
  ```
  export OPENCV_DIR=/usr/local  
  export PATH=$PATH:$OPENCV_DIR/bin  
  export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:$OPENCV_DIR/lib  
  export CPPFLAGS="-I$OPENCV_DIR/include -I$OPENCV_DIR/include/opencv4"  
  export LDFLAGS="-L$OPENCV_DIR/lib"
  ```
  * 保存文件后，运行source ~/.bash_profile（或相应的配置文件命令）来应用更改。
  
