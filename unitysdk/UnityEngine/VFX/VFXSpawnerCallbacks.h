#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace UnityEngine::VFX { class VFXExpressionValues; }
namespace UnityEngine::VFX { class VFXSpawnerState; }
namespace UnityEngine::VFX { class VisualEffect; }

#define UNITYENGINE_VFX_VFXSPAWNERCALLBACKS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5BF930)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXSpawnerCallbacks_TypeDefinitionIndex = 6006;

	class VFXSpawnerCallbacks : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXSPAWNERCALLBACKS__CTOR_OFFSET))(this);
		}
	};
}
