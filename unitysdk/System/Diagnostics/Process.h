#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/Component.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Diagnostics/ProcessPriorityClass.h"
#include "unitysdk/System/Diagnostics/Process_ProcInfo.h"
#include "unitysdk/System/Diagnostics/Process_State.h"
#include "unitysdk/System/Diagnostics/Process_StreamReadMode.h"
#include "unitysdk/System/TimeSpan.h"

namespace Microsoft::Win32::SafeHandles { class SafeProcessHandle; }
namespace System { class EventHandler; }
namespace System { class Object; }
namespace System { class OperatingSystem; }
namespace System { class String; }
namespace System::ComponentModel { class ISynchronizeInvoke; }
namespace System::Diagnostics { class AsyncStreamReader; }
namespace System::Diagnostics { class DataReceivedEventHandler; }
namespace System::Diagnostics { class ProcessInfo; }
namespace System::Diagnostics { class ProcessModule; }
namespace System::Diagnostics { class ProcessModuleCollection; }
namespace System::Diagnostics { class ProcessStartInfo; }
namespace System::Diagnostics { class ProcessThreadCollection; }
namespace System::Diagnostics { class ProcessThreadTimes; }
namespace System::Diagnostics { class TraceSwitch; }
namespace System::IO { class StreamReader; }
namespace System::IO { class StreamWriter; }
namespace System::Security { class SecureString; }
namespace System::Threading { class RegisteredWaitHandle; }
namespace System::Threading { class WaitHandle; }

#define SYSTEM_DIAGNOSTICS_PROCESS_ADD_ERRORDATARECEIVED_OFFSET UNITYSDK_OFFSET(0x1C6C81B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_ADD_EXITED_OFFSET UNITYSDK_OFFSET(0x1C6CAC50)
#define SYSTEM_DIAGNOSTICS_PROCESS_ADD_OUTPUTDATARECEIVED_OFFSET UNITYSDK_OFFSET(0x1C6C80B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_BEGINERRORREADLINE_OFFSET UNITYSDK_OFFSET(0x1C6CE180)
#define SYSTEM_DIAGNOSTICS_PROCESS_BEGINOUTPUTREADLINE_OFFSET UNITYSDK_OFFSET(0x1C6CDFC0)
#define SYSTEM_DIAGNOSTICS_PROCESS_CANCELERRORREAD_OFFSET UNITYSDK_OFFSET(0x1C6CE3C0)
#define SYSTEM_DIAGNOSTICS_PROCESS_CANCELOUTPUTREAD_OFFSET UNITYSDK_OFFSET(0x1C6CE340)
#define SYSTEM_DIAGNOSTICS_PROCESS_CLOSEMAINWINDOW_OFFSET UNITYSDK_OFFSET(0x1C6CF390)
#define SYSTEM_DIAGNOSTICS_PROCESS_CLOSE_OFFSET UNITYSDK_OFFSET(0x1C6CAE30)
#define SYSTEM_DIAGNOSTICS_PROCESS_COMPLETIONCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C6CAD30)
#define SYSTEM_DIAGNOSTICS_PROCESS_CREATEPIPE_OFFSET UNITYSDK_OFFSET(0x1C6CF6A0)
#define SYSTEM_DIAGNOSTICS_PROCESS_CREATEPROCESS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6CF600)
#define SYSTEM_DIAGNOSTICS_PROCESS_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C6CADF0)
#define SYSTEM_DIAGNOSTICS_PROCESS_ENSURESTATE_OFFSET UNITYSDK_OFFSET(0x1C6C8420)
#define SYSTEM_DIAGNOSTICS_PROCESS_ENSUREWATCHINGFOREXIT_OFFSET UNITYSDK_OFFSET(0x1C6CA7B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_ENSUREWORKINGSETLIMITS_OFFSET UNITYSDK_OFFSET(0x1C6C9820)
#define SYSTEM_DIAGNOSTICS_PROCESS_ENTERDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x1C6CB070)
#define SYSTEM_DIAGNOSTICS_PROCESS_ERRORREADNOTIFYUSER_OFFSET UNITYSDK_OFFSET(0x1C6CE780)
#define SYSTEM_DIAGNOSTICS_PROCESS_FILLUSERINFO_OFFSET UNITYSDK_OFFSET(0x1C6CF610)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETCURRENTPROCESS_OFFSET UNITYSDK_OFFSET(0x1C6CB9F0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETMODULES_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1C6CEF30)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETMODULES_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6CEF20)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_1_OFFSET UNITYSDK_OFFSET(0x1C6CB0D0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_OFFSET UNITYSDK_OFFSET(0x1C6CB090)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSDATA_OFFSET UNITYSDK_OFFSET(0x1C6CEFE0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSESBYNAME_1_OFFSET UNITYSDK_OFFSET(0x1C6CB3C0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSESBYNAME_OFFSET UNITYSDK_OFFSET(0x1C6CB380)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSES_1_OFFSET UNITYSDK_OFFSET(0x1C6CB890)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSES_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6CF5E0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSES_OFFSET UNITYSDK_OFFSET(0x1C6CB850)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_1_OFFSET UNITYSDK_OFFSET(0x1C6C9EF0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x1C6C8C20)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSTIMES_OFFSET UNITYSDK_OFFSET(0x1C6C9120)
#define SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6CF4E0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ASSOCIATED_OFFSET UNITYSDK_OFFSET(0x1C6C83C0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_BASEPRIORITY_OFFSET UNITYSDK_OFFSET(0x1C6CEB60)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ENABLERAISINGEVENTS_OFFSET UNITYSDK_OFFSET(0x1C6CA730)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_EXITCODE_OFFSET UNITYSDK_OFFSET(0x1C6C83E0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_EXITTIME_OFFSET UNITYSDK_OFFSET(0x1C6C9500)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_HANDLECOUNT_OFFSET UNITYSDK_OFFSET(0x1C6CEB70)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1C6C9560)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_HASEXITED_OFFSET UNITYSDK_OFFSET(0x1C6C8600)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C6C9760)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_ISWINDOWS_OFFSET UNITYSDK_OFFSET(0x1C6CF9B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1C6C9780)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_MAINMODULE_OFFSET UNITYSDK_OFFSET(0x1C6CEB80)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_MAINWINDOWHANDLE_OFFSET UNITYSDK_OFFSET(0x1C6CEED0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_MAINWINDOWTITLE_OFFSET UNITYSDK_OFFSET(0x1C6CEEE0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_MAXWORKINGSET_OFFSET UNITYSDK_OFFSET(0x1C6C9800)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_MINWORKINGSET_OFFSET UNITYSDK_OFFSET(0x1C6C9C10)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_MODULES_OFFSET UNITYSDK_OFFSET(0x1C6CEC00)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_NONPAGEDSYSTEMMEMORYSIZE64_OFFSET UNITYSDK_OFFSET(0x1C6CF060)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_NONPAGEDSYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1C6CEFF0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_OPERATINGSYSTEM_OFFSET UNITYSDK_OFFSET(0x1C6C9C70)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PAGEDMEMORYSIZE64_OFFSET UNITYSDK_OFFSET(0x1C6CF010)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PAGEDMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1C6CF000)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PAGEDSYSTEMMEMORYSIZE64_OFFSET UNITYSDK_OFFSET(0x1C6CF070)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PAGEDSYSTEMMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1C6CF020)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKPAGEDMEMORYSIZE64_OFFSET UNITYSDK_OFFSET(0x1C6CF080)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKPAGEDMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1C6CF030)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKVIRTUALMEMORYSIZE64_OFFSET UNITYSDK_OFFSET(0x1C6CF090)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKVIRTUALMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1C6CF040)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKWORKINGSET64_OFFSET UNITYSDK_OFFSET(0x1C6CF0A0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKWORKINGSET_OFFSET UNITYSDK_OFFSET(0x1C6CF050)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PRIORITYBOOSTENABLED_OFFSET UNITYSDK_OFFSET(0x1C6CF0B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PRIORITYCLASS_OFFSET UNITYSDK_OFFSET(0x1C6C9D20)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PRIVATEMEMORYSIZE64_OFFSET UNITYSDK_OFFSET(0x1C6CF360)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PRIVATEMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1C6CF0D0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PRIVILEGEDPROCESSORTIME_OFFSET UNITYSDK_OFFSET(0x1C6CA190)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PROCESSNAME_OFFSET UNITYSDK_OFFSET(0x1C6CD7C0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_PROCESSORAFFINITY_OFFSET UNITYSDK_OFFSET(0x1C6CF1D0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_RESPONDING_OFFSET UNITYSDK_OFFSET(0x1C6CF1F0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_SAFEHANDLE_OFFSET UNITYSDK_OFFSET(0x1C6C96D0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_SESSIONID_OFFSET UNITYSDK_OFFSET(0x1C6CF0E0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_STANDARDERROR_OFFSET UNITYSDK_OFFSET(0x1C6CAB90)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_STANDARDINPUT_OFFSET UNITYSDK_OFFSET(0x1C6CAA50)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_STANDARDOUTPUT_OFFSET UNITYSDK_OFFSET(0x1C6CAAD0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_STARTINFO_OFFSET UNITYSDK_OFFSET(0x1C6CA1E0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_STARTTIME_OFFSET UNITYSDK_OFFSET(0x1C6CA300)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x1C6CA350)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_THREADS_OFFSET UNITYSDK_OFFSET(0x1C6CF200)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_TOTALPROCESSORTIME_OFFSET UNITYSDK_OFFSET(0x1C6CA680)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_USERPROCESSORTIME_OFFSET UNITYSDK_OFFSET(0x1C6CA6E0)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_VIRTUALMEMORYSIZE64_OFFSET UNITYSDK_OFFSET(0x1C6CF370)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_VIRTUALMEMORYSIZE_OFFSET UNITYSDK_OFFSET(0x1C6CF340)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_WORKINGSET64_OFFSET UNITYSDK_OFFSET(0x1C6CF380)
#define SYSTEM_DIAGNOSTICS_PROCESS_GET_WORKINGSET_OFFSET UNITYSDK_OFFSET(0x1C6CF350)
#define SYSTEM_DIAGNOSTICS_PROCESS_ISLOCALMACHINE_OFFSET UNITYSDK_OFFSET(0x1C6CF500)
#define SYSTEM_DIAGNOSTICS_PROCESS_KILL_OFFSET UNITYSDK_OFFSET(0x1C6CD4C0)
#define SYSTEM_DIAGNOSTICS_PROCESS_LEAVEDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x1C6CB080)
#define SYSTEM_DIAGNOSTICS_PROCESS_ONEXITED_OFFSET UNITYSDK_OFFSET(0x1C6CBAC0)
#define SYSTEM_DIAGNOSTICS_PROCESS_OPENPROCESSHANDLE_1_OFFSET UNITYSDK_OFFSET(0x1C6C9600)
#define SYSTEM_DIAGNOSTICS_PROCESS_OPENPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x1C6CA7A0)
#define SYSTEM_DIAGNOSTICS_PROCESS_OUTPUTREADNOTIFYUSER_OFFSET UNITYSDK_OFFSET(0x1C6CE440)
#define SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_1_OFFSET UNITYSDK_OFFSET(0x1C6CF100)
#define SYSTEM_DIAGNOSTICS_PROCESS_PROCESSNAME_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6CF0F0)
#define SYSTEM_DIAGNOSTICS_PROCESS_RAISEONEXITED_OFFSET UNITYSDK_OFFSET(0x1C6C9070)
#define SYSTEM_DIAGNOSTICS_PROCESS_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C6CB030)
#define SYSTEM_DIAGNOSTICS_PROCESS_RELEASEPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x1C6C9040)
#define SYSTEM_DIAGNOSTICS_PROCESS_REMOVE_ERRORDATARECEIVED_OFFSET UNITYSDK_OFFSET(0x1C6C8230)
#define SYSTEM_DIAGNOSTICS_PROCESS_REMOVE_EXITED_OFFSET UNITYSDK_OFFSET(0x1C6CACC0)
#define SYSTEM_DIAGNOSTICS_PROCESS_REMOVE_OUTPUTDATARECEIVED_OFFSET UNITYSDK_OFFSET(0x1C6C8130)
#define SYSTEM_DIAGNOSTICS_PROCESS_SETPROCESSHANDLE_OFFSET UNITYSDK_OFFSET(0x1C6CBDF0)
#define SYSTEM_DIAGNOSTICS_PROCESS_SETPROCESSID_OFFSET UNITYSDK_OFFSET(0x1C6CBE10)
#define SYSTEM_DIAGNOSTICS_PROCESS_SETWORKINGSETLIMITS_OFFSET UNITYSDK_OFFSET(0x1C6C9A50)
#define SYSTEM_DIAGNOSTICS_PROCESS_SET_ENABLERAISINGEVENTS_OFFSET UNITYSDK_OFFSET(0x1C6CA740)
#define SYSTEM_DIAGNOSTICS_PROCESS_SET_MAXWORKINGSET_OFFSET UNITYSDK_OFFSET(0x1C6C9A10)
#define SYSTEM_DIAGNOSTICS_PROCESS_SET_MINWORKINGSET_OFFSET UNITYSDK_OFFSET(0x1C6C9C30)
#define SYSTEM_DIAGNOSTICS_PROCESS_SET_PRIORITYBOOSTENABLED_OFFSET UNITYSDK_OFFSET(0x1C6CF0C0)
#define SYSTEM_DIAGNOSTICS_PROCESS_SET_PRIORITYCLASS_OFFSET UNITYSDK_OFFSET(0x1C6C9F00)
#define SYSTEM_DIAGNOSTICS_PROCESS_SET_PROCESSORAFFINITY_OFFSET UNITYSDK_OFFSET(0x1C6CF1E0)
#define SYSTEM_DIAGNOSTICS_PROCESS_SET_STARTINFO_OFFSET UNITYSDK_OFFSET(0x1C6CA290)
#define SYSTEM_DIAGNOSTICS_PROCESS_SET_SYNCHRONIZINGOBJECT_OFFSET UNITYSDK_OFFSET(0x1C6CA670)
#define SYSTEM_DIAGNOSTICS_PROCESS_SHELLEXECUTEEX_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1C6CF5F0)
#define SYSTEM_DIAGNOSTICS_PROCESS_STARTWITHCREATEPROCESS_OFFSET UNITYSDK_OFFSET(0x1C6CC1D0)
#define SYSTEM_DIAGNOSTICS_PROCESS_STARTWITHSHELLEXECUTEEX_OFFSET UNITYSDK_OFFSET(0x1C6CBF80)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_1_OFFSET UNITYSDK_OFFSET(0x1C6CD220)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_2_OFFSET UNITYSDK_OFFSET(0x1C6CD3B0)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_3_OFFSET UNITYSDK_OFFSET(0x1C6CD420)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_4_OFFSET UNITYSDK_OFFSET(0x1C6CD470)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_5_OFFSET UNITYSDK_OFFSET(0x1C6CD290)
#define SYSTEM_DIAGNOSTICS_PROCESS_START_OFFSET UNITYSDK_OFFSET(0x1C6CBE20)
#define SYSTEM_DIAGNOSTICS_PROCESS_STOPWATCHINGFOREXIT_OFFSET UNITYSDK_OFFSET(0x1C6CA950)
#define SYSTEM_DIAGNOSTICS_PROCESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C6CD660)
#define SYSTEM_DIAGNOSTICS_PROCESS_WAITFOREXIT_1_OFFSET UNITYSDK_OFFSET(0x1C6CDE20)
#define SYSTEM_DIAGNOSTICS_PROCESS_WAITFOREXIT_OFFSET UNITYSDK_OFFSET(0x1C6CD9D0)
#define SYSTEM_DIAGNOSTICS_PROCESS_WAITFORINPUTIDLE_1_OFFSET UNITYSDK_OFFSET(0x1C6CDFB0)
#define SYSTEM_DIAGNOSTICS_PROCESS_WAITFORINPUTIDLE_OFFSET UNITYSDK_OFFSET(0x1C6CDE30)
#define SYSTEM_DIAGNOSTICS_PROCESS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6CF9C0)
#define SYSTEM_DIAGNOSTICS_PROCESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6C8330)
#define SYSTEM_DIAGNOSTICS_PROCESS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C6CEAC0)
#define SYSTEM_DIAGNOSTICS_PROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C82B0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Process_TypeDefinitionIndex = 2778;

	class Process : public ::System::ComponentModel::Component
	{
	public:
		static ::System::Diagnostics::TraceSwitch** StaticGet_processTracing()
		{
			return (::System::Diagnostics::TraceSwitch**)Il2CppClass::FromTypeDefinitionIndex(Process_TypeDefinitionIndex)->GetStaticField(0x3230);
		}
		static ::System::Diagnostics::ProcessModule** StaticGet_current_main_module()
		{
			return (::System::Diagnostics::ProcessModule**)Il2CppClass::FromTypeDefinitionIndex(Process_TypeDefinitionIndex)->GetStaticField(0x3238);
		}
		::System::ComponentModel::ISynchronizeInvoke* synchronizingObject; // 0x28
		::System::OperatingSystem* operatingSystem; // 0x30
		::System::Diagnostics::AsyncStreamReader* error; // 0x38
		::System::Diagnostics::ProcessModuleCollection* modules; // 0x40
		::System::IO::StreamReader* standardOutput; // 0x48
		::System::IO::StreamWriter* standardInput; // 0x50
		::System::EventHandler* onExited; // 0x58
		::System::String* process_name; // 0x60
		::System::Diagnostics::DataReceivedEventHandler* OutputDataReceived; // 0x68
		::Microsoft::Win32::SafeHandles::SafeProcessHandle* m_processHandle; // 0x70
		::System::String* machineName; // 0x78
		::System::Threading::WaitHandle* waitHandle; // 0x80
		::System::Diagnostics::DataReceivedEventHandler* ErrorDataReceived; // 0x88
		::System::Diagnostics::AsyncStreamReader* output; // 0x90
		::System::IO::StreamReader* standardError; // 0x98
		::System::Diagnostics::ProcessStartInfo* startInfo; // 0xA0
		::System::Threading::RegisteredWaitHandle* registeredWaitHandle; // 0xA8
		::System::Diagnostics::ProcessThreadCollection* threads; // 0xB0
		::System::Boolean haveProcessId; // 0xB8
		::System::Boolean pendingOutputRead; // 0xB9
		::System::Boolean havePriorityClass; // 0xBA
		::System::Boolean haveProcessHandle; // 0xBB
		::System::Boolean watchForExit; // 0xBC
		::System::Boolean signaled; // 0xBD
		::System::Boolean exited; // 0xBE
		::System::Boolean disposed; // 0xBF
		::System::Int32 exitCode; // 0xC0
		::System::Boolean pendingErrorRead; // 0xC4
		::System::Boolean haveWorkingSetLimits; // 0xC5
		::System::Boolean watchingForExit; // 0xC6
		::System::Boolean raisedOnExited; // 0xC7
		::System::IntPtr maxWorkingSet; // 0xC8
		::System::DateTime exitTime; // 0xD0
		::System::Boolean haveExitTime; // 0xD8
		::System::Boolean isRemoteMachine; // 0xD9
		::System::Diagnostics::Process_StreamReadMode outputStreamReadMode; // 0xDC
		::System::Int32 m_processAccess; // 0xE0
		::System::Diagnostics::ProcessPriorityClass priorityClass; // 0xE4
		::System::Diagnostics::Process_StreamReadMode errorStreamReadMode; // 0xE8
		::System::Int32 processId; // 0xEC
		::System::Diagnostics::Process_StreamReadMode inputStreamReadMode; // 0xF0
		::System::IntPtr minWorkingSet; // 0xF8

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

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS__CCTOR_OFFSET))();
		}

		::System::Void add_OutputDataReceived(::System::Diagnostics::DataReceivedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::DataReceivedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ADD_OUTPUTDATARECEIVED_OFFSET))(this, value);
		}

		::System::Void remove_OutputDataReceived(::System::Diagnostics::DataReceivedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::DataReceivedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_REMOVE_OUTPUTDATARECEIVED_OFFSET))(this, value);
		}

		::System::Void add_ErrorDataReceived(::System::Diagnostics::DataReceivedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::DataReceivedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ADD_ERRORDATARECEIVED_OFFSET))(this, value);
		}

		::System::Void remove_ErrorDataReceived(::System::Diagnostics::DataReceivedEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::DataReceivedEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_REMOVE_ERRORDATARECEIVED_OFFSET))(this, value);
		}

		::System::Boolean get_Associated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_ASSOCIATED_OFFSET))(this);
		}

		::System::Int32 get_ExitCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_EXITCODE_OFFSET))(this);
		}

		::System::Boolean get_HasExited()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_HASEXITED_OFFSET))(this);
		}

		::System::Diagnostics::ProcessThreadTimes* GetProcessTimes()
		{
			return ((::System::Diagnostics::ProcessThreadTimes*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSTIMES_OFFSET))(this);
		}

		::System::DateTime get_ExitTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_EXITTIME_OFFSET))(this);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_HANDLE_OFFSET))(this);
		}

		::Microsoft::Win32::SafeHandles::SafeProcessHandle* get_SafeHandle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeProcessHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_SAFEHANDLE_OFFSET))(this);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_ID_OFFSET))(this);
		}

		::System::String* get_MachineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_MACHINENAME_OFFSET))(this);
		}

		::System::IntPtr get_MaxWorkingSet()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_MAXWORKINGSET_OFFSET))(this);
		}

		::System::Void set_MaxWorkingSet(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SET_MAXWORKINGSET_OFFSET))(this, value);
		}

		::System::IntPtr get_MinWorkingSet()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_MINWORKINGSET_OFFSET))(this);
		}

		::System::Void set_MinWorkingSet(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SET_MINWORKINGSET_OFFSET))(this, value);
		}

		::System::OperatingSystem* get_OperatingSystem()
		{
			return ((::System::OperatingSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_OPERATINGSYSTEM_OFFSET))(this);
		}

		::System::Diagnostics::ProcessPriorityClass get_PriorityClass()
		{
			return ((::System::Diagnostics::ProcessPriorityClass(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PRIORITYCLASS_OFFSET))(this);
		}

		::System::Void set_PriorityClass(::System::Diagnostics::ProcessPriorityClass value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::ProcessPriorityClass))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SET_PRIORITYCLASS_OFFSET))(this, value);
		}

		::System::TimeSpan get_PrivilegedProcessorTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PRIVILEGEDPROCESSORTIME_OFFSET))(this);
		}

		::System::Diagnostics::ProcessStartInfo* get_StartInfo()
		{
			return ((::System::Diagnostics::ProcessStartInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_STARTINFO_OFFSET))(this);
		}

		::System::Void set_StartInfo(::System::Diagnostics::ProcessStartInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::ProcessStartInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SET_STARTINFO_OFFSET))(this, value);
		}

		::System::DateTime get_StartTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_STARTTIME_OFFSET))(this);
		}

		::System::ComponentModel::ISynchronizeInvoke* get_SynchronizingObject()
		{
			return ((::System::ComponentModel::ISynchronizeInvoke*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_SYNCHRONIZINGOBJECT_OFFSET))(this);
		}

		::System::Void set_SynchronizingObject(::System::ComponentModel::ISynchronizeInvoke* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::ISynchronizeInvoke*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SET_SYNCHRONIZINGOBJECT_OFFSET))(this, value);
		}

		::System::TimeSpan get_TotalProcessorTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_TOTALPROCESSORTIME_OFFSET))(this);
		}

		::System::TimeSpan get_UserProcessorTime()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_USERPROCESSORTIME_OFFSET))(this);
		}

		::System::Boolean get_EnableRaisingEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_ENABLERAISINGEVENTS_OFFSET))(this);
		}

		::System::Void set_EnableRaisingEvents(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SET_ENABLERAISINGEVENTS_OFFSET))(this, value);
		}

		::System::IO::StreamWriter* get_StandardInput()
		{
			return ((::System::IO::StreamWriter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_STANDARDINPUT_OFFSET))(this);
		}

		::System::IO::StreamReader* get_StandardOutput()
		{
			return ((::System::IO::StreamReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_STANDARDOUTPUT_OFFSET))(this);
		}

		::System::IO::StreamReader* get_StandardError()
		{
			return ((::System::IO::StreamReader*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_STANDARDERROR_OFFSET))(this);
		}

		::System::Void add_Exited(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ADD_EXITED_OFFSET))(this, value);
		}

		::System::Void remove_Exited(::System::EventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_REMOVE_EXITED_OFFSET))(this, value);
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

		::System::Void EnsureWorkingSetLimits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ENSUREWORKINGSETLIMITS_OFFSET))(this);
		}

		static ::System::Void EnterDebugMode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ENTERDEBUGMODE_OFFSET))();
		}

		static ::System::Void LeaveDebugMode()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_LEAVEDEBUGMODE_OFFSET))();
		}

		static ::System::Diagnostics::Process* GetProcessById(::System::Int32 processId)
		{
			return ((::System::Diagnostics::Process*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_OFFSET))(processId);
		}

		static ::Il2CppArray<::System::Diagnostics::Process*>* GetProcessesByName(::System::String* processName)
		{
			return ((::Il2CppArray<::System::Diagnostics::Process*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSESBYNAME_OFFSET))(processName);
		}

		static ::Il2CppArray<::System::Diagnostics::Process*>* GetProcesses()
		{
			return ((::Il2CppArray<::System::Diagnostics::Process*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSES_OFFSET))();
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

		::Microsoft::Win32::SafeHandles::SafeProcessHandle* OpenProcessHandle()
		{
			return ((::Microsoft::Win32::SafeHandles::SafeProcessHandle*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_OPENPROCESSHANDLE_OFFSET))(this);
		}

		::Microsoft::Win32::SafeHandles::SafeProcessHandle* OpenProcessHandle_1(::System::Int32 access)
		{
			return ((::Microsoft::Win32::SafeHandles::SafeProcessHandle*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_OPENPROCESSHANDLE_1_OFFSET))(this, access);
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

		::System::Void SetWorkingSetLimits(::System::Object* newMin, ::System::Object* newMax)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SETWORKINGSETLIMITS_OFFSET))(this, newMin, newMax);
		}

		::System::Boolean Start()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_OFFSET))(this);
		}

		static ::System::Diagnostics::Process* Start_1(::System::String* fileName, ::System::String* userName, ::System::Security::SecureString* password, ::System::String* domain)
		{
			return ((::System::Diagnostics::Process*(*)(::System::String*, ::System::String*, ::System::Security::SecureString*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_1_OFFSET))(fileName, userName, password, domain);
		}

		static ::System::Diagnostics::Process* Start_2(::System::String* fileName, ::System::String* arguments, ::System::String* userName, ::System::Security::SecureString* password, ::System::String* domain)
		{
			return ((::System::Diagnostics::Process*(*)(::System::String*, ::System::String*, ::System::String*, ::System::Security::SecureString*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_2_OFFSET))(fileName, arguments, userName, password, domain);
		}

		static ::System::Diagnostics::Process* Start_3(::System::String* fileName)
		{
			return ((::System::Diagnostics::Process*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_3_OFFSET))(fileName);
		}

		static ::System::Diagnostics::Process* Start_4(::System::String* fileName, ::System::String* arguments)
		{
			return ((::System::Diagnostics::Process*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_4_OFFSET))(fileName, arguments);
		}

		static ::System::Diagnostics::Process* Start_5(::System::Diagnostics::ProcessStartInfo* startInfo)
		{
			return ((::System::Diagnostics::Process*(*)(::System::Diagnostics::ProcessStartInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_START_5_OFFSET))(startInfo);
		}

		::System::Void Kill()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_KILL_OFFSET))(this);
		}

		::System::Void StopWatchingForExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_STOPWATCHINGFOREXIT_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_TOSTRING_OFFSET))(this);
		}

		::System::Boolean WaitForExit(::System::Int32 milliseconds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_WAITFOREXIT_OFFSET))(this, milliseconds);
		}

		::System::Void WaitForExit_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_WAITFOREXIT_1_OFFSET))(this);
		}

		::System::Boolean WaitForInputIdle(::System::Int32 milliseconds)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_WAITFORINPUTIDLE_OFFSET))(this, milliseconds);
		}

		::System::Boolean WaitForInputIdle_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_WAITFORINPUTIDLE_1_OFFSET))(this);
		}

		::System::Void BeginOutputReadLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_BEGINOUTPUTREADLINE_OFFSET))(this);
		}

		::System::Void BeginErrorReadLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_BEGINERRORREADLINE_OFFSET))(this);
		}

		::System::Void CancelOutputRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_CANCELOUTPUTREAD_OFFSET))(this);
		}

		::System::Void CancelErrorRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_CANCELERRORREAD_OFFSET))(this);
		}

		::System::Void OutputReadNotifyUser(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_OUTPUTREADNOTIFYUSER_OFFSET))(this, data);
		}

		::System::Void ErrorReadNotifyUser(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_ERRORREADNOTIFYUSER_OFFSET))(this, data);
		}

		::System::Int32 get_BasePriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_BASEPRIORITY_OFFSET))(this);
		}

		::System::Int32 get_HandleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_HANDLECOUNT_OFFSET))(this);
		}

		::System::Diagnostics::ProcessModule* get_MainModule()
		{
			return ((::System::Diagnostics::ProcessModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_MAINMODULE_OFFSET))(this);
		}

		::System::IntPtr get_MainWindowHandle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_MAINWINDOWHANDLE_OFFSET))(this);
		}

		::System::String* get_MainWindowTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_MAINWINDOWTITLE_OFFSET))(this);
		}

		::Il2CppArray<::System::Diagnostics::ProcessModule*>* GetModules_internal(::System::IntPtr handle)
		{
			return ((::Il2CppArray<::System::Diagnostics::ProcessModule*>*(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETMODULES_INTERNAL_OFFSET))(this, handle);
		}

		::Il2CppArray<::System::Diagnostics::ProcessModule*>* GetModules_internal_1(::Microsoft::Win32::SafeHandles::SafeProcessHandle* handle)
		{
			return ((::Il2CppArray<::System::Diagnostics::ProcessModule*>*(*)(::PVOID, ::Microsoft::Win32::SafeHandles::SafeProcessHandle*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETMODULES_INTERNAL_1_OFFSET))(this, handle);
		}

		::System::Diagnostics::ProcessModuleCollection* get_Modules()
		{
			return ((::System::Diagnostics::ProcessModuleCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_MODULES_OFFSET))(this);
		}

		static ::System::Int64 GetProcessData(::System::Int32 pid, ::System::Int32 data_type, ::System::Int32& error)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSDATA_OFFSET))(pid, data_type, error);
		}

		::System::Int32 get_NonpagedSystemMemorySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_NONPAGEDSYSTEMMEMORYSIZE_OFFSET))(this);
		}

		::System::Int32 get_PagedMemorySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PAGEDMEMORYSIZE_OFFSET))(this);
		}

		::System::Int32 get_PagedSystemMemorySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PAGEDSYSTEMMEMORYSIZE_OFFSET))(this);
		}

		::System::Int32 get_PeakPagedMemorySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKPAGEDMEMORYSIZE_OFFSET))(this);
		}

		::System::Int32 get_PeakVirtualMemorySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKVIRTUALMEMORYSIZE_OFFSET))(this);
		}

		::System::Int32 get_PeakWorkingSet()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKWORKINGSET_OFFSET))(this);
		}

		::System::Int64 get_NonpagedSystemMemorySize64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_NONPAGEDSYSTEMMEMORYSIZE64_OFFSET))(this);
		}

		::System::Int64 get_PagedMemorySize64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PAGEDMEMORYSIZE64_OFFSET))(this);
		}

		::System::Int64 get_PagedSystemMemorySize64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PAGEDSYSTEMMEMORYSIZE64_OFFSET))(this);
		}

		::System::Int64 get_PeakPagedMemorySize64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKPAGEDMEMORYSIZE64_OFFSET))(this);
		}

		::System::Int64 get_PeakVirtualMemorySize64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKVIRTUALMEMORYSIZE64_OFFSET))(this);
		}

		::System::Int64 get_PeakWorkingSet64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PEAKWORKINGSET64_OFFSET))(this);
		}

		::System::Boolean get_PriorityBoostEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PRIORITYBOOSTENABLED_OFFSET))(this);
		}

		::System::Void set_PriorityBoostEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SET_PRIORITYBOOSTENABLED_OFFSET))(this, value);
		}

		::System::Int32 get_PrivateMemorySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PRIVATEMEMORYSIZE_OFFSET))(this);
		}

		::System::Int32 get_SessionId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_SESSIONID_OFFSET))(this);
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

		::System::IntPtr get_ProcessorAffinity()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PROCESSORAFFINITY_OFFSET))(this);
		}

		::System::Void set_ProcessorAffinity(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_SET_PROCESSORAFFINITY_OFFSET))(this, value);
		}

		::System::Boolean get_Responding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_RESPONDING_OFFSET))(this);
		}

		::System::Diagnostics::ProcessThreadCollection* get_Threads()
		{
			return ((::System::Diagnostics::ProcessThreadCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_THREADS_OFFSET))(this);
		}

		::System::Int32 get_VirtualMemorySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_VIRTUALMEMORYSIZE_OFFSET))(this);
		}

		::System::Int32 get_WorkingSet()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_WORKINGSET_OFFSET))(this);
		}

		::System::Int64 get_PrivateMemorySize64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_PRIVATEMEMORYSIZE64_OFFSET))(this);
		}

		::System::Int64 get_VirtualMemorySize64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_VIRTUALMEMORYSIZE64_OFFSET))(this);
		}

		::System::Int64 get_WorkingSet64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GET_WORKINGSET64_OFFSET))(this);
		}

		::System::Boolean CloseMainWindow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_CLOSEMAINWINDOW_OFFSET))(this);
		}

		static ::System::IntPtr GetProcess_internal(::System::Int32 pid)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESS_INTERNAL_OFFSET))(pid);
		}

		static ::System::Diagnostics::Process* GetProcessById_1(::System::Int32 processId, ::System::String* machineName)
		{
			return ((::System::Diagnostics::Process*(*)(::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSBYID_1_OFFSET))(processId, machineName);
		}

		static ::Il2CppArray<::System::Diagnostics::Process*>* GetProcessesByName_1(::System::String* processName, ::System::String* machineName)
		{
			return ((::Il2CppArray<::System::Diagnostics::Process*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSESBYNAME_1_OFFSET))(processName, machineName);
		}

		static ::Il2CppArray<::System::Int32>* GetProcesses_internal()
		{
			return ((::Il2CppArray<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSES_INTERNAL_OFFSET))();
		}

		static ::Il2CppArray<::System::Diagnostics::Process*>* GetProcesses_1(::System::String* machineName)
		{
			return ((::Il2CppArray<::System::Diagnostics::Process*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESS_GETPROCESSES_1_OFFSET))(machineName);
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
