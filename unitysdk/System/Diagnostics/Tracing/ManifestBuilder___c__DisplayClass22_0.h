#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x191BF300)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int ManifestBuilder___c__DisplayClass22_0_TypeDefinitionIndex = 1700;

	class ManifestBuilder___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::String* eventMessage; // 0x10
		::System::Text::StringBuilder* stringBuilder; // 0x18
		::System::Int32 writtenSoFar; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_MANIFESTBUILDER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}
	};
}
