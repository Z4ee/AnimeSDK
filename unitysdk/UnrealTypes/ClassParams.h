#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnrealTypes { class Class; }
namespace UnrealTypes { class PropertyParamsBase; }

#define UNREALTYPES_CLASSPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E382BD0)

namespace UnrealTypes
{
	inline static constexpr unsigned int ClassParams_TypeDefinitionIndex = 28356;

	class ClassParams : public ::System::Object
	{
	public:
		::Il2CppArray<::UnrealTypes::PropertyParamsBase*>* PropertyArray; // 0x10
		::System::String* Namespace; // 0x18
		::System::String* Name; // 0x20
		::UnrealTypes::Class* Super; // 0x28
		::System::Type* Type; // 0x30
		::System::UInt32 TypeId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASSPARAMS__CTOR_OFFSET))(this);
		}
	};
}
