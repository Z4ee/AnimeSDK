#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNameTable.h"

namespace System { class String; }
namespace System::Xml { class NameTable_Entry; }

#define SYSTEM_XML_NAMETABLE_ADDENTRY_OFFSET UNITYSDK_OFFSET(0x1BACD850)
#define SYSTEM_XML_NAMETABLE_ADD_1_OFFSET UNITYSDK_OFFSET(0x1BAC8F40)
#define SYSTEM_XML_NAMETABLE_ADD_OFFSET UNITYSDK_OFFSET(0x1BABC950)
#define SYSTEM_XML_NAMETABLE_GET_OFFSET UNITYSDK_OFFSET(0x1BACDA20)
#define SYSTEM_XML_NAMETABLE_GROW_OFFSET UNITYSDK_OFFSET(0x1BACDBE0)
#define SYSTEM_XML_NAMETABLE_TEXTEQUALS_OFFSET UNITYSDK_OFFSET(0x1BACD960)
#define SYSTEM_XML_NAMETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BACD7D0)

namespace System::Xml
{
	inline static constexpr unsigned int NameTable_TypeDefinitionIndex = 1928;

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

		::System::String* Add(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_ADD_OFFSET))(this, a1);
		}

		::System::String* Add_1(::Il2CppArray<::System::Char>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_ADD_1_OFFSET))(this, a1, a2, a3);
		}

		::System::String* Get(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_GET_OFFSET))(this, a1);
		}

		::System::String* AddEntry(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_ADDENTRY_OFFSET))(this, a1, a2);
		}

		::System::Void Grow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_GROW_OFFSET))(this);
		}

		static ::System::Boolean TextEquals(::System::String* a1, ::Il2CppArray<::System::Char>* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_NAMETABLE_TEXTEQUALS_OFFSET))(a1, a2, a3, a4);
		}
	};
}
