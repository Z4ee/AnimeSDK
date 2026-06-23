#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/BakedPointShadowBakeFaceMask.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/BakedPointShadowFaceResolution.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine::Rendering::Universal::Internal { class BakedPointShadowAtlas; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEPOINTSHADOWSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C403190)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakePointShadowSettings_TypeDefinitionIndex = 27296;

	class BakePointShadowSettings : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* explicitMeshRenderers; // 0x10
		::UnityEngine::Light* targetLight; // 0x18
		::UnityEngine::Texture2DArray* outputTexture2DArray; // 0x20
		::UnityEngine::Rendering::Universal::Internal::BakedPointShadowAtlas* atlas; // 0x28
		::UnityEngine::LayerMask geometryMask; // 0x30
		::UnityEngine::Rendering::Universal::Internal::BakedPointShadowFaceResolution fallbackFaceResolution; // 0x34
		::System::Boolean onlyStaticGameObjects; // 0x38
		::UnityEngine::Rendering::Universal::Internal::BakedPointShadowBakeFaceMask fallbackBakeFaceMask; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEPOINTSHADOWSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
