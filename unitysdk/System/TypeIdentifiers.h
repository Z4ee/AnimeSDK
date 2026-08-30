#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class TypeIdentifier; }

#define SYSTEM_TYPEIDENTIFIERS_FROMDISPLAY_OFFSET UNITYSDK_OFFSET(0x1C68FFC0)

namespace System
{
	inline static constexpr unsigned int TypeIdentifiers_TypeDefinitionIndex = 442;

	class TypeIdentifiers : public ::System::Object
	{
	public:
		static ::System::TypeIdentifier* FromDisplay(::System::String* a1)
		{
			return ((::System::TypeIdentifier*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_FROMDISPLAY_OFFSET))(a1);
		}
	};
}
