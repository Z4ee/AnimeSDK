#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_LOWERRESBLITTEXTURE_LOWERRESBLITTEXTUREDONTSTRIPME_OFFSET UNITYSDK_OFFSET(0x18A14EE0)

namespace UnityEngine
{
	inline static constexpr unsigned int LowerResBlitTexture_TypeDefinitionIndex = 4194;

	class LowerResBlitTexture : public ::UnityEngine::Object
	{
	public:
		::System::Void LowerResBlitTextureDontStripMe()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_LOWERRESBLITTEXTURE_LOWERRESBLITTEXTUREDONTSTRIPME_OFFSET))(this);
		}
	};
}
