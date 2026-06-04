#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Xml/XPath/XPathItem.h"
#include "unitysdk/System/Xml/XPath/XPathNamespaceScope.h"
#include "unitysdk/System/Xml/XPath/XPathNodeType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::XPath { class XPathNavigatorKeyComparer; }

#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1AEA54A0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x1AEA2890)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_UNDERLYINGOBJECT_OFFSET UNITYSDK_OFFSET(0x1AEA5310)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1AEA2FD0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASDATETIME_OFFSET UNITYSDK_OFFSET(0x1AEA3490)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1AEA3950)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASINT_OFFSET UNITYSDK_OFFSET(0x1AEA3E10)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASLONG_OFFSET UNITYSDK_OFFSET(0x1AEA42D0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1AEA2D60)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x1AEA2680)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_ISTEXT_OFFSET UNITYSDK_OFFSET(0x1AEA5500)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AEA4D40)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1AEA5010)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_MOVETONAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AEA5320)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1AEA4C90)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AEA2670)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_VALUEAS_OFFSET UNITYSDK_OFFSET(0x1AEA4790)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AEA5520)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA5510)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathNavigator_TypeDefinitionIndex = 1965;

	class XPathNavigator : public ::System::Xml::XPath::XPathItem
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_NodeTypeLetter()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(XPathNavigator_TypeDefinitionIndex)->GetStaticField(0x17390);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ContentKindMasks()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(XPathNavigator_TypeDefinitionIndex)->GetStaticField(0x17398);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_UniqueIdTbl()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(XPathNavigator_TypeDefinitionIndex)->GetStaticField(0x173A0);
		}
		static ::System::Xml::XPath::XPathNavigatorKeyComparer** StaticGet_comparer()
		{
			return (::System::Xml::XPath::XPathNavigatorKeyComparer**)Il2CppClass::FromTypeDefinitionIndex(XPathNavigator_TypeDefinitionIndex)->GetStaticField(0x173A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_TOSTRING_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaType* get_XmlType()
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_XMLTYPE_OFFSET))(this);
		}

		::System::Object* get_TypedValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_TYPEDVALUE_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Boolean get_ValueAsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASBOOLEAN_OFFSET))(this);
		}

		::System::DateTime get_ValueAsDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASDATETIME_OFFSET))(this);
		}

		::System::Double get_ValueAsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASDOUBLE_OFFSET))(this);
		}

		::System::Int32 get_ValueAsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASINT_OFFSET))(this);
		}

		::System::Int64 get_ValueAsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASLONG_OFFSET))(this);
		}

		::System::Object* ValueAs(::System::Type* a1, ::System::Xml::IXmlNamespaceResolver* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_VALUEAS_OFFSET))(this, a1, a2);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_LOOKUPNAMESPACE_OFFSET))(this, a1);
		}

		::System::String* LookupPrefix(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_LOOKUPPREFIX_OFFSET))(this, a1);
		}

		::System::Object* get_UnderlyingObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_UNDERLYINGOBJECT_OFFSET))(this);
		}

		::System::Boolean MoveToNamespace(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_MOVETONAMESPACE_OFFSET))(this, a1);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_SCHEMAINFO_OFFSET))(this);
		}

		static ::System::Boolean IsText(::System::Xml::XPath::XPathNodeType a1)
		{
			return ((::System::Boolean(*)(::System::Xml::XPath::XPathNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_ISTEXT_OFFSET))(a1);
		}
	};
}
