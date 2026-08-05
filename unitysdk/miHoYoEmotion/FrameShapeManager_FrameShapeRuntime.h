#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/miHoYoEmotion/ElementManager_BaseShapeRuntime.h"

namespace UnityEngine { class Texture2D; }
namespace miHoYoEmotion { class FrameShapeManager_FrameBinding; }

#define MIHOYOEMOTION_FRAMESHAPEMANAGER_FRAMESHAPERUNTIME_APPLY_OFFSET UNITYSDK_OFFSET(0x1D049F60)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER_FRAMESHAPERUNTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1D04BE20)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameShapeManager_FrameShapeRuntime_TypeDefinitionIndex = 40041;

	class FrameShapeManager_FrameShapeRuntime : public ::miHoYoEmotion::ElementManager_BaseShapeRuntime
	{
	public:
		::miHoYoEmotion::FrameShapeManager_FrameBinding* binding; // 0x18
		::UnityEngine::Vector2 offset; // 0x20
		::UnityEngine::Vector2 scale; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER_FRAMESHAPERUNTIME__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::Texture2D* frame)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER_FRAMESHAPERUNTIME_APPLY_OFFSET))(this, frame);
		}
	};
}
