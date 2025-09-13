#ifndef ESP32_CAMERA_PINS_H_
#define ESP32_CAMERA_PINS_H_

struct CameraPins
{
  int PWDN_GPIO_NUMS;
  int RESET_GPIO_NUMS;
  int XCLK_GPIO_NUMS;
  int SIOD_GPIO_NUMS;
  int SIOC_GPIO_NUMS;
  int Y9_GPIO_NUMS;
  int Y8_GPIO_NUMS;
  int Y7_GPIO_NUMS;
  int Y6_GPIO_NUMS;
  int Y5_GPIO_NUMS;
  int Y4_GPIO_NUMS;
  int Y3_GPIO_NUMS;
  int Y2_GPIO_NUMS;
  int VSYNC_GPIO_NUMS;
  int HREF_GPIO_NUMS;
  int PCLK_GPIO_NUMS;
};

#define CAMERA_MODEL_WROVER_KITS \
  {                             \
    .PWDN_GPIO_NUMS = -1,        \
    .RESET_GPIO_NUMS = -1,       \
    .XCLK_GPIO_NUMS = 21,        \
    .SIOD_GPIO_NUMS = 26,        \
    .SIOC_GPIO_NUMS = 27,        \
    .Y9_GPIO_NUMS = 35,          \
    .Y8_GPIO_NUMS = 34,          \
    .Y7_GPIO_NUMS = 39,          \
    .Y6_GPIO_NUMS = 36,          \
    .Y5_GPIO_NUMS = 19,          \
    .Y4_GPIO_NUMS = 18,          \
    .Y3_GPIO_NUMS = 5,           \
    .Y2_GPIO_NUMS = 4,           \
    .VSYNC_GPIO_NUMS = 25,       \
    .HREF_GPIO_NUMS = 23,        \
    .PCLK_GPIO_NUMS = 22,        \
  }

#define CAMERA_MODEL_ESP_EYE \
  {                          \
    .PWDN_GPIO_NUM = -1,     \
    .RESET_GPIO_NUM = -1,    \
    .XCLK_GPIO_NUM = 4,      \
    .SIOD_GPIO_NUM = 18,     \
    .SIOC_GPIO_NUM = 23,     \
    .Y9_GPIO_NUM = 36,       \
    .Y8_GPIO_NUM = 37,       \
    .Y7_GPIO_NUM = 38,       \
    .Y6_GPIO_NUM = 39,       \
    .Y5_GPIO_NUM = 35,       \
    .Y4_GPIO_NUM = 14,       \
    .Y3_GPIO_NUM = 13,       \
    .Y2_GPIO_NUM = 34,       \
    .VSYNC_GPIO_NUM = 5,     \
    .HREF_GPIO_NUM = 27,     \
    .PCLK_GPIO_NUM = 25,     \
  }

#define CAMERA_MODEL_M5STACK_PSRAM \
  {                                \
    .PWDN_GPIO_NUM = -1,           \
    .RESET_GPIO_NUM = 15,          \
    .XCLK_GPIO_NUM = 27,           \
    .SIOD_GPIO_NUM = 25,           \
    .SIOC_GPIO_NUM = 23,           \
    .Y9_GPIO_NUM = 19,             \
    .Y8_GPIO_NUM = 36,             \
    .Y7_GPIO_NUM = 18,             \
    .Y6_GPIO_NUM = 39,             \
    .Y5_GPIO_NUM = 5,              \
    .Y4_GPIO_NUM = 34,             \
    .Y3_GPIO_NUM = 35,             \
    .Y2_GPIO_NUM = 32,             \
    .VSYNC_GPIO_NUM = 22,          \
    .HREF_GPIO_NUM = 26,           \
    .PCLK_GPIO_NUM = 21,           \
  }

#define CAMERA_MODEL_M5STACK_V2_PSRAM \
  {                                   \
    .PWDN_GPIO_NUM = -1,              \
    .RESET_GPIO_NUM = 15,             \
    .XCLK_GPIO_NUM = 27,              \
    .SIOD_GPIO_NUM = 22,              \
    .SIOC_GPIO_NUM = 23,              \
    .Y9_GPIO_NUM = 19,                \
    .Y8_GPIO_NUM = 36,                \
    .Y7_GPIO_NUM = 18,                \
    .Y6_GPIO_NUM = 39,                \
    .Y5_GPIO_NUM = 5,                 \
    .Y4_GPIO_NUM = 34,                \
    .Y3_GPIO_NUM = 35,                \
    .Y2_GPIO_NUM = 32,                \
    .VSYNC_GPIO_NUM = 25,             \
    .HREF_GPIO_NUM = 26,              \
    .PCLK_GPIO_NUM = 21,              \
  }

#define CAMERA_MODEL_M5STACK_WIDE \
  {                               \
    .PWDN_GPIO_NUM = -1,          \
    .RESET_GPIO_NUM = 15,         \
    .XCLK_GPIO_NUM = 27,          \
    .SIOD_GPIO_NUM = 22,          \
    .SIOC_GPIO_NUM = 23,          \
    .Y9_GPIO_NUM = 19,            \
    .Y8_GPIO_NUM = 36,            \
    .Y7_GPIO_NUM = 18,            \
    .Y6_GPIO_NUM = 39,            \
    .Y5_GPIO_NUM = 5,             \
    .Y4_GPIO_NUM = 34,            \
    .Y3_GPIO_NUM = 35,            \
    .Y2_GPIO_NUM = 32,            \
    .VSYNC_GPIO_NUM = 25,         \
    .HREF_GPIO_NUM = 26,          \
    .PCLK_GPIO_NUM = 21,          \
  }

#define CAMERA_MODEL_M5STACK_ESP32CAM \
  {                                   \
    .PWDN_GPIO_NUM = -1,              \
    .RESET_GPIO_NUM = 15,             \
    .XCLK_GPIO_NUM = 27,              \
    .SIOD_GPIO_NUM = 25,              \
    .SIOC_GPIO_NUM = 23,              \
    .Y9_GPIO_NUM = 19,                \
    .Y8_GPIO_NUM = 36,                \
    .Y7_GPIO_NUM = 18,                \
    .Y6_GPIO_NUM = 39,                \
    .Y5_GPIO_NUM = 5,                 \
    .Y4_GPIO_NUM = 34,                \
    .Y3_GPIO_NUM = 35,                \
    .Y2_GPIO_NUM = 17,                \
    .VSYNC_GPIO_NUM = 22,             \
    .HREF_GPIO_NUM = 26,              \
    .PCLK_GPIO_NUM = 21,              \
  }

#define CAMERA_MODEL_AI_THINKER \
  {                             \
    .PWDN_GPIO_NUM = 32,        \
    .RESET_GPIO_NUM = -1,       \
    .XCLK_GPIO_NUM = 0,         \
    .SIOD_GPIO_NUM = 26,        \
    .SIOC_GPIO_NUM = 27,        \
    .Y9_GPIO_NUM = 35,          \
    .Y8_GPIO_NUM = 34,          \
    .Y7_GPIO_NUM = 39,          \
    .Y6_GPIO_NUM = 36,          \
    .Y5_GPIO_NUM = 21,          \
    .Y4_GPIO_NUM = 19,          \
    .Y3_GPIO_NUM = 18,          \
    .Y2_GPIO_NUM = 5,           \
    .VSYNC_GPIO_NUM = 25,       \
    .HREF_GPIO_NUM = 23,        \
    .PCLK_GPIO_NUM = 22,        \
  }

#define CAMERA_MODEL_TTGO_T_JOURNAL \
  {                                 \
    .PWDN_GPIO_NUM = 0,             \
    .RESET_GPIO_NUM = 15,           \
    .XCLK_GPIO_NUM = 27,            \
    .SIOD_GPIO_NUM = 25,            \
    .SIOC_GPIO_NUM = 23,            \
    .Y9_GPIO_NUM = 19,              \
    .Y8_GPIO_NUM = 36,              \
    .Y7_GPIO_NUM = 18,              \
    .Y6_GPIO_NUM = 39,              \
    .Y5_GPIO_NUM = 5,               \
    .Y4_GPIO_NUM = 34,              \
    .Y3_GPIO_NUM = 35,              \
    .Y2_GPIO_NUM = 17,              \
    .VSYNC_GPIO_NUM = 22,           \
    .HREF_GPIO_NUM = 26,            \
    .PCLK_GPIO_NUM = 21,            \
  }

#endif //ESP32_CAMERA_PINS_H_