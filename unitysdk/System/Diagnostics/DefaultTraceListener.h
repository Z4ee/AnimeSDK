#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/TraceListener.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_FAIL_1_OFFSET UNITYSDK_OFFSET(0x1AF43AD0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_FAIL_OFFSET UNITYSDK_OFFSET(0x1AF43A90)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_GETPREFIX_OFFSET UNITYSDK_OFFSET(0x1AF43A10)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_GET_LOGFILENAME_OFFSET UNITYSDK_OFFSET(0x1AF43A80)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEDEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x1AF43D80)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEIMPL_OFFSET UNITYSDK_OFFSET(0x1AF44360)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1AF43CF0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITELOGFILE_OFFSET UNITYSDK_OFFSET(0x1AF43FC0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEMONOTRACE_OFFSET UNITYSDK_OFFSET(0x1AF43E10)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEPREFIX_OFFSET UNITYSDK_OFFSET(0x1AF442D0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEWINDOWSDEBUGSTRING_OFFSET UNITYSDK_OFFSET(0x1AF43D70)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITE_OFFSET UNITYSDK_OFFSET(0x1AF445E0)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF43860)
#define SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF43A50)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DefaultTraceListener_TypeDefinitionIndex = 2544;

	class DefaultTraceListener : public ::System::Diagnostics::TraceListener
	{
	public:
		static ::System::String** StaticGet_MonoTracePrefix()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultTraceListener_TypeDefinitionIndex)->GetStaticField(0x236F0);
		}
		static ::System::String** StaticGet_MonoTraceFile()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(DefaultTraceListener_TypeDefinitionIndex)->GetStaticField(0x236F8);
		}
		static ::System::Boolean* StaticGet_OnWin32()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DefaultTraceListener_TypeDefinitionIndex)->GetStaticField(0x8FB0);
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

		static ::System::String* GetPrefix(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_GETPREFIX_OFFSET))(a1, a2);
		}

		::System::String* get_LogFileName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_GET_LOGFILENAME_OFFSET))(this);
		}

		::System::Void Fail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_FAIL_OFFSET))(this, a1);
		}

		::System::Void Fail_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_FAIL_1_OFFSET))(this, a1, a2);
		}

		static ::System::Void WriteWindowsDebugString(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEWINDOWSDEBUGSTRING_OFFSET))(a1);
		}

		::System::Void WriteDebugString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEDEBUGSTRING_OFFSET))(this, a1);
		}

		::System::Void WriteMonoTrace(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEMONOTRACE_OFFSET))(this, a1);
		}

		::System::Void WritePrefix()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEPREFIX_OFFSET))(this);
		}

		::System::Void WriteImpl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITEIMPL_OFFSET))(this, a1);
		}

		::System::Void WriteLogFile(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITELOGFILE_OFFSET))(this, a1, a2);
		}

		::System::Void Write(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITE_OFFSET))(this, a1);
		}

		::System::Void WriteLine(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DEFAULTTRACELISTENER_WRITELINE_OFFSET))(this, a1);
		}
	};
}
