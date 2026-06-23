#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaSimpleTypeContent.h"

namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class XmlSchemaObject; }
namespace System::Xml::Schema { class XmlSchemaObjectCollection; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_CLONE_OFFSET UNITYSDK_OFFSET(0x1D4739F0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D473C50)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaSimpleTypeUnion_TypeDefinitionIndex = 2192;

	class XmlSchemaSimpleTypeUnion : public ::System::Xml::Schema::XmlSchemaSimpleTypeContent
	{
	public:
		::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>* baseMemberTypes; // 0x50
		::Il2CppArray<::System::Xml::XmlQualifiedName*>* memberTypes; // 0x58
		::System::Xml::Schema::XmlSchemaObjectCollection* baseTypes; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION__CTOR_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaObject* Clone()
		{
			return ((::System::Xml::Schema::XmlSchemaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMASIMPLETYPEUNION_CLONE_OFFSET))(this);
		}
	};
}
