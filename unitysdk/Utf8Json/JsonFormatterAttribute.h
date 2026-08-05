#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class Object; }
namespace System { class Type; }

#define UTF8JSON_JSONFORMATTERATTRIBUTE_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F915160)
#define UTF8JSON_JSONFORMATTERATTRIBUTE_GET_FORMATTERTYPE_OFFSET UNITYSDK_OFFSET(0x1F915140)
#define UTF8JSON_JSONFORMATTERATTRIBUTE_SET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x1F915170)
#define UTF8JSON_JSONFORMATTERATTRIBUTE_SET_FORMATTERTYPE_OFFSET UNITYSDK_OFFSET(0x1F915150)
#define UTF8JSON_JSONFORMATTERATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F915190)
#define UTF8JSON_JSONFORMATTERATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F915180)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonFormatterAttribute_TypeDefinitionIndex = 94998;

	class JsonFormatterAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::Object*>* _Arguments_k__BackingField; // 0x10
		::System::Type* _FormatterType_k__BackingField; // 0x18

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
