#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventLevel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventOpcode.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTags.h"
#include "unitysdk/System/Diagnostics/Tracing/TraceLoggingTypeInfo.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics::Tracing { class TraceLoggingDataCollector; }
namespace System::Diagnostics::Tracing { template <typename T> class TraceLoggingTypeInfo_1; }

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TraceLoggingTypeInfo_1_TypeDefinitionIndex = 1665;

	template <typename DataType>
	class TraceLoggingTypeInfo_1 : public ::System::Diagnostics::Tracing::TraceLoggingTypeInfo
	{
	public:
		static ::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>** StaticGet_instance()
		{
			return (::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>**)Il2CppClass::FromTypeDefinitionIndex(TraceLoggingTypeInfo_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
