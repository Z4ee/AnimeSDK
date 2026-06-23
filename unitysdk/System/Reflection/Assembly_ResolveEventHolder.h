#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_REFLECTION_ASSEMBLY_RESOLVEEVENTHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE24DC0)

namespace System::Reflection
{
	inline static constexpr unsigned int Assembly_ResolveEventHolder_TypeDefinitionIndex = 567;

	class Assembly_ResolveEventHolder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_RESOLVEEVENTHOLDER__CTOR_OFFSET))(this);
		}
	};
}
