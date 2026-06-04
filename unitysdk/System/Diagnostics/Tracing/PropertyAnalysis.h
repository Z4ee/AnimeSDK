#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class EventFieldAttribute; }
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_DIAGNOSTICS_TRACING_PROPERTYANALYSIS__CTOR_OFFSET UNITYSDK_OFFSET(0x186BF2E0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int PropertyAnalysis_TypeDefinitionIndex = 1601;

	class PropertyAnalysis : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* getterInfo; // 0x10
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo; // 0x18
		::System::Diagnostics::Tracing::EventFieldAttribute* fieldAttribute; // 0x20
		::System::String* name; // 0x28

		::System::Void _ctor(::System::String* a1, ::System::Reflection::MethodInfo* a2, ::System::Diagnostics::Tracing::TraceLoggingTypeInfo* a3, ::System::Diagnostics::Tracing::EventFieldAttribute* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Reflection::MethodInfo*, ::System::Diagnostics::Tracing::TraceLoggingTypeInfo*, ::System::Diagnostics::Tracing::EventFieldAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_PROPERTYANALYSIS__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
