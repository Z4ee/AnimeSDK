#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Renderer; }

#define UNITYENGINE_LOD__CTOR_OFFSET UNITYSDK_OFFSET(0x22E4950)

namespace UnityEngine
{
	inline static constexpr unsigned int LOD_TypeDefinitionIndex = 4000;

	struct alignas(8) LOD
	{
		::System::Single screenRelativeTransitionHeight; // 0x10
		::System::Single fadeTransitionWidth; // 0x14
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x18

		::System::Void _ctor(::System::Single screenRelativeTransitionHeight, ::Il2CppArray<::UnityEngine::Renderer*>* renderers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_LOD__CTOR_OFFSET))(this, screenRelativeTransitionHeight, renderers);
		}
	};
}
