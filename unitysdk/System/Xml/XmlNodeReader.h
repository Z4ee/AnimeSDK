#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/XmlNamespaceScope.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlReader.h"
#include "unitysdk/System/Xml/XmlSpace.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class ReadContentAsBinaryHelper; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNode; }
namespace System::Xml { class XmlNodeReaderNavigator; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }

#define SYSTEM_XML_XMLNODEREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1E62CDA0)
#define SYSTEM_XML_XMLNODEREADER_FINISHREADBINARY_OFFSET UNITYSDK_OFFSET(0x1E62BF80)
#define SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1E62BDB0)
#define SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1E62BDF0)
#define SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E62BD80)
#define SYSTEM_XML_XMLNODEREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1E62BD50)
#define SYSTEM_XML_XMLNODEREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1E62BBB0)
#define SYSTEM_XML_XMLNODEREADER_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1E62BBF0)
#define SYSTEM_XML_XMLNODEREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1E62BBA0)
#define SYSTEM_XML_XMLNODEREADER_GET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x1E62D080)
#define SYSTEM_XML_XMLNODEREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1E62CD80)
#define SYSTEM_XML_XMLNODEREADER_GET_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1E62CE60)
#define SYSTEM_XML_XMLNODEREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E62BC30)
#define SYSTEM_XML_XMLNODEREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1E62BC00)
#define SYSTEM_XML_XMLNODEREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1E62BA30)
#define SYSTEM_XML_XMLNODEREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1E62BAC0)
#define SYSTEM_XML_XMLNODEREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1E62CEA0)
#define SYSTEM_XML_XMLNODEREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E62B9F0)
#define SYSTEM_XML_XMLNODEREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1E62B9E0)
#define SYSTEM_XML_XMLNODEREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1E62BB10)
#define SYSTEM_XML_XMLNODEREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1E62CDB0)
#define SYSTEM_XML_XMLNODEREADER_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1E62BD00)
#define SYSTEM_XML_XMLNODEREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E62BB60)
#define SYSTEM_XML_XMLNODEREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1E62BCB0)
#define SYSTEM_XML_XMLNODEREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1E62BC60)
#define SYSTEM_XML_XMLNODEREADER_ISINREADINGSTATES_OFFSET UNITYSDK_OFFSET(0x1E62B9D0)
#define SYSTEM_XML_XMLNODEREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E62CEC0)
#define SYSTEM_XML_XMLNODEREADER_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1E62BFA0)
#define SYSTEM_XML_XMLNODEREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E62BE70)
#define SYSTEM_XML_XMLNODEREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1E62C3F0)
#define SYSTEM_XML_XMLNODEREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E62C1A0)
#define SYSTEM_XML_XMLNODEREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1E62C2D0)
#define SYSTEM_XML_XMLNODEREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1E62CF80)
#define SYSTEM_XML_XMLNODEREADER_READATZEROLEVEL_OFFSET UNITYSDK_OFFSET(0x1E62CCF0)
#define SYSTEM_XML_XMLNODEREADER_READFORWARD_OFFSET UNITYSDK_OFFSET(0x1E62CAA0)
#define SYSTEM_XML_XMLNODEREADER_READNEXTNODE_OFFSET UNITYSDK_OFFSET(0x1E62C700)
#define SYSTEM_XML_XMLNODEREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1E62CDD0)
#define SYSTEM_XML_XMLNODEREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1E62C560)
#define SYSTEM_XML_XMLNODEREADER_READ_OFFSET UNITYSDK_OFFSET(0x1E62C550)
#define SYSTEM_XML_XMLNODEREADER_RESETREADINGMARKS_OFFSET UNITYSDK_OFFSET(0x1E62CA70)
#define SYSTEM_XML_XMLNODEREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1E62CF00)
#define SYSTEM_XML_XMLNODEREADER_SETENDOFFILE_OFFSET UNITYSDK_OFFSET(0x1E62CCD0)
#define SYSTEM_XML_XMLNODEREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1E62CDC0)
#define SYSTEM_XML_XMLNODEREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1E62CFD0)
#define SYSTEM_XML_XMLNODEREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1E62D010)
#define SYSTEM_XML_XMLNODEREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1E62CFF0)
#define SYSTEM_XML_XMLNODEREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E62B900)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeReader_TypeDefinitionIndex = 1783;

	class XmlNodeReader : public ::System::Xml::XmlReader
	{
	public:
		::System::Xml::XmlNodeReaderNavigator* readerNav; // 0x10
		::System::Xml::ReadContentAsBinaryHelper* readBinaryHelper; // 0x18
		::System::Int32 curDepth; // 0x20
		::System::Xml::XmlNodeType nodeType; // 0x24
		::System::Boolean bStartFromDocument; // 0x28
		::System::Boolean fEOF; // 0x29
		::System::Boolean bInReadBinary; // 0x2A
		::System::Boolean bResolveEntity; // 0x2B
		::System::Xml::ReadState readState; // 0x2C

		::System::Void _ctor(::System::Xml::XmlNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER__CTOR_OFFSET))(this, node);
		}

		::System::Boolean IsInReadingStates()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_ISINREADINGSTATES_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_BASEURI_OFFSET))(this);
		}

		::System::Boolean get_CanResolveEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_CANRESOLVEENTITY_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_XMLLANG_OFFSET))(this);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_SCHEMAINFO_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::String* GetAttribute_1(::System::String* name, ::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_1_OFFSET))(this, name, namespaceURI);
		}

		::System::String* GetAttribute_2(::System::Int32 attributeIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_2_OFFSET))(this, attributeIndex);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void MoveToAttribute_1(::System::Int32 attributeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_MOVETOATTRIBUTE_1_OFFSET))(this, attributeIndex);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_MOVETONEXTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_MOVETOELEMENT_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READ_OFFSET))(this);
		}

		::System::Boolean Read_1(::System::Boolean fSkipChildren)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READ_1_OFFSET))(this, fSkipChildren);
		}

		::System::Boolean ReadNextNode(::System::Boolean fSkipChildren)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READNEXTNODE_OFFSET))(this, fSkipChildren);
		}

		::System::Void SetEndOfFile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_SETENDOFFILE_OFFSET))(this);
		}

		::System::Boolean ReadAtZeroLevel(::System::Boolean fSkipChildren)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READATZEROLEVEL_OFFSET))(this, fSkipChildren);
		}

		::System::Boolean ReadForward(::System::Boolean fSkipChildren)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READFORWARD_OFFSET))(this, fSkipChildren);
		}

		::System::Void ReSetReadingMarks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_RESETREADINGMARKS_OFFSET))(this);
		}

		::System::Boolean get_EOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_EOF_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_CLOSE_OFFSET))(this);
		}

		::System::Xml::ReadState get_ReadState()
		{
			return ((::System::Xml::ReadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_READSTATE_OFFSET))(this);
		}

		::System::Void Skip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_SKIP_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READSTRING_OFFSET))(this);
		}

		::System::Boolean get_HasAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_HASATTRIBUTES_OFFSET))(this);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_NAMETABLE_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Void ResolveEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_RESOLVEENTITY_OFFSET))(this);
		}

		::System::Boolean ReadAttributeValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_READATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Void FinishReadBinary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_FINISHREADBINARY_OFFSET))(this);
		}

		::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope)
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::String*>*(*)(::PVOID, ::System::Xml::XmlNamespaceScope))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET))(this, scope);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(::System::String* namespaceName)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET))(this, namespaceName);
		}

		::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Xml::IDtdInfo* get_DtdInfo()
		{
			return ((::System::Xml::IDtdInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLNODEREADER_GET_DTDINFO_OFFSET))(this);
		}
	};
}
