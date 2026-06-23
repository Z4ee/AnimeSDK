#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNodeChangedAction.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlSpace.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlAttributeCollection; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlLinkedNode; }
namespace System::Xml { class XmlNodeChangedEventArgs; }
namespace System::Xml { class XmlNodeList; }
namespace System::Xml { class XmlWriter; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }

#define SYSTEM_XML_XMLNODE_AFTEREVENT_OFFSET UNITYSDK_OFFSET(0x1C1840F0)
#define SYSTEM_XML_XMLNODE_ANCESTORNODE_OFFSET UNITYSDK_OFFSET(0x1C18A6D0)
#define SYSTEM_XML_XMLNODE_APPENDCHILDFORLOAD_OFFSET UNITYSDK_OFFSET(0x1C18B6C0)
#define SYSTEM_XML_XMLNODE_APPENDCHILDTEXT_OFFSET UNITYSDK_OFFSET(0x1C18BC50)
#define SYSTEM_XML_XMLNODE_APPENDCHILD_OFFSET UNITYSDK_OFFSET(0x1C179080)
#define SYSTEM_XML_XMLNODE_BEFOREEVENT_OFFSET UNITYSDK_OFFSET(0x1C184080)
#define SYSTEM_XML_XMLNODE_CANINSERTAFTER_OFFSET UNITYSDK_OFFSET(0x1C18B960)
#define SYSTEM_XML_XMLNODE_CANINSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x1C18B950)
#define SYSTEM_XML_XMLNODE_COPYCHILDREN_OFFSET UNITYSDK_OFFSET(0x1C18B970)
#define SYSTEM_XML_XMLNODE_FINDCHILD_OFFSET UNITYSDK_OFFSET(0x1C186370)
#define SYSTEM_XML_XMLNODE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C189440)
#define SYSTEM_XML_XMLNODE_GETEVENTARGS_OFFSET UNITYSDK_OFFSET(0x1C183EB0)
#define SYSTEM_XML_XMLNODE_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1C18A690)
#define SYSTEM_XML_XMLNODE_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1C18BFC0)
#define SYSTEM_XML_XMLNODE_GET_CHILDNODES_OFFSET UNITYSDK_OFFSET(0x1C178E70)
#define SYSTEM_XML_XMLNODE_GET_DOCUMENT_OFFSET UNITYSDK_OFFSET(0x1C18C110)
#define SYSTEM_XML_XMLNODE_GET_FIRSTCHILD_OFFSET UNITYSDK_OFFSET(0x1C186480)
#define SYSTEM_XML_XMLNODE_GET_HASCHILDNODES_OFFSET UNITYSDK_OFFSET(0x1C186460)
#define SYSTEM_XML_XMLNODE_GET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1C18BD40)
#define SYSTEM_XML_XMLNODE_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1C18A6A0)
#define SYSTEM_XML_XMLNODE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1C18BA20)
#define SYSTEM_XML_XMLNODE_GET_ISTEXT_OFFSET UNITYSDK_OFFSET(0x1C18C4A0)
#define SYSTEM_XML_XMLNODE_GET_LASTCHILD_OFFSET UNITYSDK_OFFSET(0x1C186C30)
#define SYSTEM_XML_XMLNODE_GET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1C18A6B0)
#define SYSTEM_XML_XMLNODE_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1C18B9F0)
#define SYSTEM_XML_XMLNODE_GET_NEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x1C18A680)
#define SYSTEM_XML_XMLNODE_GET_OWNERDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1C184CC0)
#define SYSTEM_XML_XMLNODE_GET_PARENTNODE_OFFSET UNITYSDK_OFFSET(0x1C18A580)
#define SYSTEM_XML_XMLNODE_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1C18BA00)
#define SYSTEM_XML_XMLNODE_GET_PREVIOUSSIBLING_OFFSET UNITYSDK_OFFSET(0x1C18A670)
#define SYSTEM_XML_XMLNODE_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1C18BF60)
#define SYSTEM_XML_XMLNODE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C18A4A0)
#define SYSTEM_XML_XMLNODE_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1C18C3E0)
#define SYSTEM_XML_XMLNODE_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1C18C1E0)
#define SYSTEM_XML_XMLNODE_HASREADONLYPARENT_OFFSET UNITYSDK_OFFSET(0x1C18BAF0)
#define SYSTEM_XML_XMLNODE_INSERTAFTER_OFFSET UNITYSDK_OFFSET(0x1C18AD50)
#define SYSTEM_XML_XMLNODE_INSERTBEFORE_OFFSET UNITYSDK_OFFSET(0x1C18A730)
#define SYSTEM_XML_XMLNODE_ISVALIDCHILDTYPE_OFFSET UNITYSDK_OFFSET(0x1C18B940)
#define SYSTEM_XML_XMLNODE_NESTTEXTNODES_OFFSET UNITYSDK_OFFSET(0x1C18ACF0)
#define SYSTEM_XML_XMLNODE_PREPENDCHILD_OFFSET UNITYSDK_OFFSET(0x1C18B680)
#define SYSTEM_XML_XMLNODE_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1C188B20)
#define SYSTEM_XML_XMLNODE_REMOVECHILD_OFFSET UNITYSDK_OFFSET(0x1C18B2E0)
#define SYSTEM_XML_XMLNODE_SETPARENTFORLOAD_OFFSET UNITYSDK_OFFSET(0x1C18C1D0)
#define SYSTEM_XML_XMLNODE_SETPARENT_OFFSET UNITYSDK_OFFSET(0x1C18C1A0)
#define SYSTEM_XML_XMLNODE_SET_INNERTEXT_OFFSET UNITYSDK_OFFSET(0x1C18BE40)
#define SYSTEM_XML_XMLNODE_SET_INNERXML_OFFSET UNITYSDK_OFFSET(0x1C18BF00)
#define SYSTEM_XML_XMLNODE_SET_LASTNODE_OFFSET UNITYSDK_OFFSET(0x1C18A6C0)
#define SYSTEM_XML_XMLNODE_SET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1C18BA10)
#define SYSTEM_XML_XMLNODE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C18A4B0)
#define SYSTEM_XML_XMLNODE_SPLITNAME_OFFSET UNITYSDK_OFFSET(0x1C186DA0)
#define SYSTEM_XML_XMLNODE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C18BBE0)
#define SYSTEM_XML_XMLNODE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1C18BBC0)
#define SYSTEM_XML_XMLNODE_UNNESTTEXTNODES_OFFSET UNITYSDK_OFFSET(0x1C18AD10)
#define SYSTEM_XML_XMLNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C18A430)
#define SYSTEM_XML_XMLNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C185240)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNode_TypeDefinitionIndex = 1777;

	class XmlNode : public ::System::Object
	{
	public:
		::System::Xml::XmlNode* parentNode; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Xml::XmlDocument* doc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE__CTOR_1_OFFSET))(this, doc);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_VALUE_OFFSET))(this, value);
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

		::System::Void set_LastNode(::System::Xml::XmlLinkedNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlLinkedNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_LASTNODE_OFFSET))(this, value);
		}

		::System::Boolean AncestorNode(::System::Xml::XmlNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_ANCESTORNODE_OFFSET))(this, node);
		}

		::System::Xml::XmlNode* InsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_INSERTBEFORE_OFFSET))(this, newChild, refChild);
		}

		::System::Xml::XmlNode* InsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_INSERTAFTER_OFFSET))(this, newChild, refChild);
		}

		::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* oldChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_REMOVECHILD_OFFSET))(this, oldChild);
		}

		::System::Xml::XmlNode* PrependChild(::System::Xml::XmlNode* newChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_PREPENDCHILD_OFFSET))(this, newChild);
		}

		::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* newChild)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_APPENDCHILD_OFFSET))(this, newChild);
		}

		::System::Xml::XmlNode* AppendChildForLoad(::System::Xml::XmlNode* newChild, ::System::Xml::XmlDocument* doc)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlDocument*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_APPENDCHILDFORLOAD_OFFSET))(this, newChild, doc);
		}

		::System::Boolean IsValidChildType(::System::Xml::XmlNodeType type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_ISVALIDCHILDTYPE_OFFSET))(this, type);
		}

		::System::Boolean CanInsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_CANINSERTBEFORE_OFFSET))(this, newChild, refChild);
		}

		::System::Boolean CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_CANINSERTAFTER_OFFSET))(this, newChild, refChild);
		}

		::System::Boolean get_HasChildNodes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_HASCHILDNODES_OFFSET))(this);
		}

		::System::Void CopyChildren(::System::Xml::XmlDocument* doc, ::System::Xml::XmlNode* container, ::System::Boolean deep)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlDocument*, ::System::Xml::XmlNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_COPYCHILDREN_OFFSET))(this, doc, container, deep);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_PREFIX_OFFSET))(this);
		}

		::System::Void set_Prefix(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_PREFIX_OFFSET))(this, value);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_ISREADONLY_OFFSET))(this);
		}

		static ::System::Boolean HasReadOnlyParent(::System::Xml::XmlNode* n)
		{
			return ((::System::Boolean(*)(::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_HASREADONLYPARENT_OFFSET))(n);
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

		::System::Void AppendChildText(::System::Text::StringBuilder* builder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_APPENDCHILDTEXT_OFFSET))(this, builder);
		}

		::System::String* get_InnerText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_INNERTEXT_OFFSET))(this);
		}

		::System::Void set_InnerText(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_INNERTEXT_OFFSET))(this, value);
		}

		::System::Void set_InnerXml(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SET_INNERXML_OFFSET))(this, value);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_SCHEMAINFO_OFFSET))(this);
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

		::System::Void SetParent(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SETPARENT_OFFSET))(this, node);
		}

		::System::Void SetParentForLoad(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SETPARENTFORLOAD_OFFSET))(this, node);
		}

		static ::System::Void SplitName(::System::String* name, ::System::String*& prefix, ::System::String*& localName)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_SPLITNAME_OFFSET))(name, prefix, localName);
		}

		::System::Xml::XmlNode* FindChild(::System::Xml::XmlNodeType type)
		{
			return ((::System::Xml::XmlNode*(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_FINDCHILD_OFFSET))(this, type);
		}

		::System::Xml::XmlNodeChangedEventArgs* GetEventArgs(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::System::String* oldValue, ::System::String* newValue, ::System::Xml::XmlNodeChangedAction action)
		{
			return ((::System::Xml::XmlNodeChangedEventArgs*(*)(::PVOID, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::Xml::XmlNode*, ::System::String*, ::System::String*, ::System::Xml::XmlNodeChangedAction))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GETEVENTARGS_OFFSET))(this, node, oldParent, newParent, oldValue, newValue, action);
		}

		::System::Void BeforeEvent(::System::Xml::XmlNodeChangedEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_BEFOREEVENT_OFFSET))(this, args);
		}

		::System::Void AfterEvent(::System::Xml::XmlNodeChangedEventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNodeChangedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_AFTEREVENT_OFFSET))(this, args);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_XMLLANG_OFFSET))(this);
		}

		::System::Boolean get_IsText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_GET_ISTEXT_OFFSET))(this);
		}

		static ::System::Void NestTextNodes(::System::Xml::XmlNode* prevNode, ::System::Xml::XmlNode* nextNode)
		{
			return ((::System::Void(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_NESTTEXTNODES_OFFSET))(prevNode, nextNode);
		}

		static ::System::Void UnnestTextNodes(::System::Xml::XmlNode* prevNode, ::System::Xml::XmlNode* nextNode)
		{
			return ((::System::Void(*)(::System::Xml::XmlNode*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODE_UNNESTTEXTNODES_OFFSET))(prevNode, nextNode);
		}
	};
}
