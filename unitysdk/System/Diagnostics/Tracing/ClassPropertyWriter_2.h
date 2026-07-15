#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/PropertyAccessor_1.h"

namespace System { class Object; }
namespace System::Diagnostics::Tracing { class PropertyAnalysis; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { template <typename T1, typename T2> class ClassPropertyWriter_2_Getter; }
namespace System::Diagnostics::Tracing { template <typename T> class TraceLoggingTypeInfo_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ClassPropertyWriter_2_TypeDefinitionIndex = 1603;

	template <typename ContainerType, typename ValueType>
	class ClassPropertyWriter_2 : public ::System::Diagnostics::Tracing::PropertyAccessor_1<ContainerType>
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ValueType>* valueTypeInfo; // 0x0
		::System::Diagnostics::Tracing::ClassPropertyWriter_2_Getter<ContainerType, ValueType>* getter; // 0x0
	};
}
