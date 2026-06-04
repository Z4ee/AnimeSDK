#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics { class TraceListenerCollection; }

#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_ASSERT_OFFSET UNITYSDK_OFFSET(0x1AF42E30)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_FAIL_OFFSET UNITYSDK_OFFSET(0x1AF4A6E0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_AUTOFLUSH_OFFSET UNITYSDK_OFFSET(0x1AF49E90)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTLEVEL_OFFSET UNITYSDK_OFFSET(0x1AF4A680)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTSIZE_OFFSET UNITYSDK_OFFSET(0x1AF4A6D0)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_LISTENERS_OFFSET UNITYSDK_OFFSET(0x1AF49C00)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_USEGLOBALLOCK_OFFSET UNITYSDK_OFFSET(0x1AF4A670)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_INITIALIZESETTINGS_OFFSET UNITYSDK_OFFSET(0x1AF4A480)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINE_OFFSET UNITYSDK_OFFSET(0x1AF42E60)
#define SYSTEM_DIAGNOSTICS_TRACEINTERNAL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF4AFF0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceInternal_TypeDefinitionIndex = 2529;

	class TraceInternal : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_critSec()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x23980);
		}
		static ::System::Diagnostics::TraceListenerCollection** StaticGet_listeners()
		{
			return (::System::Diagnostics::TraceListenerCollection**)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x23988);
		}
		static ::System::String** StaticGet_appName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x23990);
		}
		static ::System::Boolean* StaticGet_autoFlush()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x9030);
		}
		static ::System::Boolean* StaticGet_useGlobalLock()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x9031);
		}
		static ::System::Int32* StaticGet_indentSize()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x9034);
		}
		static ::System::Int32* StaticGet_indentLevel()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TraceInternal_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL__CCTOR_OFFSET))();
		}

		static ::System::Diagnostics::TraceListenerCollection* get_Listeners()
		{
			return ((::System::Diagnostics::TraceListenerCollection*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_LISTENERS_OFFSET))();
		}

		static ::System::Boolean get_AutoFlush()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_AUTOFLUSH_OFFSET))();
		}

		static ::System::Boolean get_UseGlobalLock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_USEGLOBALLOCK_OFFSET))();
		}

		static ::System::Int32 get_IndentLevel()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTLEVEL_OFFSET))();
		}

		static ::System::Int32 get_IndentSize()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_GET_INDENTSIZE_OFFSET))();
		}

		static ::System::Void Assert(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_ASSERT_OFFSET))(a1);
		}

		static ::System::Void Fail(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_FAIL_OFFSET))(a1);
		}

		static ::System::Void InitializeSettings()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_INITIALIZESETTINGS_OFFSET))();
		}

		static ::System::Void WriteLine(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEINTERNAL_WRITELINE_OFFSET))(a1);
		}
	};
}
