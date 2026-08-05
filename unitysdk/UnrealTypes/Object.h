#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class String; }
namespace UnrealTypes { class Class; }

#define UNREALTYPES_OBJECT_GET_CLASS_OFFSET UNITYSDK_OFFSET(0x1E38FEE0)
#define UNREALTYPES_OBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E384CB0)

namespace UnrealTypes
{
	inline static constexpr unsigned int Object_TypeDefinitionIndex = 28333;

	class Object : public ::System::Object
	{
	public:
		::UnrealTypes::Class* ClassPrivate; // 0x10
		::UnrealTypes::Object* OuterPrivate; // 0x18
		::System::String* Name; // 0x20
		::Foundation::Unreal::FName NamePrivate; // 0x28
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Object*> ObjectHandle; // 0x30

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
