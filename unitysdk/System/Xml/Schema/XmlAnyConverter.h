#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlValueConverter; }
namespace System::Xml::XPath { class XPathNavigator; }

#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET UNITYSDK_OFFSET(0x19FD2AD0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET UNITYSDK_OFFSET(0x19FD4370)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x19FD4460)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x19FD4720)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_3_OFFSET UNITYSDK_OFFSET(0x19FD49D0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_4_OFFSET UNITYSDK_OFFSET(0x19FD4CB0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_5_OFFSET UNITYSDK_OFFSET(0x19FD4F70)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_6_OFFSET UNITYSDK_OFFSET(0x19FD5230)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_7_OFFSET UNITYSDK_OFFSET(0x19FD5540)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x19FD3FD0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x19FD26A0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x19FD2FD0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x19FD2BA0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x19FD3120)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x19FD3270)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x19FD36A0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x19FD3A80)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TONAVIGATOR_OFFSET UNITYSDK_OFFSET(0x19FD62D0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x19FD3E80)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FD6A00)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FD2620)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAnyConverter_TypeDefinitionIndex = 2219;

	class XmlAnyConverter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_AnyAtomic()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlAnyConverter_TypeDefinitionIndex)->GetStaticField(0xD180);
		}
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_Item()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlAnyConverter_TypeDefinitionIndex)->GetStaticField(0xD188);
		}

		::System::Void _ctor(::System::Xml::Schema::XmlTypeCode typeCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER__CTOR_OFFSET))(this, typeCode);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER__CCTOR_OFFSET))();
		}

		::System::Boolean ToBoolean(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOBOOLEAN_OFFSET))(this, value);
		}

		::System::DateTime ToDateTime(::System::Object* value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIME_OFFSET))(this, value);
		}

		::System::DateTimeOffset ToDateTimeOffset(::System::Object* value)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIMEOFFSET_OFFSET))(this, value);
		}

		::System::Decimal ToDecimal(::System::Object* value)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODECIMAL_OFFSET))(this, value);
		}

		::System::Double ToDouble(::System::Object* value)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODOUBLE_OFFSET))(this, value);
		}

		::System::Int32 ToInt32(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT32_OFFSET))(this, value);
		}

		::System::Int64 ToInt64(::System::Object* value)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT64_OFFSET))(this, value);
		}

		::System::Single ToSingle(::System::Object* value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOSINGLE_OFFSET))(this, value);
		}

		::System::Object* ChangeType(::System::Boolean value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_1(::System::DateTime value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::DateTime, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_1_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_2(::System::Decimal value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Decimal, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_2_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_3(::System::Double value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_3_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_4(::System::Int32 value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_4_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_5(::System::Int64 value, ::System::Type* destinationType)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_5_OFFSET))(this, value, destinationType);
		}

		::System::Object* ChangeType_6(::System::String* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_6_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeType_7(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_7_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Xml::XPath::XPathNavigator* ToNavigator(::System::Xml::XPath::XPathNavigator* nav)
		{
			return ((::System::Xml::XPath::XPathNavigator*(*)(::PVOID, ::System::Xml::XPath::XPathNavigator*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TONAVIGATOR_OFFSET))(this, nav);
		}
	};
}
