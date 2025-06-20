
/** 定义，提供公共定义 */

typedef enum {
    NT_EVENT_CONNECTING = 0xA0,
    NT_EVENT_CONNECTED,
    NT_EVENT_DISCONNECTED
} NT_EVENT_t;

typedef enum {
    NT_IF_WIFI_STA  = 0xB01,
    NT_IF_WIFI_AP   = 0xB02,
    NT_IF_WIFI_STA  = 0xB04,
    NT_IF_ETH       = 0xB08,
    NT_IF_4g        = 0xB10
} NT_IF_t;

/** 定义事件回调函数类型 */
typedef void(*NT_EVENT_CB_t)(NT_IF_t nIf, NT_EVENT_t evt);
