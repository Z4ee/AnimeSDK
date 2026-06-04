#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlListConverter.h"

namespace System { class Object; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlBaseConverter; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1AE4A2B0)
#define SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE4AAD0)
#define SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4A190)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAnyListConverter_TypeDefinitionIndex = 2220;

	class XmlAnyListConverter : public ::System::Xml::Schema::XmlListConverter
	{
	public:
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_AnyAtomicList()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlAnyListConverter_TypeDefinitionIndex)->GetStaticField(0x15740);
		}
		static ::System::Xml::Schema::XmlValueConverter** StaticGet_ItemList()
		{
			return (::System::Xml::Schema::XmlValueConverter**)Il2CppClass::FromTypeDefinitionIndex(XmlAnyListConverter_TypeDefinitionIndex)->GetStaticField(0x15748);
		}

		::System::Void _ctor(::System::Xml::Schema::XmlBaseConverter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlBaseConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER__CCTOR_OFFSET))();
		}

		::System::Object* ChangeType(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLANYLISTCONVERTER_CHANGETYPE_OFFSET))(this, a1, a2, a3);
		}
	};
}
