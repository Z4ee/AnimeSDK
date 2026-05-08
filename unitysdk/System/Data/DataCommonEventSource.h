#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"

namespace System { class String; }

#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET UNITYSDK_OFFSET(0x1B31B150)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_EXITSCOPE_OFFSET UNITYSDK_OFFSET(0x1B31B1A0)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET UNITYSDK_OFFSET(0x1B31B140)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B31B200)
#define SYSTEM_DATA_DATACOMMONEVENTSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B31B1B0)

namespace System::Data
{
	inline static constexpr unsigned int DataCommonEventSource_TypeDefinitionIndex = 36939;

	class DataCommonEventSource : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Data::DataCommonEventSource** StaticGet_Log()
		{
			return (::System::Data::DataCommonEventSource**)Il2CppClass::FromTypeDefinitionIndex(DataCommonEventSource_TypeDefinitionIndex)->GetStaticField(0x27420);
		}
		static ::System::Int64* StaticGet_s_nextScopeId()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(DataCommonEventSource_TypeDefinitionIndex)->GetStaticField(0x8AD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE__CCTOR_OFFSET))();
		}

		::System::Void Trace(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_TRACE_OFFSET))(this, message);
		}

		::System::Int64 EnterScope(::System::String* message)
		{
			return ((::System::Int64(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_ENTERSCOPE_OFFSET))(this, message);
		}

		::System::Void ExitScope(::System::Int64 scopeId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOMMONEVENTSOURCE_EXITSCOPE_OFFSET))(this, scopeId);
		}
	};
}
