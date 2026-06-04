#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Stack; }

#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETPROCESSID_OFFSET UNITYSDK_OFFSET(0x1AF4A090)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETTHREADID_OFFSET UNITYSDK_OFFSET(0x1AF4A170)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_CALLSTACK_OFFSET UNITYSDK_OFFSET(0x1AF49F30)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_DATETIME_OFFSET UNITYSDK_OFFSET(0x1AF4A010)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_LOGICALOPERATIONSTACK_OFFSET UNITYSDK_OFFSET(0x1AF49F80)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_PROCESSID_OFFSET UNITYSDK_OFFSET(0x1AF4A070)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_THREADID_OFFSET UNITYSDK_OFFSET(0x1AF4A0B0)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1AF4A210)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_INITPROCESSINFO_OFFSET UNITYSDK_OFFSET(0x1AF4A280)
#define SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF4A420)

namespace System::Diagnostics
{
	inline static constexpr unsigned int TraceEventCache_TypeDefinitionIndex = 2526;

	class TraceEventCache : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_processName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(TraceEventCache_TypeDefinitionIndex)->GetStaticField(0x23970);
		}
		static ::System::Int32* StaticGet_processId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TraceEventCache_TypeDefinitionIndex)->GetStaticField(0x9020);
		}
		::System::String* stackTrace; // 0x10
		::System::Int64 timeStamp; // 0x18
		::System::DateTime dateTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE__CTOR_OFFSET))(this);
		}

		::System::String* get_Callstack()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_CALLSTACK_OFFSET))(this);
		}

		::System::Collections::Stack* get_LogicalOperationStack()
		{
			return ((::System::Collections::Stack*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_LOGICALOPERATIONSTACK_OFFSET))(this);
		}

		::System::DateTime get_DateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_DATETIME_OFFSET))(this);
		}

		::System::Int32 get_ProcessId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_PROCESSID_OFFSET))(this);
		}

		::System::String* get_ThreadId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_THREADID_OFFSET))(this);
		}

		::System::Int64 get_Timestamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GET_TIMESTAMP_OFFSET))(this);
		}

		static ::System::Void InitProcessInfo()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_INITPROCESSINFO_OFFSET))();
		}

		static ::System::Int32 GetProcessId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETPROCESSID_OFFSET))();
		}

		static ::System::Int32 GetThreadId()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACEEVENTCACHE_GETTHREADID_OFFSET))();
		}
	};
}
