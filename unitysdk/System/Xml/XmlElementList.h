#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlNodeList.h"

namespace System { class String; }
namespace System { class WeakReference; }
namespace System::Collections { class IEnumerator; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlNodeChangedEventArgs; }

#define SYSTEM_XML_XMLELEMENTLIST_CONCURRENCYCHECK_OFFSET UNITYSDK_OFFSET(0x1E4B2300)
#define SYSTEM_XML_XMLELEMENTLIST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E4B2CD0)
#define SYSTEM_XML_XMLELEMENTLIST_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E4B2290)
#define SYSTEM_XML_XMLELEMENTLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E4B2BF0)
#define SYSTEM_XML_XMLELEMENTLIST_GETMATCHINGNODE_OFFSET UNITYSDK_OFFSET(0x1E4B2770)
#define SYSTEM_XML_XMLELEMENTLIST_GETNEXTNODE_OFFSET UNITYSDK_OFFSET(0x1E4B2970)
#define SYSTEM_XML_XMLELEMENTLIST_GETNTHMATCHINGNODE_OFFSET UNITYSDK_OFFSET(0x1E4B2920)
#define SYSTEM_XML_XMLELEMENTLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1E4B2AE0)
#define SYSTEM_XML_XMLELEMENTLIST_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1E4B2440)
#define SYSTEM_XML_XMLELEMENTLIST_ITEM_OFFSET UNITYSDK_OFFSET(0x1E4B2A70)
#define SYSTEM_XML_XMLELEMENTLIST_NEXTELEMINPREORDER_OFFSET UNITYSDK_OFFSET(0x1E4B2640)
#define SYSTEM_XML_XMLELEMENTLIST_PREVELEMINPREORDER_OFFSET UNITYSDK_OFFSET(0x1E4B26E0)
#define SYSTEM_XML_XMLELEMENTLIST_PRIVATEDISPOSENODELIST_OFFSET UNITYSDK_OFFSET(0x1E4B2C60)
#define SYSTEM_XML_XMLELEMENTLIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B2510)
#define SYSTEM_XML_XMLELEMENTLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B2170)

namespace System::Xml
{
	inline static constexpr unsigned int XmlElementList_TypeDefinitionIndex = 1762;

	class XmlElementList : public ::System::Xml::XmlNodeList
	{
	public:
		::System::String* localName; // 0x10
		::System::Xml::XmlNode* curElem; // 0x18
		::System::String* name; // 0x20
		::System::WeakReference* listener; // 0x28
		::System::Xml::XmlNode* rootNode; // 0x30
		::System::String* namespaceURI; // 0x38
		::System::String* asterisk; // 0x40
		::System::Int32 matchCount; // 0x48
		::System::Boolean empty; // 0x4C
		::System::Boolean atomized; // 0x4D
		::System::Int32 changeCount; // 0x50
		::System::Int32 curInd; // 0x54

		::System::Void _ctor(::System::Xml::XmlNode* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST__CTOR_OFFSET))(this, parent);
		}

		::System::Void _ctor_1(::System::Xml::XmlNode* parent, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST__CTOR_1_OFFSET))(this, parent, name);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_FINALIZE_OFFSET))(this);
		}

		::System::Void ConcurrencyCheck(::System::Xml::XmlNodeChangedEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_CONCURRENCYCHECK_OFFSET))(this, args);
		}

		::System::Xml::XmlNode* NextElemInPreOrder(::System::Xml::XmlNode* curNode)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_NEXTELEMINPREORDER_OFFSET))(this, curNode);
		}

		::System::Xml::XmlNode* PrevElemInPreOrder(::System::Xml::XmlNode* curNode)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_PREVELEMINPREORDER_OFFSET))(this, curNode);
		}

		::System::Boolean IsMatch(::System::Xml::XmlNode* curNode)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_ISMATCH_OFFSET))(this, curNode);
		}

		::System::Xml::XmlNode* GetMatchingNode(::System::Xml::XmlNode* n, ::System::Boolean bNext)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_GETMATCHINGNODE_OFFSET))(this, n, bNext);
		}

		::System::Xml::XmlNode* GetNthMatchingNode(::System::Xml::XmlNode* n, ::System::Boolean bNext, ::System::Int32 nCount)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_GETNTHMATCHINGNODE_OFFSET))(this, n, bNext, nCount);
		}

		::System::Xml::XmlNode* GetNextNode(::System::Xml::XmlNode* n)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_GETNEXTNODE_OFFSET))(this, n);
		}

		::System::Xml::XmlNode* Item(::System::Int32 index)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_ITEM_OFFSET))(this, index);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void PrivateDisposeNodeList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_PRIVATEDISPOSENODELIST_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLELEMENTLIST_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
