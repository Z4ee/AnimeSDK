#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define MIHOYOEMOTION_FRAMESHAPEMANAGER_FRAMEBINDING_APPLY_OFFSET UNITYSDK_OFFSET(0x1979C110)
#define MIHOYOEMOTION_FRAMESHAPEMANAGER_FRAMEBINDING__CTOR_OFFSET UNITYSDK_OFFSET(0x1979C4B0)

namespace miHoYoEmotion
{
	inline static constexpr unsigned int FrameShapeManager_FrameBinding_TypeDefinitionIndex = 37724;

	class FrameShapeManager_FrameBinding : public ::System::Object
	{
	public:
		::UnityEngine::Material* templateMat; // 0x10
		::UnityEngine::Renderer* bindingRender; // 0x18
		::System::Int32 propertyID; // 0x20
		::System::Int32 matIndex; // 0x24
		::UnityEngine::Material* _runtimeMat; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER_FRAMEBINDING__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::Texture2D* frame, ::UnityEngine::Vector2 offset, ::UnityEngine::Vector2 scale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_FRAMESHAPEMANAGER_FRAMEBINDING_APPLY_OFFSET))(this, frame, offset, scale);
		}
	};
}
