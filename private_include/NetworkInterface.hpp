/**
 * 定义网络接口，eth wifi 4g 实现此接口
 */

 #include "common_def.hpp"

 class NetworkInterface
 {
 private:
    /* data */
 public:
 
    NetworkInterface(/* args */);
    virtual ~NetworkInterface();

    /** 网络模块初始化 */
    virtual void nt_init( NT_IF_t nIf ) = 0;

    /** 网络模块启动 */
    virtual void nt_start() = 0;

    /** 网络模块停止 */
    virtual void nt_stop() = 0;

    /** 网络模块重启 */
    virtual void nt_restart() = 0;

    /** 模块时间回调函数设置 */
    virtual void nt_event_register(NT_EVENT_t evt, NT_EVENT_CB_t cb) = 0;
 };
 
 NetworkInterface::NetworkInterface(/* args */)
 {
 }
 