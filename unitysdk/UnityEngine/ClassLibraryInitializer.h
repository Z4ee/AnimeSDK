#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_CLASSLIBRARYINITIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x1C165430)

namespace UnityEngine
{
	inline static constexpr unsigned int ClassLibraryInitializer_TypeDefinitionIndex = 4306;

	class ClassLibraryInitializer : public ::System::Object
	{
	public:
		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CLASSLIBRARYINITIALIZER_INIT_OFFSET))();
		}
	};
}
