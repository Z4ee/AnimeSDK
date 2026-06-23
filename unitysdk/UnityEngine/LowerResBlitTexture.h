#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_LOWERRESBLITTEXTURE_LOWERRESBLITTEXTUREDONTSTRIPME_OFFSET UNITYSDK_OFFSET(0x1D6F3400)
#define UNITYENGINE_LOWERRESBLITTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F3410)

namespace UnityEngine
{
	inline static constexpr unsigned int LowerResBlitTexture_TypeDefinitionIndex = 5395;

	class LowerResBlitTexture : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWERRESBLITTEXTURE__CTOR_OFFSET))(this);
		}

		::System::Void LowerResBlitTextureDontStripMe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWERRESBLITTEXTURE_LOWERRESBLITTEXTUREDONTSTRIPME_OFFSET))(this);
		}
	};
}
