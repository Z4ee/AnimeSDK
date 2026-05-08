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

#define SYSTEM_XML_XMLNODEREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1AE98870)
#define SYSTEM_XML_XMLNODEREADER_FINISHREADBINARY_OFFSET UNITYSDK_OFFSET(0x1AE97A50)
#define SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1AE97880)
#define SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1AE978C0)
#define SYSTEM_XML_XMLNODEREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE97850)
#define SYSTEM_XML_XMLNODEREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1AE97820)
#define SYSTEM_XML_XMLNODEREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1AE97680)
#define SYSTEM_XML_XMLNODEREADER_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1AE976C0)
#define SYSTEM_XML_XMLNODEREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1AE97670)
#define SYSTEM_XML_XMLNODEREADER_GET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x1AE98B50)
#define SYSTEM_XML_XMLNODEREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1AE98850)
#define SYSTEM_XML_XMLNODEREADER_GET_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1AE98930)
#define SYSTEM_XML_XMLNODEREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1AE97700)
#define SYSTEM_XML_XMLNODEREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE976D0)
#define SYSTEM_XML_XMLNODEREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1AE97500)
#define SYSTEM_XML_XMLNODEREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1AE97590)
#define SYSTEM_XML_XMLNODEREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1AE98970)
#define SYSTEM_XML_XMLNODEREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AE974C0)
#define SYSTEM_XML_XMLNODEREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1AE974B0)
#define SYSTEM_XML_XMLNODEREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1AE975E0)
#define SYSTEM_XML_XMLNODEREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1AE98880)
#define SYSTEM_XML_XMLNODEREADER_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1AE977D0)
#define SYSTEM_XML_XMLNODEREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AE97630)
#define SYSTEM_XML_XMLNODEREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1AE97780)
#define SYSTEM_XML_XMLNODEREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1AE97730)
#define SYSTEM_XML_XMLNODEREADER_ISINREADINGSTATES_OFFSET UNITYSDK_OFFSET(0x1AE974A0)
#define SYSTEM_XML_XMLNODEREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AE98990)
#define SYSTEM_XML_XMLNODEREADER_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1AE97A70)
#define SYSTEM_XML_XMLNODEREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE97940)
#define SYSTEM_XML_XMLNODEREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1AE97EC0)
#define SYSTEM_XML_XMLNODEREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE97C70)
#define SYSTEM_XML_XMLNODEREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1AE97DA0)
#define SYSTEM_XML_XMLNODEREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1AE98A50)
#define SYSTEM_XML_XMLNODEREADER_READATZEROLEVEL_OFFSET UNITYSDK_OFFSET(0x1AE987C0)
#define SYSTEM_XML_XMLNODEREADER_READFORWARD_OFFSET UNITYSDK_OFFSET(0x1AE98570)
#define SYSTEM_XML_XMLNODEREADER_READNEXTNODE_OFFSET UNITYSDK_OFFSET(0x1AE981D0)
#define SYSTEM_XML_XMLNODEREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1AE988A0)
#define SYSTEM_XML_XMLNODEREADER_READ_1_OFFSET UNITYSDK_OFFSET(0x1AE98030)
#define SYSTEM_XML_XMLNODEREADER_READ_OFFSET UNITYSDK_OFFSET(0x1AE98020)
#define SYSTEM_XML_XMLNODEREADER_RESETREADINGMARKS_OFFSET UNITYSDK_OFFSET(0x1AE98540)
#define SYSTEM_XML_XMLNODEREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1AE989D0)
#define SYSTEM_XML_XMLNODEREADER_SETENDOFFILE_OFFSET UNITYSDK_OFFSET(0x1AE987A0)
#define SYSTEM_XML_XMLNODEREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1AE98890)
#define SYSTEM_XML_XMLNODEREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_GETNAMESPACESINSCOPE_OFFSET UNITYSDK_OFFSET(0x1AE98AA0)
#define SYSTEM_XML_XMLNODEREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1AE98AE0)
#define SYSTEM_XML_XMLNODEREADER_SYSTEM_XML_IXMLNAMESPACERESOLVER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x1AE98AC0)
#define SYSTEM_XML_XMLNODEREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE973D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlNodeReader_TypeDefinitionIndex = 1784;

	class XmlNodeReader : public ::System::Xml::XmlReader
	{
	public:
		::System::Xml::XmlNodeReaderNavigator* readerNav; // 0x10
		::System::Xml::ReadContentAsBinaryHelper* readBinaryHelper; // 0x18
		::System::Xml::ReadState readState; // 0x20
		::System::Int32 curDepth; // 0x24
		::System::Xml::XmlNodeType nodeType; // 0x28
		::System::Boolean bInReadBinary; // 0x2C
		::System::Boolean bStartFromDocument; // 0x2D
		::System::Boolean fEOF; // 0x2E
		::System::Boolean bResolveEntity; // 0x2F

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
