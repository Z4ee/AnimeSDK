#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"
#include "unitysdk/System/Nullable_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }
namespace System::Diagnostics::Tracing { template <typename T> class TraceLoggingTypeInfo_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int NullableTypeInfo_1_TypeDefinitionIndex = 1651;

	template <typename T>
	class NullableTypeInfo_1 : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Nullable_1<T>>
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<T>* valueInfo; // 0x0
	};
}
