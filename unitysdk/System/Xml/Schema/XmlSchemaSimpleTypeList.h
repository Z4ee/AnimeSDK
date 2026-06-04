#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaSimpleTypeContent.h"

namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_GET_BASEITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1AE5FE70)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_BASEITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1AE5FE80)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_ITEMTYPE_OFFSET UNITYSDK_OFFSET(0x1AE5FE60)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE5FE90)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleTypeList_TypeDefinitionIndex = 2202;

	class XmlSchemaSimpleTypeList : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent
	{
	public:
		::System::Xml::Schema::XmlSchemaSimpleType* itemType; // 0x10
		::System::Xml::Schema::XmlSchemaSimpleType* baseItemType; // 0x18
		::System::Xml::XmlQualifiedName* itemTypeName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST__CTOR_OFFSET))(this);
		}

		::System::Void set_ItemType(::System::Xml::Schema::XmlSchemaSimpleType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_ITEMTYPE_OFFSET))(this, a1);
		}

		::System::Xml::Schema::XmlSchemaSimpleType* get_BaseItemType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_GET_BASEITEMTYPE_OFFSET))(this);
		}

		::System::Void set_BaseItemType(::System::Xml::Schema::XmlSchemaSimpleType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_BASEITEMTYPE_OFFSET))(this, a1);
		}
	};
}
