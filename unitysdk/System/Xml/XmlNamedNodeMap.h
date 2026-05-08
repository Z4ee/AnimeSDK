#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNamedNodeMap_SmallXmlNodeList.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlNode; }

#define SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODEFORLOAD_OFFSET UNITYSDK_OFFSET(0x1ACDEBB0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_ADDNODE_OFFSET UNITYSDK_OFFSET(0x1ACDEA20)
#define SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_1_OFFSET UNITYSDK_OFFSET(0x1ACDE400)
#define SYSTEM_XML_XMLNAMEDNODEMAP_FINDNODEOFFSET_OFFSET UNITYSDK_OFFSET(0x1ACDE200)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1ACDE960)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GETNAMEDITEM_OFFSET UNITYSDK_OFFSET(0x1ACDE180)
#define SYSTEM_XML_XMLNAMEDNODEMAP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1ACDE750)
#define SYSTEM_XML_XMLNAMEDNODEMAP_INSERTNODEAT_OFFSET UNITYSDK_OFFSET(0x1ACDEE30)
#define SYSTEM_XML_XMLNAMEDNODEMAP_ITEM_OFFSET UNITYSDK_OFFSET(0x1ACDE7D0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_REMOVENODEAT_OFFSET UNITYSDK_OFFSET(0x1ACDECD0)
#define SYSTEM_XML_XMLNAMEDNODEMAP_REPLACENODEAT_OFFSET UNITYSDK_OFFSET(0x1ACDE700)
#define SYSTEM_XML_XMLNAMEDNODEMAP_SETNAMEDITEM_OFFSET UNITYSDK_OFFSET(0x1ACDE370)
#define SYSTEM_XML_XMLNAMEDNODEMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ACDEFD0)
#define SYSTEM_XML_XMLNAMEDNODEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACDD4B0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNamedNodeMap_TypeDefinitionIndex = 1775;

	class XmlNamedNodeMap : public ::System::Object
	{
	public:
		::System::Xml::XmlNode* parent; // 0x10
		::System::Xml::XmlNamedNodeMap_SmallXmlNodeList nodes; // 0x18

		::System::Void _ctor(::System::Xml::XmlNode* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP__CTOR_OFFSET))(this, parent);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP__CTOR_1_OFFSET))(this);
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

		::System::Xml::XmlNode* Item(::System::Int32 index)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNAMEDNODEMAP_ITEM_OFFSET))(this, index);
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
