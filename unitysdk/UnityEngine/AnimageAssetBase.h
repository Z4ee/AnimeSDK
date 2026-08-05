#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_ANIMAGEASSETBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6C3A0)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageAssetBase_TypeDefinitionIndex = 39945;

	class AnimageAssetBase : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGEASSETBASE__CTOR_OFFSET))(this);
		}
	};
}
