#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Xml/XPath/XPathItem.h"
#include "unitysdk/System/Xml/XPath/XPathNamespaceScope.h"
#include "unitysdk/System/Xml/XPath/XPathNodeType.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }
namespace System::Xml::XPath { class XPathNavigatorKeyComparer; }

#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1DD275E0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1DD27DB0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x1DD24A70)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_UNDERLYINGOBJECT_OFFSET UNITYSDK_OFFSET(0x1DD27BF0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1DD251B0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASDATETIME_OFFSET UNITYSDK_OFFSET(0x1DD25680)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x1DD25B50)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASINT_OFFSET UNITYSDK_OFFSET(0x1DD26020)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUEASLONG_OFFSET UNITYSDK_OFFSET(0x1DD264F0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1DD24F50)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_ISTEXT_OFFSET UNITYSDK_OFFSET(0x1DD27DF0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1DD26F80)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1DD27280)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_MOVETONAMESPACE_OFFSET UNITYSDK_OFFSET(0x1DD27C00)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD26ED0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD24A60)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR_VALUEAS_OFFSET UNITYSDK_OFFSET(0x1DD269C0)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD27E10)
#define SYSTEM_XML_XPATH_XPATHNAVIGATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD27E00)

namespace System::Xml::XPath
{
	inline static constexpr unsigned int XPathNavigator_TypeDefinitionIndex = 1848;

	class XPathNavigator : public ::System::Xml::XPath::XPathItem
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_UniqueIdTbl()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(XPathNavigator_TypeDefinitionIndex)->GetStaticField(0x1D50);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_ContentKindMasks()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(XPathNavigator_TypeDefinitionIndex)->GetStaticField(0x1D58);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_NodeTypeLetter()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(XPathNavigator_TypeDefinitionIndex)->GetStaticField(0x1D60);
		}
		static ::System::Xml::XPath::XPathNavigatorKeyComparer** StaticGet_comparer()
		{
			return (::System::Xml::XPath::XPathNavigatorKeyComparer**)Il2CppClass::FromTypeDefinitionIndex(XPathNavigator_TypeDefinitionIndex)->GetStaticField(0x1D68);
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

		::System::Object* ValueAs(::System::Type* returnType, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_VALUEAS_OFFSET))(this, returnType, nsResolver);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* LookupPrefix(::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_LOOKUPPREFIX_OFFSET))(this, namespaceURI);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}

		::System::Object* get_UnderlyingObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_UNDERLYINGOBJECT_OFFSET))(this);
		}

		::System::Boolean MoveToNamespace(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_MOVETONAMESPACE_OFFSET))(this, name);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_GET_SCHEMAINFO_OFFSET))(this);
		}

		static ::System::Boolean IsText(::System::Xml::XPath::XPathNodeType type)
		{
			return ((::System::Boolean(*)(::System::Xml::XPath::XPathNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XPATH_XPATHNAVIGATOR_ISTEXT_OFFSET))(type);
		}
	};
}
