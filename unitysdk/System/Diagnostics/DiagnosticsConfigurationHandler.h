#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml { class XmlNode; }

#define SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER_CREATE_OFFSET UNITYSDK_OFFSET(0x1AF44630)
#define SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF445F0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int DiagnosticsConfigurationHandler_TypeDefinitionIndex = 3079;

	class DiagnosticsConfigurationHandler : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::Object* Create(::System::Object* a1, ::System::Object* a2, ::System::Xml::XmlNode* a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::Xml::XmlNode*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_DIAGNOSTICSCONFIGURATIONHANDLER_CREATE_OFFSET))(this, a1, a2, a3);
		}
	};
}
