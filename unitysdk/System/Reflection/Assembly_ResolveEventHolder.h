#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class ModuleResolveEventHandler; }

#define SYSTEM_REFLECTION_ASSEMBLY_RESOLVEEVENTHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC19E0)

namespace System::Reflection
{
	inline static constexpr unsigned int Assembly_ResolveEventHolder_TypeDefinitionIndex = 592;

	class Assembly_ResolveEventHolder : public ::System::Object
	{
	public:
		::System::Reflection::ModuleResolveEventHandler* ModuleResolve; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_ASSEMBLY_RESOLVEEVENTHOLDER__CTOR_OFFSET))(this);
		}
	};
}
