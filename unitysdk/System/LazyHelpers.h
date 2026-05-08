#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_LAZYHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3A9190)

namespace System
{
	inline static constexpr unsigned int LazyHelpers_TypeDefinitionIndex = 145;

	class LazyHelpers : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_PUBLICATION_ONLY_SENTINEL()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LazyHelpers_TypeDefinitionIndex)->GetStaticField(0x1A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LAZYHELPERS__CCTOR_OFFSET))();
		}
	};
}
