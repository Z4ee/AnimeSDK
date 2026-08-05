#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml { class XmlNode; }

#define SYSTEM_CONFIGURATION_NAMEVALUEFILESECTIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1D6172E0)
#define SYSTEM_CONFIGURATION_NAMEVALUEFILESECTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6172A0)

namespace System::Configuration
{
	inline static constexpr unsigned int NameValueFileSectionHandler_TypeDefinitionIndex = 4215;

	class NameValueFileSectionHandler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_NAMEVALUEFILESECTIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::Object* Create(::System::Object* parent, ::System::Object* configContext, ::System::Xml::XmlNode* section)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_NAMEVALUEFILESECTIONHANDLER_CREATE_OFFSET))(this, parent, configContext, section);
		}
	};
}
