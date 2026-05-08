#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_EXPERIMENTAL_U2D_SPRITERENDERERGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D28B0)

namespace UnityEngine::Experimental::U2D
{
	inline static constexpr unsigned int SpriteRendererGroup_TypeDefinitionIndex = 6280;

	class SpriteRendererGroup : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_U2D_SPRITERENDERERGROUP__CTOR_OFFSET))(this);
		}
	};
}
