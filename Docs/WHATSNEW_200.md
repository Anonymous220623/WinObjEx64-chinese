
## 2.0.0 更新日志

 - **CmControlVector 查看器**

<img src="https://raw.githubusercontent.com/hfiref0x/WinObjEx64/master/Docs/Screenshots/CmControlVector.png" width="600" />

查看 CmControlVector ntoskrnl 参数数组的内容。可以显示变量的实际值，或者在启用驱动程序支持时将其转储出来。

 - **其他**
   + 新增对象名称处理方式，以支持嵌入空值
   + 新增 Pico 提供程序、Nmi、SiloMonitor 和 Errata 管理器回调函数
   + 在主窗口弹出菜单中添加了“复制名称”命令
   + 添加程序统计信息（参见`帮助->统计信息`）
   + 为进程列表添加图例窗口说明
   + 新增修复已转储驱动程序映像部分的功能
   + 添加 RegryTransaction 对象视图和访问权限
   + 将“全局设置”从“关于”框移动到“视图”->“系统信息”，并重新排列其输出
   + 现在可以取消驱动程序转储操作
   + 修复 PUNICODE_STRING 转储的显示问题
   + 修复 ALPC 端口类型对象有时无法打开但实际上可以打开的问题
   + 插件 SDK 已更新，以支持新的命名对象处理
   + Imagescope 插件已更新以适应插件 SDK 的更改
   + “附加功能”中需要提升权限的功能现在会请求权限提升，而不是直接禁用
   + 帮助文件已更新，包含驱动程序和符号用法说明
   + 内部结构调整和用户界面细微改动
