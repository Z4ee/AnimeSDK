#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalArrayTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_ISSEALED_OFFSET UNITYSDK_OFFSET(0x1A5A8490)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_NINAME_OFFSET UNITYSDK_OFFSET(0x1A5A84E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1A5A8480)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A8470)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int NameInfo_TypeDefinitionIndex = 1236;

	class NameInfo : public ::System::Object
	{
	public:
		::System::Type* NItype; // 0x10
		::System::String* NIFullName; // 0x18
		::System::Boolean NIsealedStatusChecked; // 0x20
		::System::Boolean NIisArrayItem; // 0x21
		::System::Boolean NItransmitTypeOnObject; // 0x22
		::System::Boolean NIisArray; // 0x23
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE NIprimitiveTypeEnum; // 0x24
		::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE NIarrayEnum; // 0x28
		::System::Boolean NItransmitTypeOnMember; // 0x2C
		::System::Boolean NIisSealed; // 0x2D
		::System::Boolean NIisParentTypeOnObject; // 0x2E
		::System::Int64 NIassemId; // 0x30
		::System::Int64 NIobjectId; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_INIT_OFFSET))(this);
		}

		::System::Boolean get_IsSealed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_ISSEALED_OFFSET))(this);
		}

		::System::String* get_NIname()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_NINAME_OFFSET))(this);
		}
	};
}
