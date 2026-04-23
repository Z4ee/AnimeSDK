#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_CLASSLIBRARYINITIALIZER_INIT_OFFSET UNITYSDK_OFFSET(0x1A42F6A0)

namespace UnityEngine
{
	inline static constexpr unsigned int ClassLibraryInitializer_TypeDefinitionIndex = 4127;

	class ClassLibraryInitializer : public ::System::Object
	{
	public:
		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_CLASSLIBRARYINITIALIZER_INIT_OFFSET))();
		}
	};
}
