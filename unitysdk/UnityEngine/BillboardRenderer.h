#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"

namespace UnityEngine { class BillboardAsset; }

#define UNITYENGINE_BILLBOARDRENDERER_GET_BILLBOARD_OFFSET UNITYSDK_OFFSET(0x1AFA4440)
#define UNITYENGINE_BILLBOARDRENDERER_SET_BILLBOARD_OFFSET UNITYSDK_OFFSET(0x1AFA4450)
#define UNITYENGINE_BILLBOARDRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA4460)

namespace UnityEngine
{
	inline static constexpr unsigned int BillboardRenderer_TypeDefinitionIndex = 5174;

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
