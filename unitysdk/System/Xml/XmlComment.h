#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlCharacterData.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLCOMMENT_CLONENODE_OFFSET UNITYSDK_OFFSET(0x1D93DB30)
#define SYSTEM_XML_XMLCOMMENT_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1D93DB00)
#define SYSTEM_XML_XMLCOMMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D93DAE0)
#define SYSTEM_XML_XMLCOMMENT_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1D93DB20)
#define SYSTEM_XML_XMLCOMMENT_WRITECONTENTTO_OFFSET UNITYSDK_OFFSET(0x1D93DBC0)
#define SYSTEM_XML_XMLCOMMENT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1D93DB80)
#define SYSTEM_XML_XMLCOMMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D93DA60)

namespace System::Xml
{
	inline static constexpr unsigned int XmlComment_TypeDefinitionIndex = 1756;

	class XmlComment : public ::System::Xml::XmlCharacterData
	{
	public:
		::System::Void _ctor(::System::String* comment, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT__CTOR_OFFSET))(this, comment, doc);
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

		::System::Xml::XmlNode* CloneNode(::System::Boolean deep)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_CLONENODE_OFFSET))(this, deep);
		}

		::System::Void WriteTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_WRITETO_OFFSET))(this, w);
		}

		::System::Void WriteContentTo(::System::Xml::XmlWriter* w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMMENT_WRITECONTENTTO_OFFSET))(this, w);
		}
	};
}
