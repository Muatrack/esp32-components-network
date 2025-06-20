#pragma once

#ifdef USE_SYSTEM_LINUX
    #include <cstdint>
#else
    #include <stdint.h>
#endif

/** 
 * 定义日志返回值
 */

using NT_TYPE_t = uint16_t;

/** 通用定义 */
#define NT_OK                  00   // 执行成功
#define NT_FILE_NOT_EXIST      01   // 文件不存在
#define NT_FILE_FULL           02   // 文件已写满
#define NT_DIR_NOT_EXIST       10    // 目录不存在
#define NT_PARAM_INVALID       20    // 参数无效
#define NT_EXCP_UNKNOW         0xff    // 未知异常

/** 读取日志 */
