#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaSimpleTypeContent.h"

namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_CLONE_OFFSET UNITYSDK_OFFSET(0x1D0A0BB0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_ITEMTYPENAME_OFFSET UNITYSDK_OFFSET(0x1D0A0B10)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A0D50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleTypeList_TypeDefinitionIndex = 2190;

	class XmlSchemaSimpleTypeList : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent
	{
	public:
		::System::Xml::XmlQualifiedName* itemTypeName; // 0x50
		::System::Xml::Schema::XmlSchemaSimpleType* baseItemType; // 0x58
		::System::Xml::Schema::XmlSchemaSimpleType* itemType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST__CTOR_OFFSET))(this);
		}

		::System::Void set_ItemTypeName(::System::Xml::XmlQualifiedName* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_SET_ITEMTYPENAME_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPELIST_CLONE_OFFSET))(this);
		}
	};
}
