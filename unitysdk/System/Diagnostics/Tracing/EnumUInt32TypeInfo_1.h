#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventFieldFormat.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { class TraceLoggingMetadataCollector; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EnumUInt32TypeInfo_1_TypeDefinitionIndex = 1640;

	template <typename EnumType>
	class EnumUInt32TypeInfo_1 : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<EnumType>
	{
	public:
	};
}
