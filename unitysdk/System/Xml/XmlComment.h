#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlCharacterData.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLCOMMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x17C80420)
#define SYSTEM_XML_XMLCOMMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x17C803F0)
#define SYSTEM_XML_XMLCOMMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17C803D0)
#define SYSTEM_XML_XMLCOMMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x17C80410)
#define SYSTEM_XML_XMLCOMMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x17C80580)
#define SYSTEM_XML_XMLCOMMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x17C804D0)
#define SYSTEM_XML_XMLCOMMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x17C80350)

namespace System::Xml
{
	inline static constexpr unsigned int XmlComment_TypeDefinitionIndex = 1897;

	class XmlComment : public ::System::Xml::XmlCharacterData
	{
	public:
		::System::Void _ctor(::System::String* a1, ::System::Xml::XmlDocument* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_GET_NODETYPE_OFFSET))(this);
		}

		::System::Xml::XmlNode* CloneNode(::System::Boolean a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_CLONENODE_OFFSET))(this, a1);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_WRITETO_OFFSET))(this, a1);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_WRITECONTENTTO_OFFSET))(this, a1);
		}
	};
}
