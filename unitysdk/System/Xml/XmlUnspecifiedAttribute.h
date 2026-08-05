#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlAttribute.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x1F25A460)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1F25A2B0)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_GET_SPECIFIED_OFFSET UNITYSDK_OFFSET(0x1F25A2A0)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_INSERTAFTER_OFFSET UNITYSDK_OFFSET(0x1F25A420)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_INSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x1F25A400)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x1F25A440)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1F25A3E0)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F25A480)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F25A260)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUnspecifiedAttribute_TypeDefinitionIndex = 1788;

	class XmlUnspecifiedAttribute : public ::System::Xml::XmlAttribute
	{
	public:
		::System::Boolean fSpecified; // 0x28

		::System::Void _ctor(::System::String* prefix, ::System::String* localName, ::System::String* namespaceURI, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE__CTOR_OFFSET))(this, prefix, localName, namespaceURI, doc);
		}

		::System::Boolean get_Specified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_GET_SPECIFIED_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_CLONENODE_OFFSET))(this, deep);
		}

		::System::Void set_InnerText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_SET_INNERTEXT_OFFSET))(this, value);
		}

		::System::Xml::XmlNode* InsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_INSERTBEFORE_OFFSET))(this, newChild, refChild);
		}

		::System::Xml::XmlNode* InsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_INSERTAFTER_OFFSET))(this, newChild, refChild);
		}

		::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* oldChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_REMOVECHILD_OFFSET))(this, oldChild);
		}

		::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* newChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_APPENDCHILD_OFFSET))(this, newChild);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_WRITETO_OFFSET))(this, w);
		}
	};
}
