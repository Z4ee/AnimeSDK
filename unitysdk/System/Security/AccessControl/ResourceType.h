#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int ResourceType_TypeDefinitionIndex = 1002;

	enum class ResourceType : ::System::Int32
	{
		Unknown = 0,
		FileObject = 1,
		Service = 2,
		Printer = 3,
		RegistryKey = 4,
		LMShare = 5,
		KernelObject = 6,
		WindowObject = 7,
		DSObject = 8,
		DSObjectAll = 9,
		ProviderDefined = 10,
		WmiGuidObject = 11,
		RegistryWow6432Key = 12,
	};
}
