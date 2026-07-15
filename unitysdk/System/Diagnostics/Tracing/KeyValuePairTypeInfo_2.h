#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }
namespace System::Diagnostics::Tracing { template <typename T> class TraceLoggingTypeInfo_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int KeyValuePairTypeInfo_2_TypeDefinitionIndex = 1650;

	template <typename K, typename V>
	class KeyValuePairTypeInfo_2 : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<::System::Collections::Generic::KeyValuePair_2<K, V>>
	{
	public:
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<K>* keyInfo; // 0x0
		::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<V>* valueInfo; // 0x0
	};
}
