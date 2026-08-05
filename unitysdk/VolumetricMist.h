#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/VolumetricMist_MistMaskModeType.h"
#include "unitysdk/VolumetricMist_MistModeType.h"
#include "unitysdk/VolumetricMist_VolumetricMistRenderInfo.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }

#define VOLUMETRICMIST_APPLYQUALITYSETTING_OFFSET UNITYSDK_OFFSET(0x1BC758B0)
#define VOLUMETRICMIST_GENERATEOPTIMIZEMESH_OFFSET UNITYSDK_OFFSET(0x1BC75CB0)
#define VOLUMETRICMIST_INITMATERIAL_OFFSET UNITYSDK_OFFSET(0x1BC756F0)
#define VOLUMETRICMIST_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1BC77160)
#define VOLUMETRICMIST_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BC754D0)
#define VOLUMETRICMIST_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x1BC75690)
#define VOLUMETRICMIST_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x1BC75590)
#define VOLUMETRICMIST_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BC771F0)
#define VOLUMETRICMIST_ONWILLRENDEROBJECT_OFFSET UNITYSDK_OFFSET(0x1BC77240)
#define VOLUMETRICMIST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC77AC0)
#define VOLUMETRICMIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC77A10)

inline static constexpr unsigned int VolumetricMist_TypeDefinitionIndex = 27339;

class VolumetricMist : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__VolumeNoise()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x5310);
	}
	static ::System::Int32* StaticGet__MistParams2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x5314);
	}
	static ::System::Int32* StaticGet__EdgeFade()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x5318);
	}
	static ::System::Int32* StaticGet__BoundingBoxScale()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x531C);
	}
	static ::System::Int32* StaticGet__NoiseScale()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x5320);
	}
	static ::System::Int32* StaticGet__AmbientScatteringColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x5324);
	}
	static ::System::Int32* StaticGet__NoiseChannelWeights()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x5328);
	}
	static ::System::Int32* StaticGet__MistParamsPartA()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x532C);
	}
	static ::System::Int32* StaticGet__MistParams1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x5330);
	}
	static ::System::Int32* StaticGet__MistMaskMap()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x5334);
	}
	static ::System::Int32* StaticGet__MainLightScatteringColor()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x5338);
	}
	static ::System::Int32* StaticGet__CustomVolumetricParams()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x533C);
	}
	static ::System::Int32* StaticGet__NoiseOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(VolumetricMist_TypeDefinitionIndex)->GetStaticField(0x5340);
	}
	::UnityEngine::Material* VolumetricMistMaterial; // 0x18
	::VolumetricMist_MistModeType MistMode; // 0x20
	::UnityEngine::Color MainLightScatteringColor; // 0x24
	::UnityEngine::Color AmbientScatteringColor; // 0x34
	::System::Single MieG; // 0x44
	::System::Single HeightFogColorBlend; // 0x48
	::System::Single Density; // 0x4C
	::System::Single Coverage; // 0x50
	::System::Single FallOff; // 0x54
	::UnityEngine::Texture3D* VolumeNoise; // 0x58
	::UnityEngine::Vector4 NoiseChannelWeights; // 0x60
	::System::Single NoiseScale; // 0x70
	::UnityEngine::Texture2D* Mask; // 0x78
	::VolumetricMist_MistMaskModeType MaskMode; // 0x80
	::System::Single WindSpeed; // 0x84
	::System::Single MistGravity; // 0x88
	::UnityEngine::Material* material; // 0x90
	::UnityEngine::MeshRenderer* renderer; // 0x98
	::UnityEngine::Vector3 noiseOffsetWS; // 0xA0
	::VolumetricMist_VolumetricMistRenderInfo renderInfo; // 0xB0
	::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality Quality; // 0xC0
	::System::Boolean disableUnderTargetQuality; // 0xC4
	::System::Boolean doNotReceiveShadow; // 0xC5
	::System::Boolean doNotBlendWithOcean; // 0xC6
	::System::Boolean optimizeShape; // 0xC7
	::System::Int32 sectorAngle; // 0xC8
	::UnityEngine::Mesh* customMesh; // 0xD0
	::System::Single innerHoleSize; // 0xD8
	::System::Boolean setAsNotReachableArea; // 0xDC
	::System::Boolean useNearQuadDepth; // 0xDD

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VOLUMETRICMIST__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_ONENABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_ONREALENABLE_OFFSET))(this);
	}

	::System::Void InitMaterial()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_INITMATERIAL_OFFSET))(this);
	}

	::System::Void GenerateOptimizeMesh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_GENERATEOPTIMIZEMESH_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_ONDESTROY_OFFSET))(this);
	}

	::System::Void ApplyQualitySetting()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_APPLYQUALITYSETTING_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_ONVALIDATE_OFFSET))(this);
	}

	::System::Void OnWillRenderObject()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICMIST_ONWILLRENDEROBJECT_OFFSET))(this);
	}
};
