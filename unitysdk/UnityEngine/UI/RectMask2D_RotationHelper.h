#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/RenderMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_RECTMASK2D_ROTATIONHELPER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3AAE380)
#define UNITYENGINE_UI_RECTMASK2D_ROTATIONHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x3AAE370)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int RectMask2D_RotationHelper_TypeDefinitionIndex = 6800;

	struct alignas(8) RectMask2D_RotationHelper
	{
		::System::Boolean m_SaveAndLoad; // 0x10
		::UnityEngine::RectTransform* m_RT; // 0x18
		::UnityEngine::Vector3 m_Position; // 0x20
		::UnityEngine::Vector2 m_Pivot; // 0x2C
		::UnityEngine::Vector2 m_AnchorMin; // 0x34
		::UnityEngine::Vector2 m_AnchorMax; // 0x3C

		::System::Void _ctor(::UnityEngine::RenderMode a1, ::UnityEngine::RectTransform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderMode, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ROTATIONHELPER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_RECTMASK2D_ROTATIONHELPER_DISPOSE_OFFSET))(this);
		}
	};
}
