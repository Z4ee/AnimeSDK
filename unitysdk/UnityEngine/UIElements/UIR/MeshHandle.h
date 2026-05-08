#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/UIR/PoolItem.h"

#define UNITYENGINE_UIELEMENTS_UIR_MESHHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x197C1F40)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int MeshHandle_TypeDefinitionIndex = 25111;

	class MeshHandle : public ::UnityEngine::UIElements::UIR::PoolItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_MESHHANDLE__CTOR_OFFSET))(this);
		}
	};
}
