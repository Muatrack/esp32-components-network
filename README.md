# 网络组件

组件用于初始化和维护设备中的网络 (有线网、WIFI、4G), 初步计划适配 ESP32(freertos) 和 linux 。<br>支持功能如下:

* 支持ETH、WIFI、4G 方式联网，三者可以同时存在和分别使用。
* 网络初始化，启停
* 出口连通性检查
* 流量出口切换

# 组件的使用

## 编译 

``` c

// 新建编译缓存目录
mkdir build & cd build
// cmake 配置
cmake ../
// cmake 编译
cmake --build ./
```

## 组件的调用

``` c

#include <stdio.h>
#include <stdlib.h>


```