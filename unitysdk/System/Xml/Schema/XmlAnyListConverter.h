#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlListConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlBaseConverter; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x19FD6BC0)
#define SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FD73D0)
#define SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19FD6A80)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAnyListConverter_TypeDefinitionIndex = 2220;

	class XmlAnyListConverter : public ::System::Xml::Schema::XmlListConverter
	{
	public:
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_AnyAtomicList()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlAnyListConverter_TypeDefinitionIndex)->GetStaticField(0xD850);
		}
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_ItemList()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlAnyListConverter_TypeDefinitionIndex)->GetStaticField(0xD858);
		}

		::System::Void _ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlBaseConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER__CTOR_OFFSET))(this, atomicConverter);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER__CCTOR_OFFSET))();
		}

		::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER_CHANGETYPE_OFFSET))(this, value, destinationType, nsResolver);
		}
	};
}
