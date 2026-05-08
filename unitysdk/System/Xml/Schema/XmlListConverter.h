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

#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGELISTTYPE_OFFSET UNITYSDK_OFFSET(0x19D372C0)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGETYPE_OFFSET UNITYSDK_OFFSET(0x19D371F0)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATEINVALIDCLRMAPPINGEXCEPTION_OFFSET UNITYSDK_OFFSET(0x19D37990)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATE_OFFSET UNITYSDK_OFFSET(0x19D37010)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_ISLISTTYPE_OFFSET UNITYSDK_OFFSET(0x19D37930)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_LISTASSTRING_OFFSET UNITYSDK_OFFSET(0x19D37DD0)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_STRINGASLIST_OFFSET UNITYSDK_OFFSET(0x19D38230)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_TOLIST_OFFSET UNITYSDK_OFFSET(0x19D38350)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19D36FD0)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19D37000)
#define SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D36FB0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlListConverter_TypeDefinitionIndex = 2218;

	class XmlListConverter : public ::System::Xml::Schema::XmlBaseConverter
	{
	public:
		::System::Xml::Schema::XmlValueConverter* atomicConverter; // 0x28

		::System::Void _ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlBaseConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_OFFSET))(this, atomicConverter);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlBaseConverter* atomicConverter, ::System::Type* clrTypeDefault)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlBaseConverter*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_1_OFFSET))(this, atomicConverter, clrTypeDefault);
		}

		::System::Void _ctor_2(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER__CTOR_2_OFFSET))(this, schemaType);
		}

		static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlValueConverter* atomicConverter)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::System::Xml::Schema::XmlValueConverter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATE_OFFSET))(atomicConverter);
		}

		::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGETYPE_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Object* ChangeListType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CHANGELISTTYPE_OFFSET))(this, value, destinationType, nsResolver);
		}

		::System::Boolean IsListType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_ISLISTTYPE_OFFSET))(this, type);
		}

		::System::Collections::IList* ToList(::System::Object* list, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Collections::IList*(*)(::PVOID, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_TOLIST_OFFSET))(this, list, nsResolver);
		}

		::System::Collections::Generic::List_1<::System::String*>* StringAsList(::System::String* value)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_STRINGASLIST_OFFSET))(this, value);
		}

		::System::String* ListAsString(::System::Collections::IEnumerable* list, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_LISTASSTRING_OFFSET))(this, list, nsResolver);
		}

		::System::Exception* CreateInvalidClrMappingException(::System::Type* sourceType, ::System::Type* destinationType)
		{
			return ((::System::Exception*(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLLISTCONVERTER_CREATEINVALIDCLRMAPPINGEXCEPTION_OFFSET))(this, sourceType, destinationType);
		}
	};
}
