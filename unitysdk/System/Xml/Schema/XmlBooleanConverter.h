#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x1D09D200)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x1D09D450)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1D09CF90)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D09CB10)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_1_OFFSET UNITYSDK_OFFSET(0x1D09CBE0)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1D09CB60)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1D09CDF0)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D09CD60)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D09CB00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlBooleanConverter_TypeDefinitionIndex = 2211;

	class XmlBooleanConverter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER__CTOR_OFFSET))(this, schemaType);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CREATE_OFFSET))(schemaType);
		}

		::System::Boolean ToBoolean(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_OFFSET))(this, value);
		}

		::System::Boolean ToBoolean_1(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_1_OFFSET))(this, value);
		}

		::System::String* ToString(::System::Boolean value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_OFFSET))(this, value);
		}

		::System::String* ToString_1(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_1_OFFSET))(this, value, nsResolver);
		}

		::System::Object* ChangeType(::System::Boolean value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_1(::System::String* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_1_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeType_2(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_2_OFFSET))(this, value, destinationType, nsResolver);
		}
	};
}
