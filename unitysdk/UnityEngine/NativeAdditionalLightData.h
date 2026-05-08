#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Type; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_NATIVEADDITIONALLIGHTDATA_REGISTERADDITIONALLIGHTDATATYPE_OFFSET UNITYSDK_OFFSET(0x1AADAE10)
#define UNITYENGINE_NATIVEADDITIONALLIGHTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD9410)

namespace UnityEngine
{
	inline static constexpr unsigned int NativeAdditionalLightData_TypeDefinitionIndex = 5268;

	class NativeAdditionalLightData : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean m_UsePipelineSettings; // 0x18
		::System::Boolean useSlowAttenuation; // 0x19
		::System::Boolean zeroAttenuation; // 0x1A
		::System::Boolean usedByParticleSystem; // 0x1B
		::System::Boolean optimizable; // 0x1C
		::System::Int64 lightSeed; // 0x20
		::System::Single minOptimizeRadius; // 0x28
		::System::Boolean hasVolumetricFog; // 0x2C
		::System::Boolean hasRealVolumetricFog; // 0x2D
		::System::Boolean useShadowTint; // 0x2E
		::System::Single shadowTintSourceAngle; // 0x30
		::System::Single shadowTintPower; // 0x34
		::UnityEngine::Color shadowTintColor; // 0x38
		::System::Boolean overrideAvatarLightRotation; // 0x48
		::System::Boolean unlockAvatarRotationX; // 0x49
		::System::Single m_AvatarLightMultiplier; // 0x4C
		::UnityEngine::Color m_AvatarLightColor; // 0x50
		::UnityEngine::Vector3 m_AvatarLightRotation; // 0x60
		::System::Int32 m_NapLightType; // 0x6C
		::System::Single m_DiffuseAttenuation; // 0x70
		::System::Single m_SpecularAttenuation; // 0x74
		::System::Single m_CharToonLighting; // 0x78
		::System::Single m_CharToonNormal; // 0x7C
		::System::Single m_BlendWeight; // 0x80
		::System::Single m_LockAngle; // 0x84
		::System::Int32 m_Priority; // 0x88
		::System::Int32 m_LightingVersion; // 0x8C
		::System::Single m_AddLightIntensity; // 0x90
		::System::Int32 m_InstanceID; // 0x94
		::UnityEngine::Matrix4x4 m_OccluderData; // 0x98
		::UnityEngine::Matrix4x4 m_LightOccluderMask; // 0xD8
		::System::Boolean useCapsulePointLight; // 0x118
		::System::Single capsulePointLightLength; // 0x11C
		::System::Boolean m_IsStaticLight; // 0x120
		::UnityEngine::Material* m_LightFunction; // 0x128
		::System::Int32 m_LightLayersMask; // 0x130
		::System::Single m_SpecularMinRoughness; // 0x134
		::System::Single m_DiffuseAttenuationFade; // 0x138
		::System::Single m_SpecularAttenuationFade; // 0x13C
		::System::Single m_AvatarRimGlowScale; // 0x140
		::UnityEngine::Vector4 m_CookieParams; // 0x144
		::UnityEngine::Color m_RTXColor; // 0x154
		::System::Single m_RTXDiffuseIntensity; // 0x164
		::System::Boolean m_RTXGI; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEADDITIONALLIGHTDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void RegisterAdditionalLightDataType(::System::Type* lightDataType)
		{
			return ((::System::Void(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_NATIVEADDITIONALLIGHTDATA_REGISTERADDITIONALLIGHTDATATYPE_OFFSET))(lightDataType);
		}
	};
}
