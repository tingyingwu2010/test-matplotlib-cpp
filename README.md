# test-matplotlib-cpp
Just a simple CMake project testing plotting in C++ with matplotlibcpp

## Dependencies

- [matplotlib-cpp](https://github.com/lava/matplotlib-cpp)

On Arch Linux you can `yay -S matplotlib-cpp` if you want to install it.

## Build

Note: See CMakeLists.txt and use the appropriate matplotlib-cpp include dirs
line based on if you want to use the system installed matplotlib-cpp or if you
want to use the local matplotlib-cpp in this repo.


```bash
mkdir build
cd build
cmake ..
make
```

## Usage

```bash
./bar
./minimal
./subplot
```
