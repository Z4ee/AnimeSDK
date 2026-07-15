#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }
namespace System::Diagnostics::Tracing { template <typename T> class TraceLoggingTypeInfo_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EnumerableTypeInfo_2_TypeDefinitionIndex = 1589;

	template <typename IterableType, typename ElementType>
	class EnumerableTypeInfo_2 : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<IterableType>
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ElementType>* elementInfo; // 0x0
	};
}
