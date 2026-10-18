#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlBaseConverter.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections { class IList; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGELISTTYPE_OFFSET UNITYSDK_OFFSET(0x1EED1560)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x1EEDFA70)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATEINVALIDCLRMAPPINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1EEDFC60)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x1EEDF820)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_ISLISTTYPE_OFFSET UNITYSDK_OFFSET(0x1EEDFBA0)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_LISTASSTRING_OFFSET UNITYSDK_OFFSET(0x1EEE00F0)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_STRINGASLIST_OFFSET UNITYSDK_OFFSET(0x1EEE0870)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_TOLIST_OFFSET UNITYSDK_OFFSET(0x1EEE0990)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEDF7E0)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1EEDF810)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EED1340)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlListConverter_TypeDefinitionIndex = 2232;

	class XmlListConverter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::System::Xml::Schema::XmlValueConverter* atomicConverter; // 0x28

		::System::Void _ctor(::System::Xml::Schema::XmlBaseConverter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlBaseConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlBaseConverter* a1, ::System::Type* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlBaseConverter*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::Xml::Schema::XmlSchemaType* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlValueConverter* a1)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlValueConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATE_OFFSET))(a1);
		}

		::System::Object* ChangeType(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGETYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* ChangeListType(::System::Object* a1, ::System::Type* a2, ::System::Xml::IXmlNamespaceResolver* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGELISTTYPE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsListType(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_ISLISTTYPE_OFFSET))(this, a1);
		}

		::System::Collections::IList* ToList(::System::Object* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::Collections::IList*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_TOLIST_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::System::String*>* StringAsList(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_STRINGASLIST_OFFSET))(this, a1);
		}

		::System::String* ListAsString(::System::Collections::IEnumerable* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_LISTASSTRING_OFFSET))(this, a1, a2);
		}

		::System::Exception* CreateInvalidClrMappingException(::System::Type* a1, ::System::Type* a2)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATEINVALIDCLRMAPPINGEXCEPTION_OFFSET))(this, a1, a2);
		}
	};
}
