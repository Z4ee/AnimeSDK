#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x19D3B540)
#define SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x19D3B4F0)
#define SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D3B1B0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlUnionConverter_TypeDefinitionIndex = 2219;

	class XmlUnionConverter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::Il2CppArray<::System::Xml::Schema::XmlValueConverter*>* converters; // 0x28
		::System::Boolean hasListMember; // 0x30
		::System::Boolean hasAtomicMember; // 0x31

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER__CTOR_OFFSET))(this, schemaType);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER_CREATE_OFFSET))(schemaType);
		}

		::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLUNIONCONVERTER_CHANGETYPE_OFFSET))(this, value, destinationType, nsResolver);
		}
	};
}
