#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlDocument.h"

namespace System { class String; }
namespace System::Xml { class XmlTextReader; }

#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1D617160)
#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1D6171A0)
#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_LOADSINGLEELEMENT_OFFSET UNITYSDK_OFFSET(0x1D617260)
#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_SYSTEM_CONFIGURATION_INTERNAL_ICONFIGERRORINFO_GET_FILENAME_OFFSET UNITYSDK_OFFSET(0x1D6171E0)
#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_SYSTEM_CONFIGURATION_INTERNAL_ICONFIGERRORINFO_GET_LINENUMBER_OFFSET UNITYSDK_OFFSET(0x1D617220)
#define SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D617120)

namespace System::Configuration
{
	inline static constexpr unsigned int ConfigXmlDocument_TypeDefinitionIndex = 4205;

	class ConfigXmlDocument : public ::System::Xml::XmlDocument
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT__CTOR_OFFSET))(this);
		}

		::System::String* get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_GET_FILENAME_OFFSET))(this);
		}

		::System::Int32 get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_GET_LINENUMBER_OFFSET))(this);
		}

		::System::String* System_Configuration_Internal_IConfigErrorInfo_get_Filename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_SYSTEM_CONFIGURATION_INTERNAL_ICONFIGERRORINFO_GET_FILENAME_OFFSET))(this);
		}

		::System::Int32 System_Configuration_Internal_IConfigErrorInfo_get_LineNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_SYSTEM_CONFIGURATION_INTERNAL_ICONFIGERRORINFO_GET_LINENUMBER_OFFSET))(this);
		}

		::System::Void LoadSingleElement(::System::String* filename, ::System::Xml::XmlTextReader* sourceReader)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Xml::XmlTextReader*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_CONFIGXMLDOCUMENT_LOADSINGLEELEMENT_OFFSET))(this, filename, sourceReader);
		}
	};
}
