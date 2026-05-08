#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MS::Internal::Xml::XPath { class Axis; }
namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Xml { class XmlNamespaceManager; }

#define SYSTEM_XML_SCHEMA_ASTTREE_COMPILEXPATH_OFFSET UNITYSDK_OFFSET(0x1AFF9DC0)
#define SYSTEM_XML_SCHEMA_ASTTREE_ISATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AFFA7A0)
#define SYSTEM_XML_SCHEMA_ASTTREE_ISDESCENDANTORSELF_OFFSET UNITYSDK_OFFSET(0x1AFFA7D0)
#define SYSTEM_XML_SCHEMA_ASTTREE_ISNAMETEST_OFFSET UNITYSDK_OFFSET(0x1AFFA770)
#define SYSTEM_XML_SCHEMA_ASTTREE_ISSELF_OFFSET UNITYSDK_OFFSET(0x1AFFA800)
#define SYSTEM_XML_SCHEMA_ASTTREE_SETURN_OFFSET UNITYSDK_OFFSET(0x1AFFA830)
#define SYSTEM_XML_SCHEMA_ASTTREE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFF9DA0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Asttree_TypeDefinitionIndex = 1945;

	class Asttree : public ::System::Object
	{
	public:
		::System::Collections::ArrayList* fAxisArray; // 0x10
		::System::String* xpathexpr; // 0x18
		::System::Xml::XmlNamespaceManager* nsmgr; // 0x20
		::System::Boolean isField; // 0x28

		::System::Void _ctor(::System::String* xPath, ::System::Boolean isField, ::System::Xml::XmlNamespaceManager* nsmgr)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE__CTOR_OFFSET))(this, xPath, isField, nsmgr);
		}

		static ::System::Boolean IsNameTest(::MS::Internal::Xml::XPath::Axis* ast)
		{
			return ((::System::Boolean(*)(::MS::Internal::Xml::XPath::Axis*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_ISNAMETEST_OFFSET))(ast);
		}

		static ::System::Boolean IsAttribute(::MS::Internal::Xml::XPath::Axis* ast)
		{
			return ((::System::Boolean(*)(::MS::Internal::Xml::XPath::Axis*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_ISATTRIBUTE_OFFSET))(ast);
		}

		static ::System::Boolean IsDescendantOrSelf(::MS::Internal::Xml::XPath::Axis* ast)
		{
			return ((::System::Boolean(*)(::MS::Internal::Xml::XPath::Axis*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_ISDESCENDANTORSELF_OFFSET))(ast);
		}

		static ::System::Boolean IsSelf(::MS::Internal::Xml::XPath::Axis* ast)
		{
			return ((::System::Boolean(*)(::MS::Internal::Xml::XPath::Axis*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_ISSELF_OFFSET))(ast);
		}

		::System::Void CompileXPath(::System::String* xPath, ::System::Boolean isField, ::System::Xml::XmlNamespaceManager* nsmgr)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_COMPILEXPATH_OFFSET))(this, xPath, isField, nsmgr);
		}

		::System::Void SetURN(::MS::Internal::Xml::XPath::Axis* axis, ::System::Xml::XmlNamespaceManager* nsmgr)
		{
			return ((::System::Void(*)(::PVOID, ::MS::Internal::Xml::XPath::Axis*, ::System::Xml::XmlNamespaceManager*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_ASTTREE_SETURN_OFFSET))(this, axis, nsmgr);
		}
	};
}
