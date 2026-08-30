#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlAttribute.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x1E3CB050)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1E3CAE40)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_GET_SPECIFIED_OFFSET UNITYSDK_OFFSET(0x1E3CAE30)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x1E3CAFF0)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_SETSPECIFIED_OFFSET UNITYSDK_OFFSET(0x1E3CB0C0)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1E3CAFA0)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3CB0B0)
#define SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CADF0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUnspecifiedAttribute_TypeDefinitionIndex = 1922;

	class XmlUnspecifiedAttribute : public ::System::Xml::XmlAttribute
	{
	public:
		::System::Boolean fSpecified; // 0x28

		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Xml::XmlDocument* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_Specified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_GET_SPECIFIED_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_CLONENODE_OFFSET))(this, a1);
		}

		::System::Void set_InnerText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_SET_INNERTEXT_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_REMOVECHILD_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_APPENDCHILD_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_WRITETO_OFFSET))(this, a1);
		}

		::System::Void SetSpecified(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUNSPECIFIEDATTRIBUTE_SETSPECIFIED_OFFSET))(this, a1);
		}
	};
}
