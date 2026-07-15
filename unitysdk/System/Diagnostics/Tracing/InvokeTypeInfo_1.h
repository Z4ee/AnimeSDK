#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Diagnostics::Tracing { class PropertyAnalysis; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }
namespace System::Diagnostics::Tracing { class TypeAnalysis; }
namespace System::Diagnostics::Tracing { template <typename T> class PropertyAccessor_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int InvokeTypeInfo_1_TypeDefinitionIndex = 1599;

	template <typename ContainerType>
	class InvokeTypeInfo_1 : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ContainerType>
	{
	public:
		::Il2CppArray<::System::Diagnostics::Tracing::PropertyAnalysis*>* properties; // 0x0
		::Il2CppArray<::System::Diagnostics::Tracing::PropertyAccessor_1<ContainerType>*>* accessors; // 0x0
	};
}
