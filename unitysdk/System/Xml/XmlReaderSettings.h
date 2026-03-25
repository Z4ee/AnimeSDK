#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/ConformanceLevel.h"
#include "unitysdk/System/Xml/DtdProcessing.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaValidationFlags.h"
#include "unitysdk/System/Xml/ValidationType.h"

namespace System { class String; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlResolver; }
namespace System::Xml::Schema { class XmlSchemaSet; }

#define SYSTEM_XML_XMLREADERSETTINGS_CHECKREADONLY_OFFSET UNITYSDK_OFFSET(0x18626E00)
#define SYSTEM_XML_XMLREADERSETTINGS_CREATEDEFAULTRESOLVER_OFFSET UNITYSDK_OFFSET(0x18627340)
#define SYSTEM_XML_XMLREADERSETTINGS_ENABLELEGACYXMLSETTINGS_OFFSET UNITYSDK_OFFSET(0x18627380)
#define SYSTEM_XML_XMLREADERSETTINGS_GETXMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x18626F00)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x18619D40)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_VALIDATIONTYPE_OFFSET UNITYSDK_OFFSET(0x18627290)
#define SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x186272B0)
#define SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18626D20)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_CHECKCHARACTERS_OFFSET UNITYSDK_OFFSET(0x18627010)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_CONFORMANCELEVEL_OFFSET UNITYSDK_OFFSET(0x18626F90)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_DTDPROCESSING_OFFSET UNITYSDK_OFFSET(0x18627210)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNORECOMMENTS_OFFSET UNITYSDK_OFFSET(0x186271D0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREPROCESSINGINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x18627190)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREWHITESPACE_OFFSET UNITYSDK_OFFSET(0x18627150)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_ISXMLRESOLVERSET_OFFSET UNITYSDK_OFFSET(0x18626EA0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_LINENUMBEROFFSET_OFFSET UNITYSDK_OFFSET(0x18626F10)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_LINEPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x18626F50)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSFROMENTITIES_OFFSET UNITYSDK_OFFSET(0x186270D0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSINDOCUMENT_OFFSET UNITYSDK_OFFSET(0x18627050)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x18626DB0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_READONLY_OFFSET UNITYSDK_OFFSET(0x186272A0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x18626EB0)
#define SYSTEM_XML_XMLREADERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x18626C90)

namespace System::Xml
{
	inline static constexpr unsigned int XmlReaderSettings_TypeDefinitionIndex = 1830;

	class XmlReaderSettings : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::Boolean>* StaticGet_s_enableLegacyXmlSettings()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(XmlReaderSettings_TypeDefinitionIndex)->GetStaticField(0x4A40);
		}
		::System::Xml::XmlResolver* xmlResolver; // 0x10
		::System::Xml::Schema::XmlSchemaSet* schemas; // 0x18
		::System::Xml::XmlNameTable* nameTable; // 0x20
		::System::Boolean ignoreWhitespace; // 0x28
		::System::Boolean useAsync; // 0x29
		::System::Boolean checkCharacters; // 0x2A
		::System::Boolean ignoreComments; // 0x2B
		::System::Xml::ConformanceLevel conformanceLevel; // 0x2C
		::System::Xml::Schema::XmlSchemaValidationFlags validationFlags; // 0x30
		::System::Xml::DtdProcessing dtdProcessing; // 0x34
		::System::Int64 maxCharactersInDocument; // 0x38
		::System::Boolean closeInput; // 0x40
		::System::Boolean ignorePIs; // 0x41
		::System::Boolean _IsXmlResolverSet_k__BackingField; // 0x42
		::System::Boolean isReadOnly; // 0x43
		::System::Xml::ValidationType validationType; // 0x44
		::System::Int32 linePositionOffset; // 0x48
		::System::Int32 lineNumberOffset; // 0x4C
		::System::Int64 maxCharactersFromEntities; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS__CTOR_OFFSET))(this);
		}

		::System::Void set_NameTable(::System::Xml::XmlNameTable* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlNameTable*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_NAMETABLE_OFFSET))(this, value);
		}

		::System::Void set_IsXmlResolverSet(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_ISXMLRESOLVERSET_OFFSET))(this, value);
		}

		::System::Void set_XmlResolver(::System::Xml::XmlResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_XMLRESOLVER_OFFSET))(this, value);
		}

		::System::Xml::XmlResolver* GetXmlResolver()
		{
			return ((::System::Xml::XmlResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GETXMLRESOLVER_OFFSET))(this);
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

		::System::Xml::ValidationType get_ValidationType()
		{
			return ((::System::Xml::ValidationType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_VALIDATIONTYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaSet* get_Schemas()
		{
			return ((::System::Xml::Schema::XmlSchemaSet*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_GET_SCHEMAS_OFFSET))(this);
		}

		::System::Void set_ReadOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_SET_READONLY_OFFSET))(this, value);
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

		static ::System::Boolean EnableLegacyXmlSettings()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLREADERSETTINGS_ENABLELEGACYXMLSETTINGS_OFFSET))();
		}
	};
}
