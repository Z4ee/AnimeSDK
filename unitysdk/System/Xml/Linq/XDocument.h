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

#define SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET UNITYSDK_OFFSET(0x19F96CA0)
#define SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x19F96C40)
#define SYSTEM_XML_LINQ_XDOCUMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x19F96D00)
#define SYSTEM_XML_LINQ_XDOCUMENT_GET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x19F96AA0)
#define SYSTEM_XML_LINQ_XDOCUMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x19F96AC0)
#define SYSTEM_XML_LINQ_XDOCUMENT_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x19F96AD0)
#define SYSTEM_XML_LINQ_XDOCUMENT_ISWHITESPACE_OFFSET UNITYSDK_OFFSET(0x19F96DC0)
#define SYSTEM_XML_LINQ_XDOCUMENT_SET_DECLARATION_OFFSET UNITYSDK_OFFSET(0x19F96AB0)
#define SYSTEM_XML_LINQ_XDOCUMENT_VALIDATEDOCUMENT_OFFSET UNITYSDK_OFFSET(0x19F970F0)
#define SYSTEM_XML_LINQ_XDOCUMENT_VALIDATENODE_OFFSET UNITYSDK_OFFSET(0x19F96E20)
#define SYSTEM_XML_LINQ_XDOCUMENT_VALIDATESTRING_OFFSET UNITYSDK_OFFSET(0x19F97040)
#define SYSTEM_XML_LINQ_XDOCUMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x19F96B10)
#define SYSTEM_XML_LINQ_XDOCUMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F96A10)
#define SYSTEM_XML_LINQ_XDOCUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19F96A00)

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XDocument_TypeDefinitionIndex = 4923;

	class XDocument : public ::System::Xml::Linq::XContainer
	{
	public:
		::System::Xml::Linq::XDeclaration* declaration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::Linq::XDocument* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT__CTOR_1_OFFSET))(this, other);
		}

		::System::Xml::Linq::XDeclaration* get_Declaration()
		{
			return ((::System::Xml::Linq::XDeclaration*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_GET_DECLARATION_OFFSET))(this);
		}

		::System::Void set_Declaration(::System::Xml::Linq::XDeclaration* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XDeclaration*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_SET_DECLARATION_OFFSET))(this, value);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::Linq::XElement* get_Root()
		{
			return ((::System::Xml::Linq::XElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_GET_ROOT_OFFSET))(this);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_WRITETO_OFFSET))(this, writer);
		}

		::System::Void AddAttribute(::System::Xml::Linq::XAttribute* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTE_OFFSET))(this, a);
		}

		::System::Void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XAttribute*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_ADDATTRIBUTESKIPNOTIFY_OFFSET))(this, a);
		}

		::System::Xml::Linq::XNode* CloneNode()
		{
			return ((::System::Xml::Linq::XNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_CLONENODE_OFFSET))(this);
		}

		static ::System::Boolean IsWhitespace(::System::String* s)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_ISWHITESPACE_OFFSET))(s);
		}

		::System::Void ValidateNode(::System::Xml::Linq::XNode* node, ::System::Xml::Linq::XNode* previous)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*, ::System::Xml::Linq::XNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_VALIDATENODE_OFFSET))(this, node, previous);
		}

		::System::Void ValidateDocument(::System::Xml::Linq::XNode* previous, ::System::Xml::XmlNodeType allowBefore, ::System::Xml::XmlNodeType allowAfter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Linq::XNode*, ::System::Xml::XmlNodeType, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_VALIDATEDOCUMENT_OFFSET))(this, previous, allowBefore, allowAfter);
		}

		::System::Void ValidateString(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_LINQ_XDOCUMENT_VALIDATESTRING_OFFSET))(this, s);
		}
	};
}
