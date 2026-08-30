#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x1B070B20)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x1B070DB0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1B070890)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x1B06F940)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1B06FEA0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_2_OFFSET UNITYSDK_OFFSET(0x1B070180)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B06FE80)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_1_OFFSET UNITYSDK_OFFSET(0x1B06F9B0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_2_OFFSET UNITYSDK_OFFSET(0x1B06FC70)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1B06F990)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1B070500)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1B070680)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B0703F0)
#define SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B06F930)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlDateTimeConverter_TypeDefinitionIndex = 2225;

	class XmlDateTimeConverter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CREATE_OFFSET))(a1);
		}

		::System::DateTime ToDateTime(::System::DateTimeOffset a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime_1(::System::String* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_1_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime_2(::System::Object* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIME_2_OFFSET))(this, a1);
		}

		::System::DateTimeOffset ToDateTimeOffset(::System::DateTime a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_OFFSET))(this, a1);
		}

		::System::DateTimeOffset ToDateTimeOffset_1(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_1_OFFSET))(this, a1);
		}

		::System::DateTimeOffset ToDateTimeOffset_2(::System::Object* a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TODATETIMEOFFSET_2_OFFSET))(this, a1);
		}

		::System::String* ToString(::System::DateTime a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* ToString_1(::System::DateTimeOffset a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::Object* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_TOSTRING_2_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType(::System::DateTime a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::DateTime, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_1(::System::String* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeType_2(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLDATETIMECONVERTER_CHANGETYPE_2_OFFSET))(this, a1, a2, a3);
		}
	};
}
