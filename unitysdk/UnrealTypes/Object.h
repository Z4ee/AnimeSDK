#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class String; }
namespace UnrealTypes { class Class; }

#define UNREALTYPES_OBJECT_GET_CLASS_OFFSET UNITYSDK_OFFSET(0x1D1B6850)
#define UNREALTYPES_OBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1AE800)

namespace UnrealTypes
{
	inline static constexpr unsigned int Object_TypeDefinitionIndex = 27730;

	class Object : public ::System::Object
	{
	public:
		::UnrealTypes::Class* ClassPrivate; // 0x10
		::System::String* Name; // 0x18
		::UnrealTypes::Object* OuterPrivate; // 0x20
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> ObjectHandle; // 0x28
		::Foundation::Unreal::FName NamePrivate; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT__CTOR_OFFSET))(this);
		}

		::UnrealTypes::Class* get_Class()
		{
			return ((::UnrealTypes::Class*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECT_GET_CLASS_OFFSET))(this);
		}
	};
}
