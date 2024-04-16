# quark 开发板的LVGL ui计划

## 写在前面

因为夸克开发板用了一个叫getty@tty1.service的服务去占用板载小屏做为tty1的终端交互，使用framebuffer前需要关掉此服务，防止/dev/fb1设备冲突的问题

## 编译
make即可，记得source toolchain文件夹
