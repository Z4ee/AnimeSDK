#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ReferenceVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPTEXTUREPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E7CBDC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPTEXTUREPARAMETER_INNERREFRESH_OFFSET UNITYSDK_OFFSET(0x1E7CBC40)
#define UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPTEXTUREPARAMETER_ISNULLTEX_OFFSET UNITYSDK_OFFSET(0x1E7CBEA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPTEXTUREPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E7CBDD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPTEXTUREPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CBBA0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NoInterpTextureParameter_TypeDefinitionIndex = 6066;

	class NoInterpTextureParameter : public ::UnityEngine::NAPRenderPipeline0::ReferenceVolumeParameter_1<::UnityEngine::Texture*>
	{
	public:
		::UnityEngine::Vector2Int texSize; // 0x20

		::System::Void _ctor(::UnityEngine::Texture* value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPTEXTUREPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::UnityEngine::Texture* get_value()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPTEXTUREPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Texture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPTEXTUREPARAMETER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void InnerRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPTEXTUREPARAMETER_INNERREFRESH_OFFSET))(this);
		}

		::System::Boolean IsNullTex()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPTEXTUREPARAMETER_ISNULLTEX_OFFSET))(this);
		}
	};
}
