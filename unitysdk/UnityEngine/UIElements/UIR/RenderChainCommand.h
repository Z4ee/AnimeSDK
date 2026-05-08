#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/UIR/PoolItem.h"

#define UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x197C1F60)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int RenderChainCommand_TypeDefinitionIndex = 25115;

	class RenderChainCommand : public ::UnityEngine::UIElements::UIR::PoolItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_RENDERCHAINCOMMAND__CTOR_OFFSET))(this);
		}
	};
}
