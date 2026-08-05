#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Light; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL_COMPUTEPOINTSHADOWMATRICES_OFFSET UNITYSDK_OFFSET(0x1C4D3D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL_COMPUTESPOTSHADOWMATRICES_OFFSET UNITYSDK_OFFSET(0x1C4D4370)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL_GETNEARPLANEMINBOUND_OFFSET UNITYSDK_OFFSET(0x1C4D3900)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL_GETPOINTLIGHTSHADOWFRUSTUMFOVBIASINDEGREES_OFFSET UNITYSDK_OFFSET(0x1C4D3960)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL_GETSHADOWTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1C4D3A90)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4D4710)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowUtil_TypeDefinitionIndex = 26887;

	class BakedPointShadowUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_kCubemapOrthoBases()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowUtil_TypeDefinitionIndex)->GetStaticField(0x233A0);
		}
		// static const ::System::Int32 kMinimumPunctualLightHardShadowResolution = 0x8; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL__CCTOR_OFFSET))();
		}

		static ::System::Single GetNearPlaneMinBound(::System::Single range)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL_GETNEARPLANEMINBOUND_OFFSET))(range);
		}

		static ::System::Single GetPointLightShadowFrustumFovBiasInDegrees(::System::Int32 shadowSliceResolution, ::System::Boolean shadowFiltering)
		{
			return ((::System::Single(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL_GETPOINTLIGHTSHADOWFRUSTUMFOVBIASINDEGREES_OFFSET))(shadowSliceResolution, shadowFiltering);
		}

		static ::UnityEngine::Matrix4x4 GetShadowTransform(::UnityEngine::Matrix4x4 proj, ::UnityEngine::Matrix4x4 view)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL_GETSHADOWTRANSFORM_OFFSET))(proj, view);
		}

		static ::System::Void ComputePointShadowMatrices(::UnityEngine::Light* light, ::UnityEngine::CubemapFace face, ::System::Int32 sliceResolution, ::UnityEngine::Matrix4x4& viewMatrix, ::UnityEngine::Matrix4x4& projMatrix, ::UnityEngine::Matrix4x4& shadowMatrix)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::UnityEngine::CubemapFace, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL_COMPUTEPOINTSHADOWMATRICES_OFFSET))(light, face, sliceResolution, viewMatrix, projMatrix, shadowMatrix);
		}

		static ::System::Void ComputeSpotShadowMatrices(::UnityEngine::Light* light, ::System::Int32 sliceResolution, ::UnityEngine::Matrix4x4& viewMatrix, ::UnityEngine::Matrix4x4& projMatrix, ::UnityEngine::Matrix4x4& shadowMatrix)
		{
			return ((::System::Void(*)(::UnityEngine::Light*, ::System::Int32, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWUTIL_COMPUTESPOTSHADOWMATRICES_OFFSET))(light, sliceResolution, viewMatrix, projMatrix, shadowMatrix);
		}
	};
}
