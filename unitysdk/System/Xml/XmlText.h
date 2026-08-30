#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlCharacterData.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLTEXT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x183FB000)
#define SYSTEM_XML_XMLTEXT_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x183FB280)
#define SYSTEM_XML_XMLTEXT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x183FAE70)
#define SYSTEM_XML_XMLTEXT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x183FAE50)
#define SYSTEM_XML_XMLTEXT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x183FAE90)
#define SYSTEM_XML_XMLTEXT_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x183FAEA0)
#define SYSTEM_XML_XMLTEXT_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x183FB0B0)
#define SYSTEM_XML_XMLTEXT_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x183FB0D0)
#define SYSTEM_XML_XMLTEXT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x183FB270)
#define SYSTEM_XML_XMLTEXT_WRITETO_OFFSET UNITYSDK_OFFSET(0x183FB1C0)
#define SYSTEM_XML_XMLTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x183E7DE0)
#define SYSTEM_XML_XMLTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183E7E60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlText_TypeDefinitionIndex = 1921;

	class XmlText : public ::System::Xml::XmlCharacterData
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Xml::XmlDocument* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_PARENTNODE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_CLONENODE_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_WRITETO_OFFSET))(this, a1);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_WRITECONTENTTO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLTEXT_GET_ISTEXT_OFFSET))(this);
		}
	};
}
