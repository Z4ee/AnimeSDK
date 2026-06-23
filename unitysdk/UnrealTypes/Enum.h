#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/EnumFlags.h"
#include "unitysdk/UnrealTypes/Object.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNREALTYPES_ENUM_GET_ENUMHANDLE_OFFSET UNITYSDK_OFFSET(0x1D1AE7B0)
#define UNREALTYPES_ENUM_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1D1ACDA0)
#define UNREALTYPES_ENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1AE880)
#define UNREALTYPES_ENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1ACD10)

namespace UnrealTypes
{
	inline static constexpr unsigned int Enum_TypeDefinitionIndex = 27707;

	class Enum : public ::UnrealTypes::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>** StaticGet_EnumUnderlyingTypeNameMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Enum_TypeDefinitionIndex)->GetStaticField(0x227D0);
		}
		::System::Type* UnderlyingType; // 0x38
		::System::String* NamespaceName; // 0x40
		::System::Type* EnumType; // 0x48
		::UnrealTypes::EnumFlags Flags; // 0x50
		::System::UInt32 TypeId; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM__CCTOR_OFFSET))();
		}

		::UnrealTypes::TObjectHandle_1<::UnrealTypes::Enum*> get_EnumHandle()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Enum*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM_GET_ENUMHANDLE_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_ENUM_GET_FULLNAME_OFFSET))(this);
		}
	};
}
