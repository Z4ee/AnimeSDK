#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNodeChangedAction.h"
#include "unitysdk/System/Xml/XmlNodeType.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlAttributeCollection; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlLinkedNode; }
namespace System::Xml { class XmlNodeChangedEventArgs; }
namespace System::Xml { class XmlNodeList; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLNODE_AFTEREVENT_OFFSET UNITYSDK_OFFSET(0x1E8B8510)
#define SYSTEM_XML_XMLNODE_ANCESTORNODE_OFFSET UNITYSDK_OFFSET(0x1E8B5A50)
#define SYSTEM_XML_XMLNODE_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x1E8ABCE0)
#define SYSTEM_XML_XMLNODE_APPENDCHILDTEXT_OFFSET UNITYSDK_OFFSET(0x1E8B6B50)
#define SYSTEM_XML_XMLNODE_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x1E89AC70)
#define SYSTEM_XML_XMLNODE_BEFOREEVENT_OFFSET UNITYSDK_OFFSET(0x1E8B8430)
#define SYSTEM_XML_XMLNODE_CANINSERTAFTER_OFFSET UNITYSDK_OFFSET(0x1E8B6710)
#define SYSTEM_XML_XMLNODE_COPYCHILDREN_OFFSET UNITYSDK_OFFSET(0x1E895680)
#define SYSTEM_XML_XMLNODE_FINDCHILD_OFFSET UNITYSDK_OFFSET(0x1E8B7F80)
#define SYSTEM_XML_XMLNODE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E893E50)
#define SYSTEM_XML_XMLNODE_GETEVENTARGS_OFFSET UNITYSDK_OFFSET(0x1E8B8120)
#define SYSTEM_XML_XMLNODE_GETPREFIXOFNAMESPACESTRICT_OFFSET UNITYSDK_OFFSET(0x1E8B78C0)
#define SYSTEM_XML_XMLNODE_GETPREFIXOFNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E8B7890)
#define SYSTEM_XML_XMLNODE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E8B5A10)
#define SYSTEM_XML_XMLNODE_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1E8B73B0)
#define SYSTEM_XML_XMLNODE_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x1E8AFDC0)
#define SYSTEM_XML_XMLNODE_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x1E8B7720)
#define SYSTEM_XML_XMLNODE_GET_FIRSTCHILD_OFFSET UNITYSDK_OFFSET(0x1E8959F0)
#define SYSTEM_XML_XMLNODE_GET_HASCHILDNODES_OFFSET UNITYSDK_OFFSET(0x1E8B6720)
#define SYSTEM_XML_XMLNODE_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1E89A800)
#define SYSTEM_XML_XMLNODE_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1E8B5A20)
#define SYSTEM_XML_XMLNODE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1E8B67C0)
#define SYSTEM_XML_XMLNODE_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x1E8B85F0)
#define SYSTEM_XML_XMLNODE_GET_LASTCHILD_OFFSET UNITYSDK_OFFSET(0x1E894D00)
#define SYSTEM_XML_XMLNODE_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1E8B5A30)
#define SYSTEM_XML_XMLNODE_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1E8B67A0)
#define SYSTEM_XML_XMLNODE_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x1E8B5A00)
#define SYSTEM_XML_XMLNODE_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1E8963A0)
#define SYSTEM_XML_XMLNODE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1E8B5840)
#define SYSTEM_XML_XMLNODE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1E8B67B0)
#define SYSTEM_XML_XMLNODE_GET_PREVIOUSSIBLING_OFFSET UNITYSDK_OFFSET(0x1E8B59F0)
#define SYSTEM_XML_XMLNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E8B5760)
#define SYSTEM_XML_XMLNODE_HASREADONLYPARENT_OFFSET UNITYSDK_OFFSET(0x1E8B6840)
#define SYSTEM_XML_XMLNODE_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x1E8B6700)
#define SYSTEM_XML_XMLNODE_NESTTEXTNODES_OFFSET UNITYSDK_OFFSET(0x1E899870)
#define SYSTEM_XML_XMLNODE_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1E892E90)
#define SYSTEM_XML_XMLNODE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x1E8B5B90)
#define SYSTEM_XML_XMLNODE_SETPARENTFORLOAD_OFFSET UNITYSDK_OFFSET(0x1E8B7F70)
#define SYSTEM_XML_XMLNODE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1E8A20C0)
#define SYSTEM_XML_XMLNODE_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1E8B6F50)
#define SYSTEM_XML_XMLNODE_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x1E8B7350)
#define SYSTEM_XML_XMLNODE_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1E8B5A40)
#define SYSTEM_XML_XMLNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E8B5770)
#define SYSTEM_XML_XMLNODE_SPLITNAME_OFFSET UNITYSDK_OFFSET(0x1E890780)
#define SYSTEM_XML_XMLNODE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E8B6A90)
#define SYSTEM_XML_XMLNODE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8B6A10)
#define SYSTEM_XML_XMLNODE_UNNESTTEXTNODES_OFFSET UNITYSDK_OFFSET(0x1E8B6660)
#define SYSTEM_XML_XMLNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8A1990)
#define SYSTEM_XML_XMLNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E894EF0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNode_TypeDefinitionIndex = 1914;

	class XmlNode : public ::System::Object
	{
	public:
		::System::Xml::XmlNode* parentNode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlDocument* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE__CTOR_1_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* get_ParentNode()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_PARENTNODE_OFFSET))(this);
		}

		::System::Xml::XmlNodeList* get_ChildNodes()
		{
			return ((::System::Xml::XmlNodeList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_CHILDNODES_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_PreviousSibling()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_PREVIOUSSIBLING_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_NextSibling()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_NEXTSIBLING_OFFSET))(this);
		}

		::System::Xml::XmlAttributeCollection* get_Attributes()
		{
			return ((::System::Xml::XmlAttributeCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Xml::XmlDocument* get_OwnerDocument()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_OWNERDOCUMENT_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_FirstChild()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_FIRSTCHILD_OFFSET))(this);
		}

		::System::Xml::XmlNode* get_LastChild()
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_LASTCHILD_OFFSET))(this);
		}

		::System::Boolean get_IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_ISCONTAINER_OFFSET))(this);
		}

		::System::Xml::XmlLinkedNode* get_LastNode()
		{
			return ((::System::Xml::XmlLinkedNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_LASTNODE_OFFSET))(this);
		}

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_LASTNODE_OFFSET))(this, a1);
		}

		::System::Boolean AncestorNode(::System::Xml::XmlNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_ANCESTORNODE_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_REMOVECHILD_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_APPENDCHILD_OFFSET))(this, a1);
		}

		::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* a1, ::System::Xml::XmlDocument* a2)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_APPENDCHILDFORLOAD_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_ISVALIDCHILDTYPE_OFFSET))(this, a1);
		}

		::System::Boolean CanInsertAfter(::System::Xml::XmlNode* a1, ::System::Xml::XmlNode* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_CANINSERTAFTER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_HasChildNodes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_HASCHILDNODES_OFFSET))(this);
		}

		::System::Void CopyChildren(::System::Xml::XmlDocument* a1, ::System::Xml::XmlNode* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*, ::System::Xml::XmlNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_COPYCHILDREN_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_PREFIX_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_ISREADONLY_OFFSET))(this);
		}

		static ::System::Boolean HasReadOnlyParent(::System::Xml::XmlNode* a1)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_HASREADONLYPARENT_OFFSET))(a1);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void AppendChildText(::System::Text::StringBuilder* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_APPENDCHILDTEXT_OFFSET))(this, a1);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_INNERTEXT_OFFSET))(this, a1);
		}

		::System::Void set_InnerXml(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_INNERXML_OFFSET))(this, a1);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_BASEURI_OFFSET))(this);
		}

		::System::Void RemoveAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_REMOVEALL_OFFSET))(this);
		}

		::System::Xml::XmlDocument* get_Document()
		{
			return ((::System::Xml::XmlDocument*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_DOCUMENT_OFFSET))(this);
		}

		::System::String* GetPrefixOfNamespace(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GETPREFIXOFNAMESPACE_OFFSET))(this, a1);
		}

		::System::String* GetPrefixOfNamespaceStrict(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GETPREFIXOFNAMESPACESTRICT_OFFSET))(this, a1);
		}

		::System::Void SetParent(::System::Xml::XmlNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SETPARENT_OFFSET))(this, a1);
		}

		::System::Void SetParentForLoad(::System::Xml::XmlNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SETPARENTFORLOAD_OFFSET))(this, a1);
		}

		static ::System::Void SplitName(::System::String* a1, ::System::String*& a2, ::System::String*& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SPLITNAME_OFFSET))(a1, a2, a3);
		}

		::System::Xml::XmlNode* FindChild(::System::Xml::XmlNodeType a1)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_FINDCHILD_OFFSET))(this, a1);
		}

		::System::Xml::XmlNodeChangedEventArgs* GetEventArgs(::System::Xml::XmlNode* a1, ::System::Xml::XmlNode* a2, ::System::Xml::XmlNode* a3, ::System::String* a4, ::System::String* a5, ::System::Xml::XmlNodeChangedAction a6)
		{
			return ((::System::Xml::XmlNodeChangedEventArgs*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::System::Xml::XmlNodeChangedAction))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GETEVENTARGS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void BeforeEvent(::System::Xml::XmlNodeChangedEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_BEFOREEVENT_OFFSET))(this, a1);
		}

		::System::Void AfterEvent(::System::Xml::XmlNodeChangedEventArgs* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_AFTEREVENT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_ISTEXT_OFFSET))(this);
		}

		static ::System::Void NestTextNodes(::System::Xml::XmlNode* a1, ::System::Xml::XmlNode* a2)
		{
			return ((::System::Void(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_NESTTEXTNODES_OFFSET))(a1, a2);
		}

		static ::System::Void UnnestTextNodes(::System::Xml::XmlNode* a1, ::System::Xml::XmlNode* a2)
		{
			return ((::System::Void(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_UNNESTTEXTNODES_OFFSET))(a1, a2);
		}
	};
}
