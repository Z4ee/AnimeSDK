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

#define SYSTEM_DIAGNOSTICS_PROCESS_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AF45DA0)
#define SYSTEM_DIAGNOSTICS_PROCESS_COMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1AF45B80)
#define SYSTEM_DIAGNOSTICS_PROCESS_CREATEPIPE_OFFSET UNITYSDK_OFFSET(0x1AF48310)
#define SYSTEM_DIAGNOSTICS_PROCESS_CREATEPROCESS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1AF48250)
#define SYSTEM_DIAGNOSTICS_PROCESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF45D60)
#define SYSTEM_DIAGNOSTICS_PROCESS_ENSURESTATE_OFFSET UNITYSDK_OFFSET(0x1AF44E10)
#define SYSTEM_DIAGNOSTICS_PROCESS_ENSUREWATCHINGFOREXIT_OFFSET UNITYSDK_OFFSET(0x1AF45FD0)
#define SYSTEM_DIAGNOSTICS_PROCESS_FILLUSERINFO_OFFSET UNITYSDK_OFFSET(0x1AF48280)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETCURRENTPROCESS_OFFSET UNITYSDK_OFFSET(0x1AF463A0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_1_OFFSET UNITYSDK_OFFSET(0x1AF461C0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_OFFSET UNITYSDK_OFFSET(0x1AF461B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_1_OFFSET UNITYSDK_OFFSET(0x1AF46710)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x1AF44FB0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1AF481B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ASSOCIATED_OFFSET UNITYSDK_OFFSET(0x1AF44790)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1AF45620)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_HASEXITED_OFFSET UNITYSDK_OFFSET(0x1AF447B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ID_OFFSET UNITYSDK_OFFSET(0x1AF45740)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ISWINDOWS_OFFSET UNITYSDK_OFFSET(0x1AF48600)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PROCESSNAME_OFFSET UNITYSDK_OFFSET(0x1AF47E30)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_STARTINFO_OFFSET UNITYSDK_OFFSET(0x1AF45760)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x1AF458B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_ISLOCALMACHINE_OFFSET UNITYSDK_OFFSET(0x1AF481D0)
#define SYSTEM_DIAGNOSTICS_PROCESS_ONEXITED_OFFSET UNITYSDK_OFFSET(0x1AF46420)
#define SYSTEM_DIAGNOSTICS_PROCESS_OPENPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x1AF45690)
#define SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1AF480E0)
#define SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1AF480D0)
#define SYSTEM_DIAGNOSTICS_PROCESS_RAISEONEXITED_OFFSET UNITYSDK_OFFSET(0x1AF45550)
#define SYSTEM_DIAGNOSTICS_PROCESS_REFRESH_OFFSET UNITYSDK_OFFSET(0x1AF45FA0)
#define SYSTEM_DIAGNOSTICS_PROCESS_RELEASEPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x1AF45520)
#define SYSTEM_DIAGNOSTICS_PROCESS_SETPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x1AF46720)
#define SYSTEM_DIAGNOSTICS_PROCESS_SETPROCESSID_OFFSET UNITYSDK_OFFSET(0x1AF46740)
#define SYSTEM_DIAGNOSTICS_PROCESS_SET_STARTINFO_OFFSET UNITYSDK_OFFSET(0x1AF45840)
#define SYSTEM_DIAGNOSTICS_PROCESS_SHELLEXECUTEEX_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1AF48240)
#define SYSTEM_DIAGNOSTICS_PROCESS_STARTWITHCREATEPROCESS_OFFSET UNITYSDK_OFFSET(0x1AF46B00)
#define SYSTEM_DIAGNOSTICS_PROCESS_STARTWITHSHELLEXECUTEEX_OFFSET UNITYSDK_OFFSET(0x1AF468B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_1_OFFSET UNITYSDK_OFFSET(0x1AF47B30)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_2_OFFSET UNITYSDK_OFFSET(0x1AF47B90)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_OFFSET UNITYSDK_OFFSET(0x1AF46750)
#define SYSTEM_DIAGNOSTICS_PROCESS_STOPWATCHINGFOREXIT_OFFSET UNITYSDK_OFFSET(0x1AF45C60)
#define SYSTEM_DIAGNOSTICS_PROCESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AF47C60)
#define SYSTEM_DIAGNOSTICS_PROCESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF44730)
#define SYSTEM_DIAGNOSTICS_PROCESS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF48050)
#define SYSTEM_DIAGNOSTICS_PROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF446E0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Process_TypeDefinitionIndex = 2535;

	class Process : public ::System::ComponentModel::Component
	{
	public:
		::System::IO::StreamWriter* standardInput; // 0x28
		::System::ComponentModel::ISynchronizeInvoke* synchronizingObject; // 0x30
		::System::Diagnostics::AsyncStreamReader* error; // 0x38
		::System::Threading::WaitHandle* waitHandle; // 0x40
		::System::String* machineName; // 0x48
		::System::IO::StreamReader* standardOutput; // 0x50
		::System::Diagnostics::ProcessStartInfo* startInfo; // 0x58
		::System::Diagnostics::ProcessThreadCollection* threads; // 0x60
		::System::Threading::RegisteredWaitHandle* registeredWaitHandle; // 0x68
		::System::EventHandler* onExited; // 0x70
		::System::Diagnostics::ProcessModuleCollection* modules; // 0x78
		::System::Diagnostics::AsyncStreamReader* output; // 0x80
		::System::String* process_name; // 0x88
		::System::IO::StreamReader* standardError; // 0x90
		::Microsoft::Win32::SafeHandles::SafeProcessHandle* m_processHandle; // 0x98
		::System::Int32 exitCode; // 0xA0
		::System::Diagnostics::Process_StreamReadMode outputStreamReadMode; // 0xA4
		::System::Diagnostics::Process_StreamReadMode errorStreamReadMode; // 0xA8
		::System::Boolean haveExitTime; // 0xAC
		::System::Boolean havePriorityClass; // 0xAD
		::System::Boolean haveProcessId; // 0xAE
		::System::Boolean haveProcessHandle; // 0xAF
		::System::Boolean watchForExit; // 0xB0
		::System::Boolean exited; // 0xB1
		::System::Boolean disposed; // 0xB2
		::System::Boolean signaled; // 0xB3
		::System::Int32 processId; // 0xB4
		::System::Boolean watchingForExit; // 0xB8
		::System::Boolean raisedOnExited; // 0xB9
		::System::Boolean isRemoteMachine; // 0xBA
		::System::Boolean haveWorkingSetLimits; // 0xBB
		::System::Diagnostics::Process_StreamReadMode inputStreamReadMode; // 0xBC
		::System::Int32 m_processAccess; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::Diagnostics::ProcessInfo* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Diagnostics::ProcessInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS__CTOR_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_2(::Microsoft::Win32::SafeHandles::SafeProcessHandle* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS__CTOR_2_OFFSET))(this, a1, a2);
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

		::System::Void set_StartInfo(::System::Diagnostics::ProcessStartInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::ProcessStartInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SET_STARTINFO_OFFSET))(this, a1);
		}

		::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject()
		{
			return ((::System::ComponentModel::ISynchronizeInvoke*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_SYNCHRONIZINGOBJECT_OFFSET))(this);
		}

		::System::Void ReleaseProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_RELEASEPROCESSHANDLE_OFFSET))(this, a1);
		}

		::System::Void CompletionCallback(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_COMPLETIONCALLBACK_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_CLOSE_OFFSET))(this);
		}

		::System::Void EnsureState(::System::Diagnostics::Process_State a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Process_State))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ENSURESTATE_OFFSET))(this, a1);
		}

		::System::Void EnsureWatchingForExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ENSUREWATCHINGFOREXIT_OFFSET))(this);
		}

		static ::System::Diagnostics::Process* GetProcessById(::System::Int32 a1)
		{
			return ((::System::Diagnostics::Process*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_OFFSET))(a1);
		}

		static ::System::Diagnostics::Process* GetCurrentProcess()
		{
			return ((::System::Diagnostics::Process*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETCURRENTPROCESS_OFFSET))();
		}

		::System::Void OnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ONEXITED_OFFSET))(this);
		}

		::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::Microsoft::Win32::SafeHandles::SafeProcessHandle*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_OFFSET))(this, a1, a2);
		}

		::Microsoft::Win32::SafeHandles::SafeProcessHandle* GetProcessHandle_1(::System::Int32 a1)
		{
			return ((::Microsoft::Win32::SafeHandles::SafeProcessHandle*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_1_OFFSET))(this, a1);
		}

		::Microsoft::Win32::SafeHandles::SafeProcessHandle* OpenProcessHandle(::System::Int32 a1)
		{
			return ((::Microsoft::Win32::SafeHandles::SafeProcessHandle*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_OPENPROCESSHANDLE_OFFSET))(this, a1);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_REFRESH_OFFSET))(this);
		}

		::System::Void SetProcessHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SETPROCESSHANDLE_OFFSET))(this, a1);
		}

		::System::Void SetProcessId(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SETPROCESSID_OFFSET))(this, a1);
		}

		::System::Boolean Start()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_OFFSET))(this);
		}

		static ::System::Diagnostics::Process* Start_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Diagnostics::Process*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_1_OFFSET))(a1, a2);
		}

		static ::System::Diagnostics::Process* Start_2(::System::Diagnostics::ProcessStartInfo* a1)
		{
			return ((::System::Diagnostics::Process*(*)(::System::Diagnostics::ProcessStartInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_2_OFFSET))(a1);
		}

		::System::Void StopWatchingForExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_STOPWATCHINGFOREXIT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_TOSTRING_OFFSET))(this);
		}

		static ::System::String* ProcessName_internal(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_OFFSET))(a1);
		}

		static ::System::String* ProcessName_internal_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* a1)
		{
			return ((::System::String*(*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_1_OFFSET))(a1);
		}

		::System::String* get_ProcessName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PROCESSNAME_OFFSET))(this);
		}

		static ::System::IntPtr GetProcess_internal(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESS_INTERNAL_OFFSET))(a1);
		}

		static ::System::Diagnostics::Process* GetProcessById_1(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Diagnostics::Process*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsLocalMachine(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ISLOCALMACHINE_OFFSET))(a1);
		}

		static ::System::Boolean ShellExecuteEx_internal(::System::Diagnostics::ProcessStartInfo* a1, ::System::Diagnostics::Process_ProcInfo& a2)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::ProcessStartInfo*, ::System::Diagnostics::Process_ProcInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SHELLEXECUTEEX_INTERNAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean CreateProcess_internal(::System::Diagnostics::ProcessStartInfo* a1, ::System::IntPtr a2, ::System::IntPtr a3, ::System::IntPtr a4, ::System::Diagnostics::Process_ProcInfo& a5)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::ProcessStartInfo*, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::Diagnostics::Process_ProcInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_CREATEPROCESS_INTERNAL_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Boolean StartWithShellExecuteEx(::System::Diagnostics::ProcessStartInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::ProcessStartInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_STARTWITHSHELLEXECUTEEX_OFFSET))(this, a1);
		}

		static ::System::Void CreatePipe(::System::IntPtr& a1, ::System::IntPtr& a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::System::IntPtr&, ::System::IntPtr&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_CREATEPIPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean get_IsWindows()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_ISWINDOWS_OFFSET))();
		}

		::System::Boolean StartWithCreateProcess(::System::Diagnostics::ProcessStartInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::ProcessStartInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_STARTWITHCREATEPROCESS_OFFSET))(this, a1);
		}

		static ::System::Void FillUserInfo(::System::Diagnostics::ProcessStartInfo* a1, ::System::Diagnostics::Process_ProcInfo& a2)
		{
			return ((::System::Void(*)(::System::Diagnostics::ProcessStartInfo*, ::System::Diagnostics::Process_ProcInfo&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_FILLUSERINFO_OFFSET))(a1, a2);
		}

		::System::Void RaiseOnExited()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_RAISEONEXITED_OFFSET))(this);
		}
	};
}
