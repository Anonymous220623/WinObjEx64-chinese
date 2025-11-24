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
  <summary>单击此处展开功能列表</summary>

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
	- Boot state and type  
	- Code Integrity options  
	- Mitigation flags  
	- Windows version and build  

- **Loaded drivers list viewer**  
	- Dump selected driver<sup>1</sup>  
	- Export driver list to CSV file  
	- Jump to driver file location  
	- Detect Kernel Shim Engine "shimmed" drivers<sup>1</sup>  
	- View driver file properties  

- **Mailslots/Named pipes viewer**  
	- List all registered mailslots/named pipes  
	- Edit named pipes security information<sup>4</sup>  
	- Object statistics  

- **Hierarchical process tree viewer**<sup>2</sup>  
	- Show process ID, user name, `EPROCESS` addresses  
	- Highlight processes by type (similar to Process Explorer)  
	- Show thread list for selected process  
	- Show `ETHREAD` addresses  
	- **Common properties for Process/Thread objects**:  
		- Basic properties (as other object types)  
		- Start time  
		- Process type  
		- Image file name  
		- Command line  
		- Current directory  
		- Applied mitigations  
		- Protection  
		- "Critical Process" flag state  
		- Security edit  
	- Jump to process file location  
	- **Process/Thread token information**:  
		- User name  
		- User SID  
		- AppContainer SID  
		- Session  
		- UIAccess  
		- Elevation state  
		- Integrity level  
		- Privileges and groups  
	- **Additional token properties**:  
		- Basic properties (as other object types)  
		- Security attributes list  
		- Security edit  

- **Software Licensing Cache viewer**  
	- List registered licenses  
	- Display license data  
	- Dump `SL_DATA_BINARY` license data to file  

- **User Shared Data viewer**  
	- Structured dump of key `KUSER_SHARED_DATA` sections  

- **System callbacks viewer**<sup>1</sup>  
	- Display callback addresses, modules, and details for:  
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

- **Windows Object Manager private namespace viewer**<sup>1</sup>  
	- Namespace entry information  
	- Boundary descriptor details  
	- Common object properties  

- **KiServiceTable viewer**<sup>1</sup>  
	- Dump `Ntoskrnl`-managed `KiServiceTable` (SSDT)  
	- Jump to service entry module  
	- Export to CSV file  

- **W32pServiceTable viewer**<sup>1</sup>  
	- Dump `Win32k`-managed `W32pServiceTable` (Shadow SSDT)  
	- Win32k import forwarding support  
	- Win32k ApiSets resolving  
	- Jump to service entry module  
	- Export to CSV file  

- **CmControlVector viewer**  
	- Dump `Ntoskrnl` `CmControlVector` array  
	- Export kernel memory data to file<sup>1</sup>  
	- Export to CSV file  

- **Clipboard integration**: Copy object addresses/names to clipboard  

- **Wine/Wine-Staging support**<sup>3</sup>  

- **Plugins subsystem**  
	- **Included plugins**:  
		- **ApiSetView**: Windows ApiSetSchema viewer (supports loading schema from file)  
		- **Example plugin**: Developer template  
		- **Sonar**: NDIS protocols viewer (dumps protocol details)  
		- **ImageScope**: Enhanced `Section`-type object details (via context menu)  

- **Documentation**  
	- Windows Callbacks  
	- Plugins subsystem  

1. Requires driver support (see "Driver Support" section).  
2. Administrator privileges may be required.  
3. Windows internals features unavailable on Wine/Wine-Staging.  
4. Administrator privileges required for some named pipes.  

### Driver support

WinObjEx64 supports two types of driver helpers:  

1. **Helper for read-only access to kernel memory**:  
   - Default version uses the **Kernel Local Debugging Driver (KLDBGDRV)** from WinDbg.  
   - Requires:  
     - Windows booted in debug mode (`bcdedit -debug on`)  
     - WinObjEx64 running with administrator privileges  
   - **Custom helper driver versions** do **not** require Windows debug mode.  
   - Multiple third-party drivers can be used as helpers, though only the **WinDbg-type** driver is included by default.  

2. **Helper to access object handles**:  
   - WinObjEx64 (any variant) **supports** Process Explorer driver v1.5.2 for opening processes/threads.  
   - Enable by running **both** Process Explorer and WinObjEx64 with administrator privileges.  

**Note**: All driver helpers require WinObjEx64 to run with administrative privileges.  

</details>

# 构建 

WinObjEx64 comes with full source code. To build from source, you need Microsoft Visual Studio 2015 or later.

## Instructions

* Select Platform ToolSet first for the project in the solution you want to build (Project->Properties->General): 
  * v140 for Visual Studio 2015; 
  * v141 for Visual Studio 2017;
  * v142 for Visual Studio 2019;
  * v143 for Visual Studio 2022.
* For v140 and above, set Target Platform Version (Project->Properties->General):
  * If v140, select 8.1;
  * If v141 and above, select 10.
* Minimum required Windows SDK version: 8.1
* Recommended Windows SDK version: 10.0.19041 and above
 
 
# What is new

[Whats New in 2.0.0](https://github.com/hfiref0x/WinObjEx64/blob/master/Docs/WHATSNEW_200.md)

[Complete changelog](https://github.com/hfiref0x/WinObjEx64/blob/master/Source/CHANGELOG.txt)


# Support Our Work
If you enjoy using this software and would like to help the authors maintain and improve it, please consider supporting us with a donation. Your contribution fuels development, ensures updates, and keeps the project alive.

### Cryptocurrency Donations:

BTC (Bitcoin): bc1qzkvtpa0053cagf35dqmpvv9k8hyrwl7krwdz84q39mcpy68y6tmqsju0g4

This is purely optional, thank you!~

# Authors


(c) 2015 – 2025 WinObjEx64 Project, hfiref0x

Original WinObjEx (c) 2003 – 2005 Four-F
