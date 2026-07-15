#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Sprite; }

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int TileAnimationData_TypeDefinitionIndex = 5844;

	struct alignas(8) TileAnimationData
	{
		::Il2CppArray<::UnityEngine::Sprite*>* m_AnimatedSprites; // 0x10
		::System::Single m_AnimationSpeed; // 0x18
		::System::Single m_AnimationStartTime; // 0x1C
	};
}
