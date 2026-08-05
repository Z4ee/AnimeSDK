#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNameTable.h"

namespace System { class String; }
namespace System::Xml { class NameTable_Entry; }

#define SYSTEM_XML_NAMETABLE_ADDENTRY_OFFSET UNITYSDK_OFFSET(0x1F067290)
#define SYSTEM_XML_NAMETABLE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1F0673C0)
#define SYSTEM_XML_NAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x1F067040)
#define SYSTEM_XML_NAMETABLE_GET_OFFSET UNITYSDK_OFFSET(0x1F067850)
#define SYSTEM_XML_NAMETABLE_GROW_OFFSET UNITYSDK_OFFSET(0x1F067A90)
#define SYSTEM_XML_NAMETABLE_TEXTEQUALS_OFFSET UNITYSDK_OFFSET(0x1F0676C0)
#define SYSTEM_XML_NAMETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F066FC0)

namespace System::Xml
{
	inline static constexpr unsigned int NameTable_TypeDefinitionIndex = 1797;

	class NameTable : public ::System::Xml::XmlNameTable
	{
	public:
		::Il2CppArray<::System::Xml::NameTable_Entry*>* entries; // 0x10
		::System::Int32 mask; // 0x18
		::System::Int32 count; // 0x1C
		::System::Int32 hashCodeRandomizer; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE__CTOR_OFFSET))(this);
		}

		::System::String* Add(::System::String* key)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_ADD_OFFSET))(this, key);
		}

		::System::String* Add_1(::Il2CppArray<::System::Char>* key, ::System::Int32 start, ::System::Int32 len)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_ADD_1_OFFSET))(this, key, start, len);
		}

		::System::String* Get(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_GET_OFFSET))(this, value);
		}

		::System::String* AddEntry(::System::String* str, ::System::Int32 hashCode)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_ADDENTRY_OFFSET))(this, str, hashCode);
		}

		::System::Void Grow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_GROW_OFFSET))(this);
		}

		static ::System::Boolean TextEquals(::System::String* str1, ::Il2CppArray<::System::Char>* str2, ::System::Int32 str2Start, ::System::Int32 str2Length)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_TEXTEQUALS_OFFSET))(str1, str2, str2Start, str2Length);
		}
	};
}
