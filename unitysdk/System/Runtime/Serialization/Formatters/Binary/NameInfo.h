#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalArrayTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_ISSEALED_OFFSET UNITYSDK_OFFSET(0x179FFD50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_GET_NINAME_OFFSET UNITYSDK_OFFSET(0x179FFDA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x179FFD30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO_SET_NINAME_OFFSET UNITYSDK_OFFSET(0x179FFDE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_NAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x179FFD20)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int NameInfo_TypeDefinitionIndex = 1191;

	class NameInfo : public ::System::Object
	{
	public:
		::System::String* NIFullName; // 0x10
		::System::Type* NItype; // 0x18
		::System::Int64 NIobjectId; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE NIarrayEnum; // 0x28
		::System::Boolean NItransmitTypeOnMember; // 0x2C
		::System::Boolean NItransmitTypeOnObject; // 0x2D
		::System::Boolean NIisArray; // 0x2E
		::System::Boolean NIisParentTypeOnObject; // 0x2F
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE NIprimitiveTypeEnum; // 0x30
		::System::Boolean NIisArrayItem; // 0x34
		::System::Boolean NIsealedStatusChecked; // 0x35
		::System::Boolean NIisSealed; // 0x36
		::System::Int64 NIassemId; // 0x38

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
