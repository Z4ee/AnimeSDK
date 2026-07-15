#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlName; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }

#define SYSTEM_XML_DOMNAMETABLE_ADDNAME_OFFSET UNITYSDK_OFFSET(0x19F7F250)
#define SYSTEM_XML_DOMNAMETABLE_GETNAME_OFFSET UNITYSDK_OFFSET(0x19F7F000)
#define SYSTEM_XML_DOMNAMETABLE_GROW_OFFSET UNITYSDK_OFFSET(0x19F7F810)
#define SYSTEM_XML_DOMNAMETABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F7EF80)

namespace System::Xml
{
	inline static constexpr unsigned int DomNameTable_TypeDefinitionIndex = 1883;

	class DomNameTable : public ::System::Object
	{
	public:
		::System::Xml::XmlDocument* ownerDocument; // 0x10
		::Il2CppArray<::System::Xml::XmlName*>* entries; // 0x18
		::System::Xml::XmlNameTable* nameTable; // 0x20
		::System::Int32 mask; // 0x28
		::System::Int32 count; // 0x2C

		::System::Void _ctor(::System::Xml::XmlDocument* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE__CTOR_OFFSET))(this, a1);
		}

		::System::Xml::XmlName* GetName(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Xml::Schema::IXmlSchemaInfo* a4)
		{
			return ((::System::Xml::XmlName*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE_GETNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Xml::XmlName* AddName(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Xml::Schema::IXmlSchemaInfo* a4)
		{
			return ((::System::Xml::XmlName*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::Schema::IXmlSchemaInfo*))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE_ADDNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Grow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_DOMNAMETABLE_GROW_OFFSET))(this);
		}
	};
}
