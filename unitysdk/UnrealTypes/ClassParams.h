#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnrealTypes { class Class; }

#define UNREALTYPES_CLASSPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD99450)

namespace UnrealTypes
{
	inline static constexpr unsigned int ClassParams_TypeDefinitionIndex = 25263;

	class ClassParams : public ::System::Object
	{
	public:
		::System::Type* Type; // 0x10
		::System::String* Namespace; // 0x18
		::UnrealTypes::Class* Super; // 0x20
		::System::String* Name; // 0x28
		::System::UInt32 TypeId; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASSPARAMS__CTOR_OFFSET))(this);
		}
	};
}
