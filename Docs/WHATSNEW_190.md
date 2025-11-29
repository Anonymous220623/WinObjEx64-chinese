
## 1.9.0 更新日志

 - **未加载驱动程序视图**

<img src="https://raw.githubusercontent.com/hfiref0x/WinObjEx64/master/Docs/Screenshots/UnloadedDrivers.png" width="600" />

查看 MmUnloadedDrivers ntoskrnl 管理数组的内容。

 - **ALPC 端口连接**

<img src="https://raw.githubusercontent.com/hfiref0x/WinObjEx64/master/Docs/Screenshots/AlpcPortConnections.png" width="600" />

显示有关 ALPC 端口连接的客户端的信息，类似于 WinDbg *!alpc /port* 命令。

 - **共享内存区（节，Section）对象视图**

<img src="https://raw.githubusercontent.com/hfiref0x/WinObjEx64/master/Docs/Screenshots/ViewingSectionObject.png" width="600" />

查看 Section 对象类型及其子结构（如 CONTROL_AREA、SEGMENT 等）的内容。请注意，此视图并不完整，仅列出重要字段，类似于 WinDbg *!ca 0xX 4* 命令。

- **已更新的 ApiSetSchema 扩展**

<img src="https://raw.githubusercontent.com/hfiref0x/WinObjEx64/master/Docs/Screenshots/ApiSetView190.png" width="600" />

改进了搜索功能并修复了一些错误。

- **其他**
   + 将 ExCreateCallback 列表添加到回调列表中；
   + 修复了多个错误。
