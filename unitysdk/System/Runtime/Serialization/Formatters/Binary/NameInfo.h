#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalArrayTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_ISSEALED_OFFSET UNITYSDK_OFFSET(0x163D3420)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_NINAME_OFFSET UNITYSDK_OFFSET(0x163D3470)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x163D3400)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_SET_NINAME_OFFSET UNITYSDK_OFFSET(0x163D34B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x163D33F0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int NameInfo_TypeDefinitionIndex = 1189;

	class NameInfo : public ::System::Object
	{
	public:
		::System::Type* NItype; // 0x10
		::System::String* NIFullName; // 0x18
		::System::Boolean NIisSealed; // 0x20
		::System::Boolean NIisParentTypeOnObject; // 0x21
		::System::Boolean NIisArrayItem; // 0x22
		::System::Boolean NIisArray; // 0x23
		::System::Boolean NItransmitTypeOnObject; // 0x24
		::System::Boolean NIsealedStatusChecked; // 0x25
		::System::Boolean NItransmitTypeOnMember; // 0x26
		::System::Int64 NIassemId; // 0x28
		::System::Int64 NIobjectId; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE NIprimitiveTypeEnum; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE NIarrayEnum; // 0x3C

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

		::System::Void set_NIname(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_SET_NINAME_OFFSET))(this, value);
		}
	};
}
