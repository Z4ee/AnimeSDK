#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNREALTYPES_FIELDCLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1B5FB0)

namespace UnrealTypes
{
	inline static constexpr unsigned int FieldClass_TypeDefinitionIndex = 27724;

	class FieldClass : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnrealTypes::FieldClass* SuperClass; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_FIELDCLASS__CTOR_OFFSET))(this);
		}
	};
}
