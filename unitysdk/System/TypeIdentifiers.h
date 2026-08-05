#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class TypeIdentifier; }

#define SYSTEM_TYPEIDENTIFIERS_FROMDISPLAY_OFFSET UNITYSDK_OFFSET(0x1DD0A9C0)
#define SYSTEM_TYPEIDENTIFIERS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD0AA10)

namespace System
{
	inline static constexpr unsigned int TypeIdentifiers_TypeDefinitionIndex = 427;

	class TypeIdentifiers : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS__CTOR_OFFSET))(this);
		}

		static ::System::TypeIdentifier* FromDisplay(::System::String* displayName)
		{
			return ((::System::TypeIdentifier*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_FROMDISPLAY_OFFSET))(displayName);
		}
	};
}
