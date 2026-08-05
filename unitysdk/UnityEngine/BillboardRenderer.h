#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"

namespace UnityEngine { class BillboardAsset; }

#define UNITYENGINE_BILLBOARDRENDERER_GET_BILLBOARD_OFFSET UNITYSDK_OFFSET(0x1E7BF610)
#define UNITYENGINE_BILLBOARDRENDERER_SET_BILLBOARD_OFFSET UNITYSDK_OFFSET(0x1E7BF620)
#define UNITYENGINE_BILLBOARDRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BF630)

namespace UnityEngine
{
	inline static constexpr unsigned int BillboardRenderer_TypeDefinitionIndex = 5173;

	class BillboardRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BILLBOARDRENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::BillboardAsset* get_billboard()
		{
			return ((::UnityEngine::BillboardAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BILLBOARDRENDERER_GET_BILLBOARD_OFFSET))(this);
		}

		::System::Void set_billboard(::UnityEngine::BillboardAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::BillboardAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_BILLBOARDRENDERER_SET_BILLBOARD_OFFSET))(this, value);
		}
	};
}
