#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalArrayTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_ISSEALED_OFFSET UNITYSDK_OFFSET(0x1C8C7720)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_NINAME_OFFSET UNITYSDK_OFFSET(0x1C8C7770)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1C8C7700)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C76F0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int NameInfo_TypeDefinitionIndex = 1235;

	class NameInfo : public ::System::Object
	{
	public:
		::System::String* NIFullName; // 0x10
		::System::Type* NItype; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE NIprimitiveTypeEnum; // 0x20
		::System::Boolean NItransmitTypeOnMember; // 0x24
		::System::Boolean NIsealedStatusChecked; // 0x25
		::System::Boolean NIisArrayItem; // 0x26
		::System::Boolean NIisParentTypeOnObject; // 0x27
		::System::Boolean NIisSealed; // 0x28
		::System::Boolean NIisArray; // 0x29
		::System::Boolean NItransmitTypeOnObject; // 0x2A
		::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE NIarrayEnum; // 0x2C
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
