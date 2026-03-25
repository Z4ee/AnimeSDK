#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_SPRITES_DATAUTILITY_GETINNERUV_OFFSET UNITYSDK_OFFSET(0x18A51860)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETMINSIZE_OFFSET UNITYSDK_OFFSET(0x18A51950)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETOUTERUV_OFFSET UNITYSDK_OFFSET(0x18A518B0)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETPADDING_OFFSET UNITYSDK_OFFSET(0x18A51900)

namespace UnityEngine::Sprites
{
	inline static constexpr unsigned int DataUtility_TypeDefinitionIndex = 4227;

	class DataUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector4 GetInnerUV(::UnityEngine::Sprite* sprite, ::System::Boolean getAtlasData)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETINNERUV_OFFSET))(sprite, getAtlasData);
		}

		static ::UnityEngine::Vector4 GetOuterUV(::UnityEngine::Sprite* sprite, ::System::Boolean getAtlasData)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETOUTERUV_OFFSET))(sprite, getAtlasData);
		}

		static ::UnityEngine::Vector4 GetPadding(::UnityEngine::Sprite* sprite, ::System::Boolean getAtlasData)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETPADDING_OFFSET))(sprite, getAtlasData);
		}

		static ::UnityEngine::Vector2 GetMinSize(::UnityEngine::Sprite* sprite)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETMINSIZE_OFFSET))(sprite);
		}
	};
}
