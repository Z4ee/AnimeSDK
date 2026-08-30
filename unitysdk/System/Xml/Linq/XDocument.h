#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Linq/XContainer.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Linq { class XAttribute; }
namespace System::Xml::Linq { class XDeclaration; }
namespace System::Xml::Linq { class XElement; }
namespace System::Xml::Linq { class XNode; }

#define SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x1EEA7100)
#define SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1EEA70A0)
#define SYSTEM_XML_LINQ_XDOCUMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1EEA7160)
#define SYSTEM_XML_LINQ_XDOCUMENT_GET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x1EEA6D70)
#define SYSTEM_XML_LINQ_XDOCUMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1EEA6D90)
#define SYSTEM_XML_LINQ_XDOCUMENT_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1EEA6DA0)
#define SYSTEM_XML_LINQ_XDOCUMENT_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1EEA7220)
#define SYSTEM_XML_LINQ_XDOCUMENT_SET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x1EEA6D80)
#define SYSTEM_XML_LINQ_XDOCUMENT_VALIDATEDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1EEA75D0)
#define SYSTEM_XML_LINQ_XDOCUMENT_VALIDATENODE_OFFSET UNITYSDK_OFFSET(0x1EEA7280)
#define SYSTEM_XML_LINQ_XDOCUMENT_VALIDATESTRING_OFFSET UNITYSDK_OFFSET(0x1EEA7520)
#define SYSTEM_XML_LINQ_XDOCUMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EEA6DE0)
#define SYSTEM_XML_LINQ_XDOCUMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EEA6CE0)
#define SYSTEM_XML_LINQ_XDOCUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA6CD0)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XDocument_TypeDefinitionIndex = 3902;

	class XDocument : public ::System::Xml::Linq::XContainer
	{
	public:
		::System::Xml::Linq::XDeclaration* declaration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XDocument* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XDeclaration* get_Declaration()
		{
			return ((::System::Xml::Linq::XDeclaration*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_GET_DECLARATION_OFFSET))(this);
		}

		::System::Void set_Declaration(::System::Xml::Linq::XDeclaration* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_SET_DECLARATION_OFFSET))(this, a1);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::Linq::XElement* get_Root()
		{
			return ((::System::Xml::Linq::XElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_GET_ROOT_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_WRITETO_OFFSET))(this, a1);
		}

		::System::Void AddAttribute(::System::Xml::Linq::XAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET))(this, a1);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_CLONENODE_OFFSET))(this);
		}

		static ::System::Boolean IsWhitespace(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_ISWHITESPACE_OFFSET))(a1);
		}

		::System::Void ValidateNode(::System::Xml::Linq::XNode* a1, ::System::Xml::Linq::XNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_VALIDATENODE_OFFSET))(this, a1, a2);
		}

		::System::Void ValidateDocument(::System::Xml::Linq::XNode* a1, ::System::Xml::XmlNodeType a2, ::System::Xml::XmlNodeType a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*, ::System::Xml::XmlNodeType, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_VALIDATEDOCUMENT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ValidateString(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_VALIDATESTRING_OFFSET))(this, a1);
		}
	};
}
