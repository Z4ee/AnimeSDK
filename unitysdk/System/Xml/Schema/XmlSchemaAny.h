#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentProcessing.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaParticle.h"

namespace System { class String; }
namespace System::Xml::Schema { class NamespaceList; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_BUILDNAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x19674650)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_NAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x19674640)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_SET_PROCESSCONTENTS_OFFSET UNITYSDK_OFFSET(0x19674630)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY__CTOR_OFFSET UNITYSDK_OFFSET(0x196746B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAny_TypeDefinitionIndex = 2178;

	class XmlSchemaAny : public ::System::Xml::Schema::XmlSchemaParticle
	{
	public:
		::System::Xml::Schema::NamespaceList* namespaceList; // 0x38
		::System::String* ns; // 0x40
		::System::Xml::Schema::XmlSchemaContentProcessing processContents; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY__CTOR_OFFSET))(this);
		}

		::System::Void set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaContentProcessing))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_SET_PROCESSCONTENTS_OFFSET))(this, a1);
		}

		::System::Xml::Schema::NamespaceList* get_NamespaceList()
		{
			return ((::System::Xml::Schema::NamespaceList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_NAMESPACELIST_OFFSET))(this);
		}

		::System::Void BuildNamespaceList(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_BUILDNAMESPACELIST_OFFSET))(this, a1);
		}
	};
}
