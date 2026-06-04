#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNamedNodeMap_SmallXmlNodeList.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODEFORLOAD_OFFSET UNITYSDK_OFFSET(0x1AECE710)
#define SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODE_OFFSET UNITYSDK_OFFSET(0x1AECE2F0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1AECDE60)
#define SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_OFFSET UNITYSDK_OFFSET(0x1AECDB70)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AEBBBA0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GETNAMEDITEM_OFFSET UNITYSDK_OFFSET(0x1AECDAE0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1AEB6BF0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_INSERTNODEAT_OFFSET UNITYSDK_OFFSET(0x1AECEB10)
#define SYSTEM_XML_XMLNAMEDNODEMAP_REMOVENODEAT_OFFSET UNITYSDK_OFFSET(0x1AECE8B0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_REPLACENODEAT_OFFSET UNITYSDK_OFFSET(0x1AECE190)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SETNAMEDITEM_OFFSET UNITYSDK_OFFSET(0x1AECDDD0)
#define SYSTEM_XML_XMLNAMEDNODEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEB7010)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamedNodeMap_TypeDefinitionIndex = 1900;

	class XmlNamedNodeMap : public ::System::Object
	{
	public:
		::System::Xml::XmlNode* parent; // 0x10
		::System::Xml::XmlNamedNodeMap_SmallXmlNodeList nodes; // 0x18

		::System::Void _ctor(::System::Xml::XmlNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP__CTOR_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* GetNamedItem(::System::String* a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_GETNAMEDITEM_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* SetNamedItem(::System::Xml::XmlNode* a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SETNAMEDITEM_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 FindNodeOffset(::System::String* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_OFFSET))(this, a1);
		}

		::System::Int32 FindNodeOffset_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_1_OFFSET))(this, a1, a2);
		}

		::System::Xml::XmlNode* AddNode(::System::Xml::XmlNode* a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODE_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* AddNodeForLoad(::System::Xml::XmlNode* a1, ::System::Xml::XmlDocument* a2)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODEFORLOAD_OFFSET))(this, a1, a2);
		}

		::System::Xml::XmlNode* RemoveNodeAt(::System::Int32 a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_REMOVENODEAT_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* ReplaceNodeAt(::System::Int32 a1, ::System::Xml::XmlNode* a2)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Int32, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_REPLACENODEAT_OFFSET))(this, a1, a2);
		}

		::System::Xml::XmlNode* InsertNodeAt(::System::Int32 a1, ::System::Xml::XmlNode* a2)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Int32, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_INSERTNODEAT_OFFSET))(this, a1, a2);
		}
	};
}
