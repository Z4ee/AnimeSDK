#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"
#include "unitysdk/System/Diagnostics/Process_ProcInfo.h"
#include "unitysdk/System/Diagnostics/Process_State.h"
#include "unitysdk/System/Diagnostics/Process_StreamReadMode.h"

namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle; }
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class String; }
namespace System::ComponentModel { class ISynchronizeInvoke; }
namespace System::Diagnostics { class AsyncStreamReader; }
namespace System::Diagnostics { class ProcessInfo; }
namespace System::Diagnostics { class ProcessModuleCollection; }
namespace System::Diagnostics { class ProcessStartInfo; }
namespace System::Diagnostics { class ProcessThreadCollection; }
namespace System::IO { class StreamReader; }
namespace System::IO { class StreamWriter; }
namespace System::Threading { class RegisteredWaitHandle; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_DIAGNOSTICS_PROCESS_CLOSE_OFFSET UNITYSDK_OFFSET(0x186A3480)
#define SYSTEM_DIAGNOSTICS_PROCESS_COMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x186A3260)
#define SYSTEM_DIAGNOSTICS_PROCESS_CREATEPIPE_OFFSET UNITYSDK_OFFSET(0x186A5910)
#define SYSTEM_DIAGNOSTICS_PROCESS_CREATEPROCESS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x186A5850)
#define SYSTEM_DIAGNOSTICS_PROCESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186A3440)
#define SYSTEM_DIAGNOSTICS_PROCESS_ENSURESTATE_OFFSET UNITYSDK_OFFSET(0x186A2510)
#define SYSTEM_DIAGNOSTICS_PROCESS_ENSUREWATCHINGFOREXIT_OFFSET UNITYSDK_OFFSET(0x186A3690)
#define SYSTEM_DIAGNOSTICS_PROCESS_FILLUSERINFO_OFFSET UNITYSDK_OFFSET(0x186A5880)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETCURRENTPROCESS_OFFSET UNITYSDK_OFFSET(0x186A3A50)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_1_OFFSET UNITYSDK_OFFSET(0x186A3870)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_OFFSET UNITYSDK_OFFSET(0x186A3860)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_1_OFFSET UNITYSDK_OFFSET(0x186A3E00)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x186A26B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x186A57B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ASSOCIATED_OFFSET UNITYSDK_OFFSET(0x186A1EA0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x186A2CF0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_HASEXITED_OFFSET UNITYSDK_OFFSET(0x186A1EC0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ID_OFFSET UNITYSDK_OFFSET(0x186A2E10)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ISWINDOWS_OFFSET UNITYSDK_OFFSET(0x186A5C00)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PROCESSNAME_OFFSET UNITYSDK_OFFSET(0x186A5440)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_STARTINFO_OFFSET UNITYSDK_OFFSET(0x186A2E30)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x186A2F80)
#define SYSTEM_DIAGNOSTICS_PROCESS_ISLOCALMACHINE_OFFSET UNITYSDK_OFFSET(0x186A57D0)
#define SYSTEM_DIAGNOSTICS_PROCESS_ONEXITED_OFFSET UNITYSDK_OFFSET(0x186A3AD0)
#define SYSTEM_DIAGNOSTICS_PROCESS_OPENPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x186A2D60)
#define SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x186A56E0)
#define SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_OFFSET UNITYSDK_OFFSET(0x186A56D0)
#define SYSTEM_DIAGNOSTICS_PROCESS_RAISEONEXITED_OFFSET UNITYSDK_OFFSET(0x186A2C20)
#define SYSTEM_DIAGNOSTICS_PROCESS_REFRESH_OFFSET UNITYSDK_OFFSET(0x186A3650)
#define SYSTEM_DIAGNOSTICS_PROCESS_RELEASEPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x186A2BF0)
#define SYSTEM_DIAGNOSTICS_PROCESS_SETPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x186A3E10)
#define SYSTEM_DIAGNOSTICS_PROCESS_SETPROCESSID_OFFSET UNITYSDK_OFFSET(0x186A3E30)
#define SYSTEM_DIAGNOSTICS_PROCESS_SET_STARTINFO_OFFSET UNITYSDK_OFFSET(0x186A2F10)
#define SYSTEM_DIAGNOSTICS_PROCESS_SHELLEXECUTEEX_INTERNAL_OFFSET UNITYSDK_OFFSET(0x186A5840)
#define SYSTEM_DIAGNOSTICS_PROCESS_STARTWITHCREATEPROCESS_OFFSET UNITYSDK_OFFSET(0x186A41F0)
#define SYSTEM_DIAGNOSTICS_PROCESS_STARTWITHSHELLEXECUTEEX_OFFSET UNITYSDK_OFFSET(0x186A3FA0)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_1_OFFSET UNITYSDK_OFFSET(0x186A5140)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_2_OFFSET UNITYSDK_OFFSET(0x186A51A0)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_OFFSET UNITYSDK_OFFSET(0x186A3E40)
#define SYSTEM_DIAGNOSTICS_PROCESS_STOPWATCHINGFOREXIT_OFFSET UNITYSDK_OFFSET(0x186A3340)
#define SYSTEM_DIAGNOSTICS_PROCESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x186A5270)
#define SYSTEM_DIAGNOSTICS_PROCESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186A1E40)
#define SYSTEM_DIAGNOSTICS_PROCESS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x186A5650)
#define SYSTEM_DIAGNOSTICS_PROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x186A1DF0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Process_TypeDefinitionIndex = 2534;

	class Process : public ::System::ComponentModel::Component
	{
	public:
		::System::IO::StreamReader* standardOutput; // 0x28
		::System::Diagnostics::AsyncStreamReader* error; // 0x30
		::System::IO::StreamWriter* standardInput; // 0x38
		::System::Threading::WaitHandle* waitHandle; // 0x40
		::System::String* machineName; // 0x48
		::System::Diagnostics::AsyncStreamReader* output; // 0x50
		::System::EventHandler* onExited; // 0x58
		::System::Diagnostics::ProcessStartInfo* startInfo; // 0x60
		::System::Threading::RegisteredWaitHandle* registeredWaitHandle; // 0x68
		::System::IO::StreamReader* standardError; // 0x70
		::System::String* process_name; // 0x78
		::Microsoft::Win32::SafeHandles::SafeProcessHandle* m_processHandle; // 0x80
		::System::Diagnostics::ProcessModuleCollection* modules; // 0x88
		::System::ComponentModel::ISynchronizeInvoke* synchronizingObject; // 0x90
		::System::Diagnostics::ProcessThreadCollection* threads; // 0x98
		::System::Int32 exitCode; // 0xA0
		::System::Diagnostics::Process_StreamReadMode errorStreamReadMode; // 0xA4
		::System::Diagnostics::Process_StreamReadMode outputStreamReadMode; // 0xA8
		::System::Int32 processId; // 0xAC
		::System::Diagnostics::Process_StreamReadMode inputStreamReadMode; // 0xB0
		::System::Boolean haveProcessId; // 0xB4
		::System::Boolean raisedOnExited; // 0xB5
		::System::Boolean exited; // 0xB6
		::System::Boolean disposed; // 0xB7
		::System::Boolean havePriorityClass; // 0xB8
		::System::Boolean haveProcessHandle; // 0xB9
		::System::Boolean haveExitTime; // 0xBA
		::System::Boolean isRemoteMachine; // 0xBB
		::System::Int32 m_processAccess; // 0xBC
		::System::Boolean signaled; // 0xC0
		::System::Boolean watchForExit; // 0xC1
		::System::Boolean haveWorkingSetLimits; // 0xC2
		::System::Boolean watchingForExit; // 0xC3

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* machineName, ::System::Boolean isRemoteMachine, ::System::Int32 processId, ::System::Diagnostics::ProcessInfo* processInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Diagnostics::ProcessInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS__CTOR_1_OFFSET))(this, machineName, isRemoteMachine, processId, processInfo);
		}

		::System::Void _ctor_2(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, ::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS__CTOR_2_OFFSET))(this, handle, id);
		}

		::System::Boolean get_Associated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_ASSOCIATED_OFFSET))(this);
		}

		::System::Boolean get_HasExited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_HASEXITED_OFFSET))(this);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_HANDLE_OFFSET))(this);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_ID_OFFSET))(this);
		}

		::System::Diagnostics::ProcessStartInfo* get_StartInfo()
		{
			return ((::System::Diagnostics::ProcessStartInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_STARTINFO_OFFSET))(this);
		}

		::System::Void set_StartInfo(::System::Diagnostics::ProcessStartInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::ProcessStartInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SET_STARTINFO_OFFSET))(this, value);
		}

		::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject()
		{
			return ((::System::ComponentModel::ISynchronizeInvoke*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_SYNCHRONIZINGOBJECT_OFFSET))(this);
		}

		::System::Void ReleaseProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_RELEASEPROCESSHANDLE_OFFSET))(this, handle);
		}

		::System::Void CompletionCallback(::System::Object* context, ::System::Boolean wasSignaled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_COMPLETIONCALLBACK_OFFSET))(this, context, wasSignaled);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_CLOSE_OFFSET))(this);
		}

		::System::Void EnsureState(::System::Diagnostics::Process_State state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Process_State))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ENSURESTATE_OFFSET))(this, state);
		}

		::System::Void EnsureWatchingForExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ENSUREWATCHINGFOREXIT_OFFSET))(this);
		}

		static ::System::Diagnostics::Process* GetProcessById(::System::Int32 processId)
		{
			return ((::System::Diagnostics::Process*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_OFFSET))(processId);
		}

		static ::System::Diagnostics::Process* GetCurrentProcess()
		{
			return ((::System::Diagnostics::Process*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETCURRENTPROCESS_OFFSET))();
		}

		::System::Void OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ONEXITED_OFFSET))(this);
		}

		::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(::System::Int32 access, ::System::Boolean throwIfExited)
		{
			return ((::Microsoft::Win32::SafeHandles::SafeProcessHandle*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_OFFSET))(this, access, throwIfExited);
		}

		::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle_1(::System::Int32 access)
		{
			return ((::Microsoft::Win32::SafeHandles::SafeProcessHandle*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_1_OFFSET))(this, access);
		}

		::Microsoft::Win32::SafeHandles::SafeProcessHandle* OpenProcessHandle(::System::Int32 access)
		{
			return ((::Microsoft::Win32::SafeHandles::SafeProcessHandle*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_OPENPROCESSHANDLE_OFFSET))(this, access);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_REFRESH_OFFSET))(this);
		}

		::System::Void SetProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SETPROCESSHANDLE_OFFSET))(this, processHandle);
		}

		::System::Void SetProcessId(::System::Int32 processId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SETPROCESSID_OFFSET))(this, processId);
		}

		::System::Boolean Start()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_OFFSET))(this);
		}

		static ::System::Diagnostics::Process* Start_1(::System::String* fileName, ::System::String* arguments)
		{
			return ((::System::Diagnostics::Process*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_1_OFFSET))(fileName, arguments);
		}

		static ::System::Diagnostics::Process* Start_2(::System::Diagnostics::ProcessStartInfo* startInfo)
		{
			return ((::System::Diagnostics::Process*(*)(::System::Diagnostics::ProcessStartInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_2_OFFSET))(startInfo);
		}

		::System::Void StopWatchingForExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_STOPWATCHINGFOREXIT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_TOSTRING_OFFSET))(this);
		}

		static ::System::String* ProcessName_internal(::System::IntPtr handle)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_OFFSET))(handle);
		}

		static ::System::String* ProcessName_internal_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle)
		{
			return ((::System::String*(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_1_OFFSET))(handle);
		}

		::System::String* get_ProcessName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PROCESSNAME_OFFSET))(this);
		}

		static ::System::IntPtr GetProcess_internal(::System::Int32 pid)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESS_INTERNAL_OFFSET))(pid);
		}

		static ::System::Diagnostics::Process* GetProcessById_1(::System::Int32 processId, ::System::String* machineName)
		{
			return ((::System::Diagnostics::Process*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_1_OFFSET))(processId, machineName);
		}

		static ::System::Boolean IsLocalMachine(::System::String* machineName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ISLOCALMACHINE_OFFSET))(machineName);
		}

		static ::System::Boolean ShellExecuteEx_internal(::System::Diagnostics::ProcessStartInfo* startInfo, ::System::Diagnostics::Process_ProcInfo& procInfo)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::ProcessStartInfo*, ::System::Diagnostics::Process_ProcInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SHELLEXECUTEEX_INTERNAL_OFFSET))(startInfo, procInfo);
		}

		static ::System::Boolean CreateProcess_internal(::System::Diagnostics::ProcessStartInfo* startInfo, ::System::IntPtr stdin, ::System::IntPtr stdout, ::System::IntPtr stderr, ::System::Diagnostics::Process_ProcInfo& procInfo)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::ProcessStartInfo*, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::Diagnostics::Process_ProcInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_CREATEPROCESS_INTERNAL_OFFSET))(startInfo, stdin, stdout, stderr, procInfo);
		}

		::System::Boolean StartWithShellExecuteEx(::System::Diagnostics::ProcessStartInfo* startInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::ProcessStartInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_STARTWITHSHELLEXECUTEEX_OFFSET))(this, startInfo);
		}

		static ::System::Void CreatePipe(::System::IntPtr& read, ::System::IntPtr& write, ::System::Boolean writeDirection)
		{
			return ((::System::Void(*)(::System::IntPtr&, ::System::IntPtr&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_CREATEPIPE_OFFSET))(read, write, writeDirection);
		}

		static ::System::Boolean get_IsWindows()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_ISWINDOWS_OFFSET))();
		}

		::System::Boolean StartWithCreateProcess(::System::Diagnostics::ProcessStartInfo* startInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::ProcessStartInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_STARTWITHCREATEPROCESS_OFFSET))(this, startInfo);
		}

		static ::System::Void FillUserInfo(::System::Diagnostics::ProcessStartInfo* startInfo, ::System::Diagnostics::Process_ProcInfo& procInfo)
		{
			return ((::System::Void(*)(::System::Diagnostics::ProcessStartInfo*, ::System::Diagnostics::Process_ProcInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_FILLUSERINFO_OFFSET))(startInfo, procInfo);
		}

		::System::Void RaiseOnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_RAISEONEXITED_OFFSET))(this);
		}
	};
}
