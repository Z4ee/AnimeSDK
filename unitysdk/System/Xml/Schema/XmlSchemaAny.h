#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaContentProcessing.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaParticle.h"

namespace System { class String; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class NamespaceList; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_ALLOWS_OFFSET UNITYSDK_OFFSET(0x1DE6A1D0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_BUILDNAMESPACELISTV1COMPAT_OFFSET UNITYSDK_OFFSET(0x1DE6A150)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_BUILDNAMESPACELIST_OFFSET UNITYSDK_OFFSET(0x1DE6A0E0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_NAMESTRING_OFFSET UNITYSDK_OFFSET(0x1DE69AC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_PROCESSCONTENTSCORRECT_OFFSET UNITYSDK_OFFSET(0x1DE69AA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_RESOLVEDNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1DE69A40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAANY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE6A210)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaAny_TypeDefinitionIndex = 2117;

	class XmlSchemaAny : public ::System::Xml::Schema::XmlSchemaParticle
	{
	public:
		::System::String* ns; // 0x78
		::System::Xml::Schema::NamespaceList* namespaceList; // 0x80
		::System::Xml::Schema::XmlSchemaContentProcessing processContents; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY__CTOR_OFFSET))(this);
		}

		::System::String* get_ResolvedNamespace()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_RESOLVEDNAMESPACE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaContentProcessing get_ProcessContentsCorrect()
		{
			return ((::System::Xml::Schema::XmlSchemaContentProcessing(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_PROCESSCONTENTSCORRECT_OFFSET))(this);
		}

		::System::String* get_NameString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_GET_NAMESTRING_OFFSET))(this);
		}

		::System::Void BuildNamespaceList(::System::String* targetNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_BUILDNAMESPACELIST_OFFSET))(this, targetNamespace);
		}

		::System::Void BuildNamespaceListV1Compat(::System::String* targetNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_BUILDNAMESPACELISTV1COMPAT_OFFSET))(this, targetNamespace);
		}

		::System::Boolean Allows(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAANY_ALLOWS_OFFSET))(this, qname);
		}
	};
}
