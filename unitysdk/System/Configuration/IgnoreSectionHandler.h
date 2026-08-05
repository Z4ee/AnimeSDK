#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml { class XmlNode; }

#define SYSTEM_CONFIGURATION_IGNORESECTIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1E973C30)
#define SYSTEM_CONFIGURATION_IGNORESECTIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E973BF0)

namespace System::Configuration
{
	inline static constexpr unsigned int IgnoreSectionHandler_TypeDefinitionIndex = 4210;

	class IgnoreSectionHandler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::Object* Create(::System::Object* parent, ::System::Object* configContext, ::System::Xml::XmlNode* section)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_IGNORESECTIONHANDLER_CREATE_OFFSET))(this, parent, configContext, section);
		}
	};
}
