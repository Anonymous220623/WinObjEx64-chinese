# WinObjEx64

> [!WARNING]
>
> 项目未开始施工

<img width="786" height="593" alt="图片" src="https://github.com/user-attachments/assets/991369d1-513e-4490-82ad-7cdb5a1b30a8" />

WinObjEx64 是一款高级实用程序，可用于浏览 Windows 对象管理器命名空间。对于某些对象类型，您可以双击该对象或使用工具栏上的“属性”按钮来获取更多信息，例如描述、属性、资源使用情况等。如果您拥有相应的访问权限，WinObjEx64 还允许您查看和编辑与对象相关的安全信息。

# 系统要求

WinObjEx64 不需要管理员权限。但是查看大部分命名空间以及编辑对象相关的安全信息需要管理员权限。

WinObjEx64 仅适用于以下 x64 Windows 系统：Windows 7、Windows 8、Windows 8.1 和 Windows 10/11（包括服务器版本）。


# 功能

<details>
  <summary>单击此处展开或收起功能列表</summary>

- **浏览 Windows 对象管理器命名空间的所有内容**  
	- 层级化对象树   
	- 解析符号链接   
	- 由映像文件支持的节（Section）类型对象的版本信息  
	- 有关窗口站（WindowStation）类型对象的附加信息  
	- **查看对象详细信息**:  
		- 描述  
		- 标志  
		- 无效属性  
		- 内存池类型  
		- 对象类型特定信息  
		- 对象相关结构内存转储<sup>1</sup>:  
			- `ALPC_PORT`  
			- `CALLBACK_OBJECT`  
			- `DEVICE_OBJECT`  
			- `DRIVER_OBJECT`  
			- `DIRECTORY_OBJECT`  
			- `FLT_SERVER_PORT_OBJECT`  
			- `KEVENT`  
			- `KMUTANT`  
			- `KSEMAPHORE`  
			- `KTIMER`  
			- `KQUEUE` (IoCompletion)  
			- `OBJECT_SYMBOLIC_LINK`  
			- `OBJECT_TYPE`  
		- 已打开句柄  
		- 统计数据  
		- 支持的访问权限  
		- 进程信任级别  
		- 更多信息...  

	- **在转储子结构中显示**<sup>1</sup>:  
		- `ALPC_PORT_ATTRIBUTES`  
		- `DEVICE_MAP`  
		- `LDR_DATA_TABLE_ENTRY`  
		- `OBJECT_TYPE_INITIALIZER`  
		- `UNICODE_STRING`  
		- 更多信息...  

	- 编辑对象相关的安全信息<sup>2</sup>  
	- 检测驱动程序对象 IRP 修改（通过结构转储）<sup>1</sup>  
	- 检测内核对象挂钩（通过结构体转储）<sup>1</sup>  
	- 按名称和/或类型搜索对象  

- **系统信息查看器**  
	- 引导/启动状态和类型  
	- 代码完整性选项  
	- 缓解标志 
	- Windows 版本和构建信息 

- **已加载驱动程序列表查看器**  
	- 转储选定的驱动程序<sup>1</sup>  
	- 将驱动程序列表导出到 CSV 文件  
	- 跳转到驱动程序文件位置  
	- 检测内核填充码(shim)引擎填充码驱动程序<sup>1</sup>  
	- 查看驱动程序文件属性  

- **邮件槽/命名管道查看器**  
	- 列出所有已登记的邮箱槽/命名管道  
	- 编辑命名管道安全信息<sup>4</sup>  
	- 对象统计  

- **层级进程树查看器**<sup>2</sup>  
	- 显示进程 ID、用户名、`EPROCESS` 地址  
	- 按类型突出显示进程（类似于 Sysinternals<sup>TM</sup> Process Explorer）  
	- 显示所选进程的线程列表  
	- 显示 `ETHREAD` 地址  
	- **进程/线程对象的通用属性**:  
		- 基本属性（与其他对象类型一致）  
		- 开始时间  
		- 进程类型  
		- 映像文件名  
		- 命令行  
		- 当前工作目录  
		- 应用缓解措施  
		- 保护  
		- “关键进程”标志状态  
		- 安全编辑  
	- 跳转到进程文件位置  
	- **进程/线程令牌信息**:  
		- 用户名  
		- 用户 SID  
		- 应用沙箱 SID  
		- 会话  
		- UI 访问  
		- 提升（Elevation）状态  
		- 完整性级别  
		- 特权和组  
	- **附加令牌属性**:  
		- 基本属性（与其他对象类型一致）  
		- 安全属性列表  
		- 安全编辑  

- **软件许可缓存查看器**  
	- 列出已注册的许可证  
	- 显示许可证数据  
	- 将 `SL_DATA_BINARY` 许可证数据转储到文件  

- **用户共享数据查看器**  
	- 关键 `KUSER_SHARED_DATA` 部分的结构化转储  

- **系统回调查看器**<sup>1</sup>  
	- 显示以下各项的回调地址、模块和详细信息:  
		- `PsSetCreateProcessNotifyRoutine`  
		- `PsSetCreateProcessNotifyRoutineEx`  
		- `PsSetCreateProcessNotifyRoutineEx2`  
		- `PsSetCreateThreadNotifyRoutine`  
		- `PsSetCreateThreadNotifyRoutineEx`  
		- `PsSetLoadImageNotifyRoutine`  
		- `PsSetLoadImageNotifyRoutineEx`  
		- `KeRegisterBugCheckCallback`  
		- `KeRegisterBugCheckReasonCallback`  
		- `CmRegisterCallback`  
		- `CmRegisterCallbackEx`  
		- `IoRegisterShutdownNotification`  
		- `IoRegisterLastChanceShutdownNotification`  
		- `PoRegisterPowerSettingCallback`  
		- `SeRegisterLogonSessionTerminatedRoutine`  
		- `SeRegisterLogonSessionTerminatedRoutineEx`  
		- `IoRegisterFsRegistrationChange`  
		- `IopFsListsCallbacks`  
		- `IoRegisterPlugPlayNotification`  
		- `ObRegisterCallbacks`  
		- `DbgSetDebugPrintCallback`  
		- `DbgkLkmdRegisterCallback`  
		- `PsRegisterAltSystemCallHandler`  
		- CodeIntegrity `SeCiCallbacks`  
		- `ExRegisterExtension`  
		- `PoRegisterCoalescingCallback`  
		- `PsRegisterPicoProvider`  
		- `KeRegisterNmiCallback`  
		- `PsRegisterSiloMonitor`  
		- `EmProviderRegister`  

- **Windows 对象管理器私有命名空间查看器**<sup>1</sup>  
	- 命名空间条目信息  
	- 边界描述符详情  
	- 通用对象属性  

- **KiServiceTable 查看器**<sup>1</sup>  
	- 转储由 `ntoskrnl` 管理的 `KiServiceTable` (SSDT)  
	- 跳转至服务入口模块  
	- 导出为 CSV 文件  

- **W32pServiceTable 查看器**<sup>1</sup>  
	- 转储由 `win32k*.sys` 管理的 `W32pServiceTable`（影子 SSDT）  
	- Win32k 导入转发支持  
	- Win32k API 集解析  
	- 跳转至服务入口模块  
	- 导出为 CSV 文件  

- **CmControlVector 查看器**  
	- 转储 `ntoskrnl` 中的 `CmControlVector` 数组  
	- 将内核内存数据导出到文件<sup>1</sup>  
	- 导出为 CSV 文件  

- **剪贴板集成**: 将对象地址/名称复制到剪贴板  

- **Wine/Wine-Staging 支持**<sup>3</sup>  

- **扩展子系统**  
	- **内置扩展**:  
		- **API 集查看器**: Windows API 集架构（`ApiSetSchema.dll`）查看器（支持从文件加载架构）  
		- **示例扩展**: 开发者模板扩展  
		- **Sonar**: NDIS 协议查看器（导出协议详情）  
		- **ImageScope**: 增强的“节”类型对象详细信息（通过上下文菜单）  

- **文档**  
	- Windows 回调  
	- 扩展子系统  

1. 需要驱动程序支持（请参阅“驱动程序支持”部分）。  
2. 可能需要管理员权限。  
3. Wine/Wine-Staging 不支持 Windows 内部功能。  
4. 某些命名管道需要管理员权限。  

### 驱动程序支持

WinObjEx64 支持两种类型的辅助驱动程序：  

1. **用于对内核内存进行只读访问的辅助驱动程序**:  
   - 默认版本使用来自 WinDbg 的 **内核本地调试驱动程序 (KLDBGDRV)**。  
   - 要求:  
     - Windows 以调试模式启动（`bcdedit -debug on`）  
     - 以管理员权限运行 WinObjEx64  
   - **自定义辅助驱动程序版本** **不需要** Windows 调试模式。  
   - 虽然可以使用多个第三方驱动程序作为辅助驱动程序，但默认情况下只包含 **WinDbg 类型**驱动程序。  

2. **用于访问对象句柄的辅助驱动程序**:  
   - WinObjEx64（任何变体）**支持** Process Explorer 驱动程序 v1.5.2，用于打开进程/线程。  
   - 启用方法是：以管理员权限运行 Process Explorer 和 WinObjEx64。  

**备注**: 所有辅助驱动程序都需要 WinObjEx64 以管理员权限运行。  

</details>

# 构建 

WinObjEx64 附带完整的源代码。要从源代码构建，您需要 Microsoft Visual Studio 2015 或更高版本。

## 说明

* 首先在要构建的解决方案中为项目选择平台工具集（项目->属性->常规）：
  * v140 对应于 Visual Studio 2015; 
  * v141 对应于 Visual Studio 2017;
  * v142 对应于 Visual Studio 2019;
  * v143 对应于 Visual Studio 2022.
* 对于 v140 及以上版本，请设置目标平台版本（项目->属性->常规）：
  * 如果是 v140，选择 8.1;
  * 如果是 v141 及以上，选择 10;
* 最低要求的 Windows SDK 版本：8.1
* 推荐的 Windows SDK 版本：10.0.19041 及以上
 
 
# 更新说明

[v2.0.0 更新说明](https://github.com/hfiref0x/WinObjEx64/blob/master/Docs/WHATSNEW_200.md)

[完整变更日志](https://github.com/hfiref0x/WinObjEx64/blob/master/Source/CHANGELOG.txt)


# 支持本项目

请跳转至[原仓库 hfiref0x/WinObjEx64](https://github.com/hfiref0x/WinObjEx64?tab=readme-ov-file#support-our-work) 以查看相关信息。

# 作者

(c) 2015 – 2025 WinObjEx64 项目, hfiref0x

原项目 WinObjEx (c) 2003 – 2005 Four-F
