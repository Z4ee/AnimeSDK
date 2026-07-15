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
	inline static constexpr unsigned int ArrayTypeInfo_1_TypeDefinitionIndex = 1581;

	template <typename ElementType>
	class ArrayTypeInfo_1 : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::Il2CppArray<ElementType>*>
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<ElementType>* elementInfo; // 0x0
	};
}
