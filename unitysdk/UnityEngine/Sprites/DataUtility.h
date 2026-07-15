#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Sprite; }

#define UNITYENGINE_SPRITES_DATAUTILITY_GETINNERUV_OFFSET UNITYSDK_OFFSET(0x1D0D0550)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETMINSIZE_OFFSET UNITYSDK_OFFSET(0x1D0D0610)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETOUTERUV_OFFSET UNITYSDK_OFFSET(0x1D0D0590)
#define UNITYENGINE_SPRITES_DATAUTILITY_GETPADDING_OFFSET UNITYSDK_OFFSET(0x1D0D05D0)

namespace UnityEngine::Sprites
{
	inline static constexpr unsigned int DataUtility_TypeDefinitionIndex = 4408;

	class DataUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector4 GetInnerUV(::UnityEngine::Sprite* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETINNERUV_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 GetOuterUV(::UnityEngine::Sprite* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETOUTERUV_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector4 GetPadding(::UnityEngine::Sprite* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Sprite*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETPADDING_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 GetMinSize(::UnityEngine::Sprite* a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + UNITYENGINE_SPRITES_DATAUTILITY_GETMINSIZE_OFFSET))(a1);
		}
	};
}
