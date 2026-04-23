#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventLevel.h"
#include "unitysdk/System/Diagnostics/Tracing/EventOpcode.h"
#include "unitysdk/System/Diagnostics/Tracing/EventTags.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Diagnostics::Tracing { class EventDataAttribute; }
namespace System::Diagnostics::Tracing { class PropertyAnalysis; }

#define SYSTEM_DIAGNOSTICS_TRACING_TYPEANALYSIS__CTOR_OFFSET UNITYSDK_OFFSET(0x1790B470)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int TypeAnalysis_TypeDefinitionIndex = 1664;

	class TypeAnalysis : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Diagnostics::Tracing::PropertyAnalysis*>* properties; // 0x10
		::System::String* name; // 0x18
		::System::Diagnostics::Tracing::EventOpcode opcode; // 0x20
		::System::Diagnostics::Tracing::EventTags tags; // 0x24
		::System::Diagnostics::Tracing::EventLevel level; // 0x28
		::System::Diagnostics::Tracing::EventKeywords keywords; // 0x30

		::System::Void _ctor(::System::Type* dataType, ::System::Diagnostics::Tracing::EventDataAttribute* eventAttrib, ::System::Collections::Generic::List_1<::System::Type*>* recursionCheck)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Diagnostics::Tracing::EventDataAttribute*, ::System::Collections::Generic::List_1<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_TYPEANALYSIS__CTOR_OFFSET))(this, dataType, eventAttrib, recursionCheck);
		}
	};
}
