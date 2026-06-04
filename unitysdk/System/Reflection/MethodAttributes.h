#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Reflection
{
	inline static constexpr unsigned int MethodAttributes_TypeDefinitionIndex = 573;

	enum class MethodAttributes : ::System::Int32
	{
		MemberAccessMask = 7,
		PrivateScope = 0,
		Private = 1,
		FamANDAssem = 2,
		Assembly = 3,
		Family = 4,
		FamORAssem = 5,
		Public = 6,
		Static = 16,
		Final = 32,
		Virtual = 64,
		HideBySig = 128,
		CheckAccessOnOverride = 512,
		VtableLayoutMask = 256,
		ReuseSlot = 0,
		NewSlot = 256,
		Abstract = 1024,
		SpecialName = 2048,
		PinvokeImpl = 8192,
		UnmanagedExport = 8,
		RTSpecialName = 4096,
		ReservedMask = 53248,
		HasSecurity = 16384,
		RequireSecObject = 32768,
	};
}
