#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_SPRITES_DATAUTILITY_GETINNERUV_OFFSET UNITYSDK_OFFSET(0x1EA91570)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETMINSIZE_OFFSET UNITYSDK_OFFSET(0x1EA91660)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETOUTERUV_OFFSET UNITYSDK_OFFSET(0x1EA915C0)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETPADDING_OFFSET UNITYSDK_OFFSET(0x1EA91610)
#define UNITYENGINE_SPRITES_DATAUTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA91720)

namespace UnityEngine::Sprites
{
	inline static constexpr unsigned int DataUtility_TypeDefinitionIndex = 5430;

	class DataUtility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Vector4 GetInnerUV(::UnityEngine::Sprite* sprite)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETINNERUV_OFFSET))(sprite);
		}

		static ::UnityEngine::Vector4 GetOuterUV(::UnityEngine::Sprite* sprite)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETOUTERUV_OFFSET))(sprite);
		}

		static ::UnityEngine::Vector4 GetPadding(::UnityEngine::Sprite* sprite)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETPADDING_OFFSET))(sprite);
		}

		static ::UnityEngine::Vector2 GetMinSize(::UnityEngine::Sprite* sprite)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETMINSIZE_OFFSET))(sprite);
		}
	};
}
