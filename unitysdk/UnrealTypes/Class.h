#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/Struct.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

#define UNREALTYPES_CLASS_GET_CLASSHANDLE_OFFSET UNITYSDK_OFFSET(0x1AD993E0)
#define UNREALTYPES_CLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD99430)

namespace UnrealTypes
{
	inline static constexpr unsigned int Class_TypeDefinitionIndex = 25220;

	class Class : public ::UnrealTypes::Struct
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASS__CTOR_OFFSET))(this);
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Class*> get_ClassHandle()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Class*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASS_GET_CLASSHANDLE_OFFSET))(this);
		}
	};
}
