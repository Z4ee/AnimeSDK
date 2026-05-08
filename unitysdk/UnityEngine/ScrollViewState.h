#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_SCROLLVIEWSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACF7DB0)

namespace UnityEngine
{
	inline static constexpr unsigned int ScrollViewState_TypeDefinitionIndex = 6385;

	class ScrollViewState : public ::System::Object
	{
	public:
		::UnityEngine::Rect position; // 0x10
		::UnityEngine::Rect visibleRect; // 0x20
		::UnityEngine::Rect viewRect; // 0x30
		::UnityEngine::Vector2 scrollPosition; // 0x40
		::System::Boolean apply; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCROLLVIEWSTATE__CTOR_OFFSET))(this);
		}
	};
}
