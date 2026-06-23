#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AceFlags_TypeDefinitionIndex = 966;

	enum class AceFlags : ::System::Byte
	{
		None = 0x0,
		ObjectInherit = 0x1,
		ContainerInherit = 0x2,
		NoPropagateInherit = 0x4,
		InheritOnly = 0x8,
		InheritanceFlags = 0xF,
		Inherited = 0x10,
		SuccessfulAccess = 0x40,
		FailedAccess = 0x80,
		AuditFlags = 0xC0,
	};
}
