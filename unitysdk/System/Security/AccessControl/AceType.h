#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AceType_TypeDefinitionIndex = 968;

	enum class AceType : ::System::Byte
	{
		AccessAllowed = 0x0,
		AccessDenied = 0x1,
		SystemAudit = 0x2,
		SystemAlarm = 0x3,
		AccessAllowedCompound = 0x4,
		AccessAllowedObject = 0x5,
		AccessDeniedObject = 0x6,
		SystemAuditObject = 0x7,
		SystemAlarmObject = 0x8,
		AccessAllowedCallback = 0x9,
		AccessDeniedCallback = 0xA,
		AccessAllowedCallbackObject = 0xB,
		AccessDeniedCallbackObject = 0xC,
		SystemAuditCallback = 0xD,
		SystemAlarmCallback = 0xE,
		SystemAuditCallbackObject = 0xF,
		SystemAlarmCallbackObject = 0x10,
		MaxDefinedAceType = 0x10,
	};
}
