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

#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET UNITYSDK_OFFSET(0x1E804590)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET UNITYSDK_OFFSET(0x1E805E60)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_1_OFFSET UNITYSDK_OFFSET(0x1E805F50)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_2_OFFSET UNITYSDK_OFFSET(0x1E806210)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_3_OFFSET UNITYSDK_OFFSET(0x1E8064C0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_4_OFFSET UNITYSDK_OFFSET(0x1E8067A0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_5_OFFSET UNITYSDK_OFFSET(0x1E806A60)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_6_OFFSET UNITYSDK_OFFSET(0x1E806D20)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_7_OFFSET UNITYSDK_OFFSET(0x1E807030)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1E805AC0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1E804200)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIMEOFFSET_OFFSET UNITYSDK_OFFSET(0x1E804A00)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIME_OFFSET UNITYSDK_OFFSET(0x1E804660)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x1E804BC0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x1E804D80)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT32_OFFSET UNITYSDK_OFFSET(0x1E805110)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT64_OFFSET UNITYSDK_OFFSET(0x1E805510)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TONAVIGATOR_OFFSET UNITYSDK_OFFSET(0x1E807D60)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x1E805910)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8085D0)
#define SYSTEM_XML_SCHEMA_XMLANYCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E804180)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAnyConverter_TypeDefinitionIndex = 2230;

	class XmlAnyConverter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_AnyAtomic()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlAnyConverter_TypeDefinitionIndex)->GetStaticField(0x19310);
		}
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_Item()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlAnyConverter_TypeDefinitionIndex)->GetStaticField(0x19318);
		}

		::System::Void _ctor(::System::Xml::Schema::XmlTypeCode a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER__CCTOR_OFFSET))();
		}

		::System::Boolean ToBoolean(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::DateTime ToDateTime(::System::Object* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIME_OFFSET))(this, a1);
		}

		::System::DateTimeOffset ToDateTimeOffset(::System::Object* a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODATETIMEOFFSET_OFFSET))(this, a1);
		}

		::System::Decimal ToDecimal(::System::Object* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODECIMAL_OFFSET))(this, a1);
		}

		::System::Double ToDouble(::System::Object* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TODOUBLE_OFFSET))(this, a1);
		}

		::System::Int32 ToInt32(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT32_OFFSET))(this, a1);
		}

		::System::Int64 ToInt64(::System::Object* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOINT64_OFFSET))(this, a1);
		}

		::System::Single ToSingle(::System::Object* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Object* ChangeType(::System::Boolean a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Boolean, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_1(::System::DateTime a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::DateTime, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_1_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_2(::System::Decimal a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Decimal, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_2_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_3(::System::Double a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Double, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_3_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_4(::System::Int32 a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_4_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_5(::System::Int64 a1, ::System::Type* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int64, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_5_OFFSET))(this, a1, a2);
		}

		::System::Object* ChangeType_6(::System::String* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_6_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeType_7(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPE_7_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeTypeWildcardDestination(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDDESTINATION_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeTypeWildcardSource(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_CHANGETYPEWILDCARDSOURCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Xml::XPath::XPathNavigator* ToNavigator(::System::Xml::XPath::XPathNavigator* a1)
		{
			return ((::System::Xml::XPath::XPathNavigator*(*)(::PVOID, ::System::Xml::XPath::XPathNavigator*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYCONVERTER_TONAVIGATOR_OFFSET))(this, a1);
		}
	};
}
