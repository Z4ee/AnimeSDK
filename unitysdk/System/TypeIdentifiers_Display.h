#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TypeNames_ATypeName.h"

namespace System { class String; }

#define SYSTEM_TYPEIDENTIFIERS_DISPLAY_GETINTERNALNAME_OFFSET UNITYSDK_OFFSET(0x1A75E400)
#define SYSTEM_TYPEIDENTIFIERS_DISPLAY_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1A75E3C0)
#define SYSTEM_TYPEIDENTIFIERS_DISPLAY_GET_INTERNALNAME_OFFSET UNITYSDK_OFFSET(0x1A75E3D0)
#define SYSTEM_TYPEIDENTIFIERS_DISPLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x1A75E3A0)

namespace System
{
	inline static constexpr unsigned int TypeIdentifiers_Display_TypeDefinitionIndex = 440;

	class TypeIdentifiers_Display : public ::System::TypeNames_ATypeName
	{
	public:
		::System::String* displayName; // 0x10
		::System::String* internal_name; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_DISPLAY__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_DISPLAY_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::String* get_InternalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_DISPLAY_GET_INTERNALNAME_OFFSET))(this);
		}

		::System::String* GetInternalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TYPEIDENTIFIERS_DISPLAY_GETINTERNALNAME_OFFSET))(this);
		}
	};
}
