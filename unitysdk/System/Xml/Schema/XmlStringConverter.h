#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x1E4AA9E0)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1E4AA7E0)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E4AA6B0)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4AA700)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AA6A0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlStringConverter_TypeDefinitionIndex = 2213;

	class XmlStringConverter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER__CTOR_OFFSET))(this, schemaType);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CREATE_OFFSET))(schemaType);
		}

		::System::String* ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_TOSTRING_OFFSET))(this, value, nsResolver);
		}

		::System::Object* ChangeType(::System::String* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeType_1(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_1_OFFSET))(this, value, destinationType, nsResolver);
		}
	};
}
