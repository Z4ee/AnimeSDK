#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceListener.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_FAIL_1_OFFSET UNITYSDK_OFFSET(0x186A1210)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_FAIL_OFFSET UNITYSDK_OFFSET(0x186A11D0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_GETPREFIX_OFFSET UNITYSDK_OFFSET(0x186A1150)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_GET_LOGFILENAME_OFFSET UNITYSDK_OFFSET(0x186A11C0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEDEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x186A14C0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEIMPL_OFFSET UNITYSDK_OFFSET(0x186A1A70)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x186A1430)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITELOGFILE_OFFSET UNITYSDK_OFFSET(0x186A1700)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEMONOTRACE_OFFSET UNITYSDK_OFFSET(0x186A1550)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEPREFIX_OFFSET UNITYSDK_OFFSET(0x186A19E0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEWINDOWSDEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x186A14B0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITE_OFFSET UNITYSDK_OFFSET(0x186A1CF0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x186A0FA0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x186A1190)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DefaultTraceListener_TypeDefinitionIndex = 2543;

	class DefaultTraceListener : public ::System::Diagnostics::TraceListener
	{
	public:
		static ::System::String** StaticGet_MonoTracePrefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultTraceListener_TypeDefinitionIndex)->GetStaticField(0x11420);
		}
		static ::System::String** StaticGet_MonoTraceFile()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultTraceListener_TypeDefinitionIndex)->GetStaticField(0x11428);
		}
		static ::System::Boolean* StaticGet_OnWin32()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DefaultTraceListener_TypeDefinitionIndex)->GetStaticField(0x53E0);
		}
		::System::String* logFileName; // 0x38

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER__CTOR_OFFSET))(this);
		}

		static ::System::String* GetPrefix(::System::String* var, ::System::String* target)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_GETPREFIX_OFFSET))(var, target);
		}

		::System::String* get_LogFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_GET_LOGFILENAME_OFFSET))(this);
		}

		::System::Void Fail(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_FAIL_OFFSET))(this, message);
		}

		::System::Void Fail_1(::System::String* message, ::System::String* detailMessage)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_FAIL_1_OFFSET))(this, message, detailMessage);
		}

		static ::System::Void WriteWindowsDebugString(::System::String* message)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEWINDOWSDEBUGSTRING_OFFSET))(message);
		}

		::System::Void WriteDebugString(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEDEBUGSTRING_OFFSET))(this, message);
		}

		::System::Void WriteMonoTrace(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEMONOTRACE_OFFSET))(this, message);
		}

		::System::Void WritePrefix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEPREFIX_OFFSET))(this);
		}

		::System::Void WriteImpl(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEIMPL_OFFSET))(this, message);
		}

		::System::Void WriteLogFile(::System::String* message, ::System::String* logFile)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITELOGFILE_OFFSET))(this, message, logFile);
		}

		::System::Void Write(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITE_OFFSET))(this, message);
		}

		::System::Void WriteLine(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITELINE_OFFSET))(this, message);
		}
	};
}
