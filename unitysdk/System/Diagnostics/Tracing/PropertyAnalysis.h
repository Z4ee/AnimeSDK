#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class EventFieldAttribute; }
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }
namespace System::Reflection { class MethodInfo; }

#define SYSTEM_DIAGNOSTICS_TRACING_PROPERTYANALYSIS__CTOR_OFFSET UNITYSDK_OFFSET(0x179085F0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int PropertyAnalysis_TypeDefinitionIndex = 1603;

	class PropertyAnalysis : public ::System::Object
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo; // 0x10
		::System::Diagnostics::Tracing::EventFieldAttribute* fieldAttribute; // 0x18
		::System::String* name; // 0x20
		::System::Reflection::MethodInfo* getterInfo; // 0x28

		::System::Void _ctor(::System::String* name, ::System::Reflection::MethodInfo* getterInfo, ::System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo, ::System::Diagnostics::Tracing::EventFieldAttribute* fieldAttribute)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Reflection::MethodInfo*, ::System::Diagnostics::Tracing::TraceLoggingTypeInfo*, ::System::Diagnostics::Tracing::EventFieldAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_PROPERTYANALYSIS__CTOR_OFFSET))(this, name, getterInfo, typeInfo, fieldAttribute);
		}
	};
}
