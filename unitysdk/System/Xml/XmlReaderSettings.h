#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/ConformanceLevel.h"
#include "unitysdk/System/Xml/DtdProcessing.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaValidationFlags.h"
#include "unitysdk/System/Xml/ValidationType.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::IO { class Stream; }
namespace System::IO { class TextReader; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlParserContext; }
namespace System::Xml { class XmlReader; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml { class XmlValidatingReaderImpl; }
namespace System::Xml::Schema { class ValidationEventHandler; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_XML_XMLREADERSETTINGS_ADDVALIDATION_OFFSET UNITYSDK_OFFSET(0x1DE44740)
#define SYSTEM_XML_XMLREADERSETTINGS_CHECKREADONLY_OFFSET UNITYSDK_OFFSET(0x1DE43D70)
#define SYSTEM_XML_XMLREADERSETTINGS_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE443C0)
#define SYSTEM_XML_XMLREADERSETTINGS_CREATEDEFAULTRESOLVER_OFFSET UNITYSDK_OFFSET(0x1DE44A80)
#define SYSTEM_XML_XMLREADERSETTINGS_CREATEDTDVALIDATINGREADER_OFFSET UNITYSDK_OFFSET(0x1DE44C30)
#define SYSTEM_XML_XMLREADERSETTINGS_CREATEREADER_1_OFFSET UNITYSDK_OFFSET(0x1DE44840)
#define SYSTEM_XML_XMLREADERSETTINGS_CREATEREADER_OFFSET UNITYSDK_OFFSET(0x1DE444B0)
#define SYSTEM_XML_XMLREADERSETTINGS_ENABLELEGACYXMLSETTINGS_OFFSET UNITYSDK_OFFSET(0x1DE44AC0)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x1DE3CC90)
#define SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1DE44A00)
#define SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1DE43CB0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_ASYNC_OFFSET UNITYSDK_OFFSET(0x1DE43D30)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_CHECKCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1DE43FB0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_CLOSEINPUT_OFFSET UNITYSDK_OFFSET(0x1DE44230)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_CONFORMANCELEVEL_OFFSET UNITYSDK_OFFSET(0x1DE43F30)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_DTDPROCESSING_OFFSET UNITYSDK_OFFSET(0x1DE441B0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNORECOMMENTS_OFFSET UNITYSDK_OFFSET(0x1DE44170)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREPROCESSINGINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1DE44130)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1DE440F0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_LINENUMBEROFFSET_OFFSET UNITYSDK_OFFSET(0x1DE43EB0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_LINEPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1DE43EF0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSFROMENTITIES_OFFSET UNITYSDK_OFFSET(0x1DE44070)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSINDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1DE43FF0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1DE43E10)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x1DE44370)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_VALIDATIONFLAGS_OFFSET UNITYSDK_OFFSET(0x1DE442F0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_VALIDATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1DE44270)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x1DE43E60)
#define SYSTEM_XML_XMLREADERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE43C30)

namespace System::Xml
{
	inline static constexpr unsigned int XmlReaderSettings_TypeDefinitionIndex = 1710;

	class XmlReaderSettings : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::Boolean>* StaticGet_s_enableLegacyXmlSettings()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(XmlReaderSettings_TypeDefinitionIndex)->GetStaticField(0xEA0);
		}
		::System::Xml::XmlNameTable* nameTable; // 0x10
		::System::Xml::Schema::ValidationEventHandler* valEventHandler; // 0x18
		::System::Xml::XmlResolver* xmlResolver; // 0x20
		::System::Xml::Schema::XmlSchemaSet* schemas; // 0x28
		::System::Boolean ignoreWhitespace; // 0x30
		::System::Boolean _IsXmlResolverSet_k__BackingField; // 0x31
		::System::Boolean ignoreComments; // 0x32
		::System::Boolean isReadOnly; // 0x33
		::System::Xml::ConformanceLevel conformanceLevel; // 0x34
		::System::Int64 maxCharactersInDocument; // 0x38
		::System::Int64 maxCharactersFromEntities; // 0x40
		::System::Boolean useAsync; // 0x48
		::System::Boolean closeInput; // 0x49
		::System::Boolean ignorePIs; // 0x4A
		::System::Boolean checkCharacters; // 0x4B
		::System::Int32 linePositionOffset; // 0x4C
		::System::Xml::ValidationType validationType; // 0x50
		::System::Int32 lineNumberOffset; // 0x54
		::System::Xml::Schema::XmlSchemaValidationFlags validationFlags; // 0x58
		::System::Xml::DtdProcessing dtdProcessing; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void set_Async(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_ASYNC_OFFSET))(this, value);
		}

		::System::Void set_NameTable(::System::Xml::XmlNameTable* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_NAMETABLE_OFFSET))(this, value);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_XMLRESOLVER_OFFSET))(this, value);
		}

		::System::Void set_LineNumberOffset(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_LINENUMBEROFFSET_OFFSET))(this, value);
		}

		::System::Void set_LinePositionOffset(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_LINEPOSITIONOFFSET_OFFSET))(this, value);
		}

		::System::Void set_ConformanceLevel(::System::Xml::ConformanceLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::ConformanceLevel))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_CONFORMANCELEVEL_OFFSET))(this, value);
		}

		::System::Void set_CheckCharacters(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_CHECKCHARACTERS_OFFSET))(this, value);
		}

		::System::Void set_MaxCharactersInDocument(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSINDOCUMENT_OFFSET))(this, value);
		}

		::System::Void set_MaxCharactersFromEntities(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSFROMENTITIES_OFFSET))(this, value);
		}

		::System::Void set_IgnoreWhitespace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREWHITESPACE_OFFSET))(this, value);
		}

		::System::Void set_IgnoreProcessingInstructions(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREPROCESSINGINSTRUCTIONS_OFFSET))(this, value);
		}

		::System::Void set_IgnoreComments(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_IGNORECOMMENTS_OFFSET))(this, value);
		}

		::System::Void set_DtdProcessing(::System::Xml::DtdProcessing value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::DtdProcessing))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_DTDPROCESSING_OFFSET))(this, value);
		}

		::System::Void set_CloseInput(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_CLOSEINPUT_OFFSET))(this, value);
		}

		::System::Void set_ValidationType(::System::Xml::ValidationType value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::ValidationType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_VALIDATIONTYPE_OFFSET))(this, value);
		}

		::System::Void set_ValidationFlags(::System::Xml::Schema::XmlSchemaValidationFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaValidationFlags))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_VALIDATIONFLAGS_OFFSET))(this, value);
		}

		::System::Xml::Schema::XmlSchemaSet* get_Schemas()
		{
			return ((::System::Xml::Schema::XmlSchemaSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_SCHEMAS_OFFSET))(this);
		}

		::System::Void set_Schemas(::System::Xml::Schema::XmlSchemaSet* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaSet*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_SCHEMAS_OFFSET))(this, value);
		}

		::System::Xml::XmlReaderSettings* Clone()
		{
			return ((::System::Xml::XmlReaderSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CLONE_OFFSET))(this);
		}

		::System::Xml::XmlReader* CreateReader(::System::IO::Stream* input, ::System::Uri* baseUri, ::System::String* baseUriString, ::System::Xml::XmlParserContext* inputContext)
		{
			return ((::System::Xml::XmlReader*(*)(::PVOID, ::System::IO::Stream*, ::System::Uri*, ::System::String*, ::System::Xml::XmlParserContext*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CREATEREADER_OFFSET))(this, input, baseUri, baseUriString, inputContext);
		}

		::System::Xml::XmlReader* CreateReader_1(::System::IO::TextReader* input, ::System::String* baseUriString, ::System::Xml::XmlParserContext* inputContext)
		{
			return ((::System::Xml::XmlReader*(*)(::PVOID, ::System::IO::TextReader*, ::System::String*, ::System::Xml::XmlParserContext*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CREATEREADER_1_OFFSET))(this, input, baseUriString, inputContext);
		}

		::System::Void CheckReadOnly(::System::String* propertyName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CHECKREADONLY_OFFSET))(this, propertyName);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_OFFSET))(this);
		}

		::System::Void Initialize_1(::System::Xml::XmlResolver* resolver)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_1_OFFSET))(this, resolver);
		}

		static ::System::Xml::XmlResolver* CreateDefaultResolver()
		{
			return ((::System::Xml::XmlResolver*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CREATEDEFAULTRESOLVER_OFFSET))();
		}

		::System::Xml::XmlReader* AddValidation(::System::Xml::XmlReader* reader)
		{
			return ((::System::Xml::XmlReader*(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_ADDVALIDATION_OFFSET))(this, reader);
		}

		::System::Xml::XmlValidatingReaderImpl* CreateDtdValidatingReader(::System::Xml::XmlReader* baseReader)
		{
			return ((::System::Xml::XmlValidatingReaderImpl*(*)(::PVOID, ::System::Xml::XmlReader*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_CREATEDTDVALIDATINGREADER_OFFSET))(this, baseReader);
		}

		static ::System::Boolean EnableLegacyXmlSettings()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_ENABLELEGACYXMLSETTINGS_OFFSET))();
		}
	};
}
