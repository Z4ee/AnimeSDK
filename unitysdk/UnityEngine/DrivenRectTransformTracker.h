#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/DrivenTransformProperties.h"

namespace UnityEngine { class Object; }
namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_DRIVENRECTTRANSFORMTRACKER_ADD_OFFSET UNITYSDK_OFFSET(0x1020)
#define UNITYENGINE_DRIVENRECTTRANSFORMTRACKER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1020)

namespace UnityEngine
{
	inline static constexpr unsigned int DrivenRectTransformTracker_TypeDefinitionIndex = 4384;

	struct alignas(1) DrivenRectTransformTracker
	{
		::System::Void Add(::UnityEngine::Object* a1, ::UnityEngine::RectTransform* a2, ::UnityEngine::DrivenTransformProperties a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::RectTransform*, ::UnityEngine::DrivenTransformProperties))((::PBYTE)hIl2Cpp + UNITYENGINE_DRIVENRECTTRANSFORMTRACKER_ADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DRIVENRECTTRANSFORMTRACKER_CLEAR_OFFSET))(this);
		}
	};
}
