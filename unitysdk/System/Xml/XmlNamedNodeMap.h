#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNamedNodeMap_SmallXmlNodeList.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODEFORLOAD_OFFSET UNITYSDK_OFFSET(0x18621740)
#define SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODE_OFFSET UNITYSDK_OFFSET(0x18621340)
#define SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x18620EE0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_OFFSET UNITYSDK_OFFSET(0x18620C00)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1860EBF0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GETNAMEDITEM_OFFSET UNITYSDK_OFFSET(0x18620B80)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x18609820)
#define SYSTEM_XML_XMLNAMEDNODEMAP_INSERTNODEAT_OFFSET UNITYSDK_OFFSET(0x18621B20)
#define SYSTEM_XML_XMLNAMEDNODEMAP_REMOVENODEAT_OFFSET UNITYSDK_OFFSET(0x186218D0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_REPLACENODEAT_OFFSET UNITYSDK_OFFSET(0x186211E0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SETNAMEDITEM_OFFSET UNITYSDK_OFFSET(0x18620E50)
#define SYSTEM_XML_XMLNAMEDNODEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x18609C40)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamedNodeMap_TypeDefinitionIndex = 1899;

	class XmlNamedNodeMap : public ::System::Object
	{
	public:
		::System::Xml::XmlNamedNodeMap_SmallXmlNodeList nodes; // 0x10
		::System::Xml::XmlNode* parent; // 0x18

		::System::Void _ctor(::System::Xml::XmlNode* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP__CTOR_OFFSET))(this, parent);
		}

		::System::Xml::XmlNode* GetNamedItem(::System::String* name)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_GETNAMEDITEM_OFFSET))(this, name);
		}

		::System::Xml::XmlNode* SetNamedItem(::System::Xml::XmlNode* node)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_SETNAMEDITEM_OFFSET))(this, node);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 FindNodeOffset(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_OFFSET))(this, name);
		}

		::System::Int32 FindNodeOffset_1(::System::String* localName, ::System::String* namespaceURI)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_1_OFFSET))(this, localName, namespaceURI);
		}

		::System::Xml::XmlNode* AddNode(::System::Xml::XmlNode* node)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODE_OFFSET))(this, node);
		}

		::System::Xml::XmlNode* AddNodeForLoad(::System::Xml::XmlNode* node, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODEFORLOAD_OFFSET))(this, node, doc);
		}

		::System::Xml::XmlNode* RemoveNodeAt(::System::Int32 i)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_REMOVENODEAT_OFFSET))(this, i);
		}

		::System::Xml::XmlNode* ReplaceNodeAt(::System::Int32 i, ::System::Xml::XmlNode* node)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Int32, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_REPLACENODEAT_OFFSET))(this, i, node);
		}

		::System::Xml::XmlNode* InsertNodeAt(::System::Int32 i, ::System::Xml::XmlNode* node)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Int32, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_INSERTNODEAT_OFFSET))(this, i, node);
		}
	};
}
