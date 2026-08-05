#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading { class Mutex; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_AUTOMUTEX_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8D8900)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_AUTOMUTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x8D88C0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_AutoMutex_TypeDefinitionIndex = 26928;

	struct alignas(8) LyraBakedDataManager_AutoMutex
	{
		::System::Threading::Mutex* m_Mutex; // 0x10

		::System::Void _ctor(::System::Threading::Mutex* mutex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Threading::Mutex*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_AUTOMUTEX__CTOR_OFFSET))(this, mutex);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDDATAMANAGER_AUTOMUTEX_DISPOSE_OFFSET))(this);
		}
	};
}
