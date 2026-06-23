#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ReadState.h"
#include "unitysdk/System/Xml/XmlNodeType.h"
#include "unitysdk/System/Xml/XmlReader.h"
#include "unitysdk/System/Xml/XmlSpace.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Threading::Tasks { class Task; }
namespace System::Xml { class IDtdInfo; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlNamespaceManager; }
namespace System::Xml { class XmlReaderSettings; }
namespace System::Xml::Schema { class IXmlSchemaInfo; }

#define SYSTEM_XML_XMLASYNCCHECKREADER_CHECKASYNC_OFFSET UNITYSDK_OFFSET(0x1DCED920)
#define SYSTEM_XML_XMLASYNCCHECKREADER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1DCEE0A0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_CREATEASYNCCHECKWRAPPER_OFFSET UNITYSDK_OFFSET(0x1DCED680)
#define SYSTEM_XML_XMLASYNCCHECKREADER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DCEE460)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GETATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1DCEDE70)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GETATTRIBUTE_2_OFFSET UNITYSDK_OFFSET(0x1DCEDEC0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GETATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DCEDE30)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_ATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0x1DCEDE00)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_BASEURI_OFFSET UNITYSDK_OFFSET(0x1DCEDC80)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_CANREADVALUECHUNK_OFFSET UNITYSDK_OFFSET(0x1DCEE200)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_CANRESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1DCEE1A0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0x1DCEDC50)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_DTDINFO_OFFSET UNITYSDK_OFFSET(0x1DCEE4D0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_EOF_OFFSET UNITYSDK_OFFSET(0x1DCEE070)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_HASATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x1DCEE430)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_ISDEFAULT_OFFSET UNITYSDK_OFFSET(0x1DCEDCE0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_ISEMPTYELEMENT_OFFSET UNITYSDK_OFFSET(0x1DCEDCB0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_LOCALNAME_OFFSET UNITYSDK_OFFSET(0x1DCEDB90)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_NAMESPACEMANAGER_OFFSET UNITYSDK_OFFSET(0x1DCEE4A0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_NAMESPACEURI_OFFSET UNITYSDK_OFFSET(0x1DCEDBC0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1DCEE130)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DCEDB60)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x1DCEDB30)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_PREFIX_OFFSET UNITYSDK_OFFSET(0x1DCEDBF0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_QUOTECHAR_OFFSET UNITYSDK_OFFSET(0x1DCEDD10)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1DCEE0D0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_SCHEMAINFO_OFFSET UNITYSDK_OFFSET(0x1DCEDDA0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1DCED9E0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1DCEDDD0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1DCEDC20)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_XMLLANG_OFFSET UNITYSDK_OFFSET(0x1DCEDD70)
#define SYSTEM_XML_XMLASYNCCHECKREADER_GET_XMLSPACE_OFFSET UNITYSDK_OFFSET(0x1DCEDD40)
#define SYSTEM_XML_XMLASYNCCHECKREADER_ISSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1DCEE370)
#define SYSTEM_XML_XMLASYNCCHECKREADER_LOOKUPNAMESPACE_OFFSET UNITYSDK_OFFSET(0x1DCEE160)
#define SYSTEM_XML_XMLASYNCCHECKREADER_MOVETOATTRIBUTE_1_OFFSET UNITYSDK_OFFSET(0x1DCEDF40)
#define SYSTEM_XML_XMLASYNCCHECKREADER_MOVETOATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DCEDF00)
#define SYSTEM_XML_XMLASYNCCHECKREADER_MOVETOCONTENT_OFFSET UNITYSDK_OFFSET(0x1DCEE2B0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_MOVETOELEMENT_OFFSET UNITYSDK_OFFSET(0x1DCEDFE0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_MOVETOFIRSTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DCEDF80)
#define SYSTEM_XML_XMLASYNCCHECKREADER_MOVETONEXTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1DCEDFB0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_READATTRIBUTEVALUE_OFFSET UNITYSDK_OFFSET(0x1DCEE010)
#define SYSTEM_XML_XMLASYNCCHECKREADER_READELEMENTSTRING_OFFSET UNITYSDK_OFFSET(0x1DCEE310)
#define SYSTEM_XML_XMLASYNCCHECKREADER_READENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1DCEE340)
#define SYSTEM_XML_XMLASYNCCHECKREADER_READINNERXML_OFFSET UNITYSDK_OFFSET(0x1DCEE400)
#define SYSTEM_XML_XMLASYNCCHECKREADER_READSTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1DCEE2E0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_READSTRING_OFFSET UNITYSDK_OFFSET(0x1DCEE280)
#define SYSTEM_XML_XMLASYNCCHECKREADER_READTOFOLLOWING_OFFSET UNITYSDK_OFFSET(0x1DCEE3C0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_READVALUECHUNK_OFFSET UNITYSDK_OFFSET(0x1DCEE230)
#define SYSTEM_XML_XMLASYNCCHECKREADER_READ_OFFSET UNITYSDK_OFFSET(0x1DCEE040)
#define SYSTEM_XML_XMLASYNCCHECKREADER_RESOLVEENTITY_OFFSET UNITYSDK_OFFSET(0x1DCEE1D0)
#define SYSTEM_XML_XMLASYNCCHECKREADER_SKIP_OFFSET UNITYSDK_OFFSET(0x1DCEE100)
#define SYSTEM_XML_XMLASYNCCHECKREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCED890)

namespace System::Xml
{
	inline static constexpr unsigned int XmlAsyncCheckReader_TypeDefinitionIndex = 1703;

	class XmlAsyncCheckReader : public ::System::Xml::XmlReader
	{
	public:
		::System::Xml::XmlReader* coreReader; // 0x10
		::System::Threading::Tasks::Task* lastTask; // 0x18

		::System::Void _ctor(::System::Xml::XmlReader* reader)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER__CTOR_OFFSET))(this, reader);
		}

		static ::System::Xml::XmlAsyncCheckReader* CreateAsyncCheckWrapper(::System::Xml::XmlReader* reader)
		{
			return ((::System::Xml::XmlAsyncCheckReader*(*)(::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_CREATEASYNCCHECKWRAPPER_OFFSET))(reader);
		}

		::System::Void CheckAsync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_CHECKASYNC_OFFSET))(this);
		}

		::System::Xml::XmlReaderSettings* get_Settings()
		{
			return ((::System::Xml::XmlReaderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_SETTINGS_OFFSET))(this);
		}

		::System::Xml::XmlNodeType get_NodeType()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_NODETYPE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_LocalName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_LOCALNAME_OFFSET))(this);
		}

		::System::String* get_NamespaceURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_NAMESPACEURI_OFFSET))(this);
		}

		::System::String* get_Prefix()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_PREFIX_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_VALUE_OFFSET))(this);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_DEPTH_OFFSET))(this);
		}

		::System::String* get_BaseURI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_BASEURI_OFFSET))(this);
		}

		::System::Boolean get_IsEmptyElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_ISEMPTYELEMENT_OFFSET))(this);
		}

		::System::Boolean get_IsDefault()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_ISDEFAULT_OFFSET))(this);
		}

		::System::Char get_QuoteChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_QUOTECHAR_OFFSET))(this);
		}

		::System::Xml::XmlSpace get_XmlSpace()
		{
			return ((::System::Xml::XmlSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_XMLSPACE_OFFSET))(this);
		}

		::System::String* get_XmlLang()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_XMLLANG_OFFSET))(this);
		}

		::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo()
		{
			return ((::System::Xml::Schema::IXmlSchemaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_SCHEMAINFO_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Int32 get_AttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_ATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::String* GetAttribute(::System::String* name)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GETATTRIBUTE_OFFSET))(this, name);
		}

		::System::String* GetAttribute_1(::System::String* name, ::System::String* namespaceURI)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GETATTRIBUTE_1_OFFSET))(this, name, namespaceURI);
		}

		::System::String* GetAttribute_2(::System::Int32 i)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GETATTRIBUTE_2_OFFSET))(this, i);
		}

		::System::Boolean MoveToAttribute(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_MOVETOATTRIBUTE_OFFSET))(this, name);
		}

		::System::Void MoveToAttribute_1(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_MOVETOATTRIBUTE_1_OFFSET))(this, i);
		}

		::System::Boolean MoveToFirstAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_MOVETOFIRSTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToNextAttribute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_MOVETONEXTATTRIBUTE_OFFSET))(this);
		}

		::System::Boolean MoveToElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_MOVETOELEMENT_OFFSET))(this);
		}

		::System::Boolean ReadAttributeValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_READATTRIBUTEVALUE_OFFSET))(this);
		}

		::System::Boolean Read()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_READ_OFFSET))(this);
		}

		::System::Boolean get_EOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_EOF_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_CLOSE_OFFSET))(this);
		}

		::System::Xml::ReadState get_ReadState()
		{
			return ((::System::Xml::ReadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_READSTATE_OFFSET))(this);
		}

		::System::Void Skip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_SKIP_OFFSET))(this);
		}

		::System::Xml::XmlNameTable* get_NameTable()
		{
			return ((::System::Xml::XmlNameTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_NAMETABLE_OFFSET))(this);
		}

		::System::String* LookupNamespace(::System::String* prefix)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_LOOKUPNAMESPACE_OFFSET))(this, prefix);
		}

		::System::Boolean get_CanResolveEntity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_CANRESOLVEENTITY_OFFSET))(this);
		}

		::System::Void ResolveEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_RESOLVEENTITY_OFFSET))(this);
		}

		::System::Boolean get_CanReadValueChunk()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_CANREADVALUECHUNK_OFFSET))(this);
		}

		::System::Int32 ReadValueChunk(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_READVALUECHUNK_OFFSET))(this, buffer, index, count);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_READSTRING_OFFSET))(this);
		}

		::System::Xml::XmlNodeType MoveToContent()
		{
			return ((::System::Xml::XmlNodeType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_MOVETOCONTENT_OFFSET))(this);
		}

		::System::Void ReadStartElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_READSTARTELEMENT_OFFSET))(this);
		}

		::System::String* ReadElementString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_READELEMENTSTRING_OFFSET))(this);
		}

		::System::Void ReadEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_READENDELEMENT_OFFSET))(this);
		}

		::System::Boolean IsStartElement(::System::String* localname, ::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_ISSTARTELEMENT_OFFSET))(this, localname, ns);
		}

		::System::Boolean ReadToFollowing(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_READTOFOLLOWING_OFFSET))(this, name);
		}

		::System::String* ReadInnerXml()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_READINNERXML_OFFSET))(this);
		}

		::System::Boolean get_HasAttributes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_HASATTRIBUTES_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Xml::XmlNamespaceManager* get_NamespaceManager()
		{
			return ((::System::Xml::XmlNamespaceManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_NAMESPACEMANAGER_OFFSET))(this);
		}

		::System::Xml::IDtdInfo* get_DtdInfo()
		{
			return ((::System::Xml::IDtdInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLASYNCCHECKREADER_GET_DTDINFO_OFFSET))(this);
		}
	};
}
