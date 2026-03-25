#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x185AD4F0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x185AD880)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x185AD1F0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x185AC640)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_1_OFFSET UNITYSDK_OFFSET(0x185AC740)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x185AC690)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_1_OFFSET UNITYSDK_OFFSET(0x185AC9E0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_2_OFFSET UNITYSDK_OFFSET(0x185ACA90)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x185AC9D0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x185ACE50)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x185ACEE0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x185ACDC0)
#define SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x185AC630)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlNumeric2Converter_TypeDefinitionIndex = 2212;

	class XmlNumeric2Converter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER__CTOR_OFFSET))(this, schemaType);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CREATE_OFFSET))(schemaType);
		}

		::System::Double ToDouble(::System::String* value)
		{
			return ((::System::Double(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_OFFSET))(this, value);
		}

		::System::Double ToDouble_1(::System::Object* value)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TODOUBLE_1_OFFSET))(this, value);
		}

		::System::Single ToSingle(::System::Double value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_OFFSET))(this, value);
		}

		::System::Single ToSingle_1(::System::String* value)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_1_OFFSET))(this, value);
		}

		::System::Single ToSingle_2(::System::Object* value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSINGLE_2_OFFSET))(this, value);
		}

		::System::String* ToString(::System::Double value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_OFFSET))(this, value);
		}

		::System::String* ToString_1(::System::Single value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_1_OFFSET))(this, value);
		}

		::System::String* ToString_2(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_TOSTRING_2_OFFSET))(this, value, nsResolver);
		}

		::System::Object* ChangeType(::System::Double value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_1(::System::String* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_1_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeType_2(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLNUMERIC2CONVERTER_CHANGETYPE_2_OFFSET))(this, value, destinationType, nsResolver);
		}
	};
}
