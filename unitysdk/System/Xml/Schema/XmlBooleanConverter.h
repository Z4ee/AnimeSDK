#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x1AE54860)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x1AE54AE0)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1AE545F0)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x1AE54160)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_1_OFFSET UNITYSDK_OFFSET(0x1AE54230)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1AE541B0)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1AE54440)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AE543E0)
#define SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE54150)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlBooleanConverter_TypeDefinitionIndex = 2215;

	class XmlBooleanConverter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CREATE_OFFSET))(a1);
		}

		::System::Boolean ToBoolean(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Boolean ToBoolean_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOBOOLEAN_1_OFFSET))(this, a1);
		}

		::System::String* ToString(::System::Boolean a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* ToString_1(::System::Object* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_TOSTRING_1_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType(::System::Boolean a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_1(::System::String* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeType_2(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLBOOLEANCONVERTER_CHANGETYPE_2_OFFSET))(this, a1, a2, a3);
		}
	};
}
