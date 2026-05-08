#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class Type; }

#define UTF8JSON_JSONFORMATTERATTRIBUTE_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1C1D5480)
#define UTF8JSON_JSONFORMATTERATTRIBUTE_GET_FORMATTERTYPE_OFFSET UNITYSDK_OFFSET(0x1C1D5460)
#define UTF8JSON_JSONFORMATTERATTRIBUTE_SET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1C1D5490)
#define UTF8JSON_JSONFORMATTERATTRIBUTE_SET_FORMATTERTYPE_OFFSET UNITYSDK_OFFSET(0x1C1D5470)
#define UTF8JSON_JSONFORMATTERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1D54B0)
#define UTF8JSON_JSONFORMATTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D54A0)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonFormatterAttribute_TypeDefinitionIndex = 85491;

	class JsonFormatterAttribute : public ::System::Attribute
	{
	public:
		::System::Type* _FormatterType_k__BackingField; // 0x10
		::Il2CppArray<::System::Object*>* _Arguments_k__BackingField; // 0x18

		::System::Void _ctor(::System::Type* formatterType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONFORMATTERATTRIBUTE__CTOR_OFFSET))(this, formatterType);
		}

		::System::Void _ctor_1(::System::Type* formatterType, ::Il2CppArray<::System::Object*>* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONFORMATTERATTRIBUTE__CTOR_1_OFFSET))(this, formatterType, arguments);
		}

		::System::Type* get_FormatterType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONFORMATTERATTRIBUTE_GET_FORMATTERTYPE_OFFSET))(this);
		}

		::System::Void set_FormatterType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONFORMATTERATTRIBUTE_SET_FORMATTERTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Object*>* get_Arguments()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UTF8JSON_JSONFORMATTERATTRIBUTE_GET_ARGUMENTS_OFFSET))(this);
		}

		::System::Void set_Arguments(::Il2CppArray<::System::Object*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONFORMATTERATTRIBUTE_SET_ARGUMENTS_OFFSET))(this, value);
		}
	};
}
