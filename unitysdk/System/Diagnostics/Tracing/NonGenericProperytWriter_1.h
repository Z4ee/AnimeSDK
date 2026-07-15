#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/PropertyAccessor_1.h"

namespace System { class Object; }
namespace System::Diagnostics::Tracing { class PropertyAnalysis; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingTypeInfo; }
namespace System::Reflection { class MethodInfo; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int NonGenericProperytWriter_1_TypeDefinitionIndex = 1602;

	template <typename ContainerType>
	class NonGenericProperytWriter_1 : public ::System::Diagnostics::Tracing::PropertyAccessor_1<ContainerType>
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo* typeInfo; // 0x0
		::System::Reflection::MethodInfo* getterInfo; // 0x0
	};
}
