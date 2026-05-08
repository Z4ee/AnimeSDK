#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNREALTYPES_FIELDCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADA2A20)

namespace UnrealTypes
{
	inline static constexpr unsigned int FieldClass_TypeDefinitionIndex = 25234;

	class FieldClass : public ::System::Object
	{
	public:
		::UnrealTypes::FieldClass* SuperClass; // 0x10
		::System::String* Name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FIELDCLASS__CTOR_OFFSET))(this);
		}
	};
}
