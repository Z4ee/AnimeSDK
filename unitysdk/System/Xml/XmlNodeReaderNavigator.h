#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"
#include "unitysdk/System/Xml/XmlNodeReaderNavigator_VirtualAttribute.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlSpace.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Xml { class XmlDeclaration; }
namespace System::Xml { class XmlDocument; }
namespace System::Xml { class XmlDocumentType; }
namespace System::Xml { class XmlElement; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNode; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }

#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_CHECKINDEXCONDITION_OFFSET UNITYSDK_OFFSET(0x1C7BD880)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_DEFAULTLOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1C7BF7D0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTEFROMELEMENT_1_OFFSET UNITYSDK_OFFSET(0x1C7BDFD0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTEFROMELEMENT_OFFSET UNITYSDK_OFFSET(0x1C7BDD30)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1C7BE010)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1C7BE280)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C7BDD70)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECATTRIND_OFFSET UNITYSDK_OFFSET(0x1C7BDA40)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECLARATIONATTR_1_OFFSET UNITYSDK_OFFSET(0x1C7BD9F0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECLARATIONATTR_OFFSET UNITYSDK_OFFSET(0x1C7BD8F0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCTYPEATTRIND_OFFSET UNITYSDK_OFFSET(0x1C7BDC40)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCUMENTTYPEATTR_1_OFFSET UNITYSDK_OFFSET(0x1C7BDBF0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCUMENTTYPEATTR_OFFSET UNITYSDK_OFFSET(0x1C7BDB30)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1C7BFD80)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1C7BD590)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1C7BD390)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1C7BD4C0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1C7BD420)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISONDECLORDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1C7BE6A0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1C7BCE70)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1C7BCD30)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C7BCD60)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1C7BCCF0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1C7BCEF0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1C7BD560)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C7BCF20)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1C7BD3F0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1C7BD3C0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_INITDECATTR_OFFSET UNITYSDK_OFFSET(0x1C7BD200)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_INITDOCTYPEATTR_OFFSET UNITYSDK_OFFSET(0x1C7BD780)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_ISLOCALNAMEEMPTY_OFFSET UNITYSDK_OFFSET(0x1C7BCE50)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOGMOVE_OFFSET UNITYSDK_OFFSET(0x1C7BE650)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1C7BF590)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1C7BF900)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTEFROMELEMENT_OFFSET UNITYSDK_OFFSET(0x1C7BED80)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1C7BE920)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1C7BEE30)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C7BE910)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1C7BF520)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOFIRSTCHILD_OFFSET UNITYSDK_OFFSET(0x1C7BF400)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C7BF0E0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXTSIBLING_OFFSET UNITYSDK_OFFSET(0x1C7BF450)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXT_OFFSET UNITYSDK_OFFSET(0x1C7BF4A0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOPARENT_OFFSET UNITYSDK_OFFSET(0x1C7BF3B0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1C7C0410)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_RESETMOVE_OFFSET UNITYSDK_OFFSET(0x1C7BE790)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_RESETTOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1C7BE6E0)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR_ROLLBACKMOVE_OFFSET UNITYSDK_OFFSET(0x1C7BE670)
#define SYSTEM_XML_XMLNODEREADERNAVIGATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7BCAC0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeReaderNavigator_TypeDefinitionIndex = 1781;

	class XmlNodeReaderNavigator : public ::System::Object
	{
	public:
		::System::Xml::XmlNode* elemNode; // 0x10
		::System::Xml::XmlNode* logNode; // 0x18
		::Il2CppArray<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute>* docTypeNodeAttributes; // 0x20
		::System::Xml::XmlDocument* doc; // 0x28
		::System::Xml::XmlNode* curNode; // 0x30
		::System::Xml::XmlNameTable* nameTable; // 0x38
		::Il2CppArray<::System::Xml::XmlNodeReaderNavigator_VirtualAttribute>* decNodeAttributes; // 0x40
		::System::Int32 logAttrIndex; // 0x48
		::System::Boolean bCreatedOnAttribute; // 0x4C
		::System::Boolean bLogOnAttrVal; // 0x4D
		::System::Boolean bOnAttrVal; // 0x4E
		::System::Int32 attrIndex; // 0x50
		::System::Int32 nAttrInd; // 0x54
		::System::Int32 nDeclarationAttrCount; // 0x58
		::System::Int32 nLogLevel; // 0x5C
		::System::Int32 nLogAttrInd; // 0x60
		::System::Int32 nDocTypeAttrCount; // 0x64

		::System::Void _ctor(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR__CTOR_OFFSET))(this, node);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_LOCALNAME_OFFSET))(this);
		}

		::System::Boolean IsLocalNameEmpty(::System::Xml::XmlNodeType nt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNodeType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_ISLOCALNAMEEMPTY_OFFSET))(this, nt);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_VALUE_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_BASEURI_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_XMLLANG_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_SCHEMAINFO_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::Void CheckIndexCondition(::System::Int32 attributeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_CHECKINDEXCONDITION_OFFSET))(this, attributeIndex);
		}

		::System::Void InitDecAttr()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_INITDECATTR_OFFSET))(this);
		}

		::System::String* GetDeclarationAttr(::System::Xml::XmlDeclaration* decl, ::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlDeclaration*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECLARATIONATTR_OFFSET))(this, decl, name);
		}

		::System::String* GetDeclarationAttr_1(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECLARATIONATTR_1_OFFSET))(this, i);
		}

		::System::Int32 GetDecAttrInd(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDECATTRIND_OFFSET))(this, name);
		}

		::System::Void InitDocTypeAttr()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_INITDOCTYPEATTR_OFFSET))(this);
		}

		::System::String* GetDocumentTypeAttr(::System::Xml::XmlDocumentType* docType, ::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlDocumentType*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCUMENTTYPEATTR_OFFSET))(this, docType, name);
		}

		::System::String* GetDocumentTypeAttr_1(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCUMENTTYPEATTR_1_OFFSET))(this, i);
		}

		::System::Int32 GetDocTypeAttrInd(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETDOCTYPEATTRIND_OFFSET))(this, name);
		}

		::System::String* GetAttributeFromElement(::System::Xml::XmlElement* elem, ::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlElement*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTEFROMELEMENT_OFFSET))(this, elem, name);
		}

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::String* GetAttributeFromElement_1(::System::Xml::XmlElement* elem, ::System::String* name, ::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::Xml::XmlElement*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTEFROMELEMENT_1_OFFSET))(this, elem, name, ns);
		}

		::System::String* GetAttribute_1(::System::String* name, ::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_1_OFFSET))(this, name, ns);
		}

		::System::String* GetAttribute_2(::System::Int32 attributeIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETATTRIBUTE_2_OFFSET))(this, attributeIndex);
		}

		::System::Void LogMove(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOGMOVE_OFFSET))(this, level);
		}

		::System::Void RollBackMove(::System::Int32& level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_ROLLBACKMOVE_OFFSET))(this, level);
		}

		::System::Boolean get_IsOnDeclOrDocType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GET_ISONDECLORDOCTYPE_OFFSET))(this);
		}

		::System::Void ResetToAttribute(::System::Int32& level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_RESETTOATTRIBUTE_OFFSET))(this, level);
		}

		::System::Void ResetMove(::System::Int32& level, ::System::Xml::XmlNodeType& nt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Xml::XmlNodeType&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_RESETMOVE_OFFSET))(this, level, nt);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Boolean MoveToAttributeFromElement(::System::Xml::XmlElement* elem, ::System::String* name, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlElement*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTEFROMELEMENT_OFFSET))(this, elem, name, ns);
		}

		::System::Boolean MoveToAttribute_1(::System::String* name, ::System::String* namespaceURI)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_1_OFFSET))(this, name, namespaceURI);
		}

		::System::Void MoveToAttribute_2(::System::Int32 attributeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOATTRIBUTE_2_OFFSET))(this, attributeIndex);
		}

		::System::Boolean MoveToNextAttribute(::System::Int32& level)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXTATTRIBUTE_OFFSET))(this, level);
		}

		::System::Boolean MoveToParent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOPARENT_OFFSET))(this);
		}

		::System::Boolean MoveToFirstChild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOFIRSTCHILD_OFFSET))(this);
		}

		::System::Boolean MoveToNextSibling(::System::Xml::XmlNode* node)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXTSIBLING_OFFSET))(this, node);
		}

		::System::Boolean MoveToNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETONEXT_OFFSET))(this);
		}

		::System::Boolean MoveToElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_MOVETOELEMENT_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* DefaultLookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_DEFAULTLOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::String* LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}

		::System::Boolean ReadAttributeValue(::System::Int32& level, ::System::Boolean& bResolveEntity, ::System::Xml::XmlNodeType& nt)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&, ::System::Boolean&, ::System::Xml::XmlNodeType&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADERNAVIGATOR_READATTRIBUTEVALUE_OFFSET))(this, level, bResolveEntity, nt);
		}
	};
}
