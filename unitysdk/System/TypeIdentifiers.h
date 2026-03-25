#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class TypeIdentifier; }

#define SYSTEM_TYPEIDENTIFIERS_FROMDISPLAY_OFFSET UNITYSDK_OFFSET(0x1626D820)

namespace System
{
	inline static constexpr unsigned int TypeIdentifiers_TypeDefinitionIndex = 440;

	class TypeIdentifiers : public ::System::Object
	{
	public:
		static ::System::TypeIdentifier* FromDisplay(::System::String* displayName)
		{
			return ((::System::TypeIdentifier*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_FROMDISPLAY_OFFSET))(displayName);
		}
	};
}
