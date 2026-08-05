#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LightType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/BakedPointShadowBakeFaceMask.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/BakedPointShadowCubemapFace.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/BakedPointShadowFaceResolution.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWATLAS_GETSLICEINDEXFORCUBEMAPFACE_OFFSET UNITYSDK_OFFSET(0x1C5B2AF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWATLAS_GETTEMPTEXTUREWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1C5B2810)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWATLAS_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C5B2930)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWATLAS_SETTEMPTEXTUREWITHINDEX_OFFSET UNITYSDK_OFFSET(0x1C5B28A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B2B60)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowAtlas_TypeDefinitionIndex = 27689;

	class BakedPointShadowAtlas : public ::UnityEngine::ScriptableObject
	{
	public:
		::UnityEngine::Texture2DArray* depthAtlas; // 0x18
		::UnityEngine::Texture2D* tempTexture0; // 0x20
		::UnityEngine::Texture2D* tempTexture1; // 0x28
		::UnityEngine::Texture2D* tempTexture2; // 0x30
		::UnityEngine::Texture2D* tempTexture3; // 0x38
		::UnityEngine::Texture2D* tempTexture4; // 0x40
		::UnityEngine::Texture2D* tempTexture5; // 0x48
		::System::String* debugName; // 0x50
		::UnityEngine::LightType bakedLightType; // 0x58
		::UnityEngine::Vector3 lightWorldPosition; // 0x5C
		::UnityEngine::Vector3 lightWorldForward; // 0x68
		::System::Single range; // 0x74
		::System::Single spotAngle; // 0x78
		::System::Single nearClip; // 0x7C
		::System::Single farClip; // 0x80
		::UnityEngine::Rendering::Universal::Internal::BakedPointShadowFaceResolution faceResolution; // 0x84
		::UnityEngine::Rendering::Universal::Internal::BakedPointShadowBakeFaceMask bakedFaceMask; // 0x88
		::System::Int32 bakedSliceCount; // 0x8C
		::Il2CppArray<::System::Int32>* sliceIndexByCubemapFace; // 0x90
		::Il2CppArray<::UnityEngine::Matrix4x4>* viewProjections; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWATLAS__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* GetTempTextureWithIndex(::System::Int32 index)
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWATLAS_GETTEMPTEXTUREWITHINDEX_OFFSET))(this, index);
		}

		::System::Void SetTempTextureWithIndex(::System::Int32 index, ::UnityEngine::Texture2D* tex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWATLAS_SETTEMPTEXTUREWITHINDEX_OFFSET))(this, index, tex);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWATLAS_GET_ISVALID_OFFSET))(this);
		}

		static ::System::Int32 GetSliceIndexForCubemapFace(::UnityEngine::Rendering::Universal::Internal::BakedPointShadowAtlas* record, ::UnityEngine::Rendering::Universal::Internal::BakedPointShadowCubemapFace face)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::Universal::Internal::BakedPointShadowAtlas*, ::UnityEngine::Rendering::Universal::Internal::BakedPointShadowCubemapFace))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWATLAS_GETSLICEINDEXFORCUBEMAPFACE_OFFSET))(record, face);
		}
	};
}
