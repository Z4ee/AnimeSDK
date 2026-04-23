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

#define SYSTEM_XML_XMLREADERSETTINGS_CHECKREADONLY_OFFSET UNITYSDK_OFFSET(0x1A061810)
#define SYSTEM_XML_XMLREADERSETTINGS_CREATEDEFAULTRESOLVER_OFFSET UNITYSDK_OFFSET(0x1A061D30)
#define SYSTEM_XML_XMLREADERSETTINGS_ENABLELEGACYXMLSETTINGS_OFFSET UNITYSDK_OFFSET(0x1A061D70)
#define SYSTEM_XML_XMLREADERSETTINGS_GETXMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x1A061910)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_SCHEMAS_OFFSET UNITYSDK_OFFSET(0x1A054860)
#define SYSTEM_XML_XMLREADERSETTINGS_GET_VALIDATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A061CA0)
#define SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1A061CC0)
#define SYSTEM_XML_XMLREADERSETTINGS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A061750)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_CHECKCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1A061A20)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_CONFORMANCELEVEL_OFFSET UNITYSDK_OFFSET(0x1A0619A0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_DTDPROCESSING_OFFSET UNITYSDK_OFFSET(0x1A061C20)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNORECOMMENTS_OFFSET UNITYSDK_OFFSET(0x1A061BE0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREPROCESSINGINSTRUCTIONS_OFFSET UNITYSDK_OFFSET(0x1A061BA0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_IGNOREWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A061B60)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_ISXMLRESOLVERSET_OFFSET UNITYSDK_OFFSET(0x1A0618B0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_LINENUMBEROFFSET_OFFSET UNITYSDK_OFFSET(0x1A061920)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_LINEPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0x1A061960)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSFROMENTITIES_OFFSET UNITYSDK_OFFSET(0x1A061AE0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_MAXCHARACTERSINDOCUMENT_OFFSET UNITYSDK_OFFSET(0x1A061A60)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_NAMETABLE_OFFSET UNITYSDK_OFFSET(0x1A0617C0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_READONLY_OFFSET UNITYSDK_OFFSET(0x1A061CB0)
#define SYSTEM_XML_XMLREADERSETTINGS_SET_XMLRESOLVER_OFFSET UNITYSDK_OFFSET(0x1A0618C0)
#define SYSTEM_XML_XMLREADERSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0616E0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlReaderSettings_TypeDefinitionIndex = 1831;

	class XmlReaderSettings : public ::System::Object
	{
	public:
		static ::System::Nullable_1<::System::Boolean>* StaticGet_s_enableLegacyXmlSettings()
		{
			return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(XmlReaderSettings_TypeDefinitionIndex)->GetStaticField(0x5100);
		}
		::System::Xml::XmlResolver* xmlResolver; // 0x10
		::System::Xml::XmlNameTable* nameTable; // 0x18
		::System::Xml::Schema::XmlSchemaSet* schemas; // 0x20
		::System::Int32 linePositionOffset; // 0x28
		::System::Boolean isReadOnly; // 0x2C
		::System::Boolean useAsync; // 0x2D
		::System::Boolean _IsXmlResolverSet_k__BackingField; // 0x2E
		::System::Boolean ignorePIs; // 0x2F
		::System::Int64 maxCharactersInDocument; // 0x30
		::System::Int64 maxCharactersFromEntities; // 0x38
		::System::Xml::ConformanceLevel conformanceLevel; // 0x40
		::System::Boolean ignoreComments; // 0x44
		::System::Boolean checkCharacters; // 0x45
		::System::Boolean ignoreWhitespace; // 0x46
		::System::Boolean closeInput; // 0x47
		::System::Int32 lineNumberOffset; // 0x48
		::System::Xml::ValidationType validationType; // 0x4C
		::System::Xml::DtdProcessing dtdProcessing; // 0x50
		::System::Xml::Schema::XmlSchemaValidationFlags validationFlags; // 0x54

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
