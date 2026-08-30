#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x1E8215E0)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1E8213C0)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E821260)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8212B0)
#define SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E821250)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlStringConverter_TypeDefinitionIndex = 2228;

	class XmlStringConverter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CREATE_OFFSET))(a1);
		}

		::System::String* ToString(::System::Object* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_TOSTRING_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType(::System::String* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeType_1(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSTRINGCONVERTER_CHANGETYPE_1_OFFSET))(this, a1, a2, a3);
		}
	};
}
