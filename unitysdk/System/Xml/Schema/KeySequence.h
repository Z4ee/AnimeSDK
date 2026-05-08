#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Schema { class TypedObject; }

#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A760F40)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A760540)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A760370)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_ISQUALIFIED_OFFSET UNITYSDK_OFFSET(0x1A7604D0)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A7603B0)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A761510)
#define SYSTEM_XML_SCHEMA_KEYSEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A760310)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int KeySequence_TypeDefinitionIndex = 1959;

	class KeySequence : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Xml::Schema::TypedObject*>* ks; // 0x10
		::System::Int32 dim; // 0x18
		::System::Int32 poscol; // 0x1C
		::System::Int32 posline; // 0x20
		::System::Int32 hashcode; // 0x24

		::System::Void _ctor(::System::Int32 dim, ::System::Int32 line, ::System::Int32 col)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE__CTOR_OFFSET))(this, dim, line, col);
		}

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Boolean IsQualified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_ISQUALIFIED_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_EQUALS_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_KEYSEQUENCE_TOSTRING_OFFSET))(this);
		}
	};
}
