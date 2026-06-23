#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture2D; }

#define VOLUMETRICCLOUDLAYOUTHELPER_GET_HASSINGLECLOUD_OFFSET UNITYSDK_OFFSET(0x1AF6BA00)
#define VOLUMETRICCLOUDLAYOUTHELPER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1AF6C3E0)
#define VOLUMETRICCLOUDLAYOUTHELPER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1AF6BA80)
#define VOLUMETRICCLOUDLAYOUTHELPER_UPDATEMPB_OFFSET UNITYSDK_OFFSET(0x1AF6BD50)
#define VOLUMETRICCLOUDLAYOUTHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF6C650)
#define VOLUMETRICCLOUDLAYOUTHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF6C490)

inline static constexpr unsigned int VolumetricCloudLayoutHelper_TypeDefinitionIndex = 27201;

class VolumetricCloudLayoutHelper : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::List_1<::VolumetricCloudLayoutHelper*>** StaticGet_activeHelpers()
	{
		return (::System::Collections::Generic::List_1<::VolumetricCloudLayoutHelper*>**)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudLayoutHelper_TypeDefinitionIndex)->GetStaticField(0x209C0);
	}
	::UnityEngine::Texture2D* sdfTexture; // 0x18
	::System::Single densityScale; // 0x20
	::System::Single fallOff; // 0x24
	::System::Single blendStartHeight; // 0x28
	::System::Single blendEndHeight; // 0x2C
	::System::Single lowerDensity; // 0x30
	::System::Single upperDensity; // 0x34
	::System::Single lowerType; // 0x38
	::System::Single upperType; // 0x3C
	::System::Boolean isSingleCloud; // 0x40
	::UnityEngine::Vector3 detailNoiseTiling; // 0x44
	::UnityEngine::Vector3 detailNoiseFlowSpeed; // 0x50
	::System::Int32 octaveCount; // 0x5C
	::System::Single stepDistance; // 0x60
	::System::Int32 shadowSampleCountMax; // 0x64
	::System::Single shadowTracingDistance; // 0x68
	::System::Int32 _CloudModelDataTexture; // 0x6C
	::System::Int32 _MsOctaveCount; // 0x70
	::System::Int32 _SingleCloudStepDistance; // 0x74
	::System::Int32 _SingleCloudDetailNoiseTiling; // 0x78
	::System::Int32 _SingleCloudDetailNoiseFlowSpeed; // 0x7C
	::System::Int32 _SingleCloudFallOff; // 0x80
	::System::Int32 _SingleCloudBlendStartHeight; // 0x84
	::System::Int32 _SingleCloudBlendEndHeight; // 0x88
	::System::Int32 _SingleCloudLowerDensity; // 0x8C
	::System::Int32 _SingleCloudUpperDensity; // 0x90
	::System::Int32 _SingleCloudDensityScale; // 0x94
	::System::Int32 _SingleCloudLowerType; // 0x98
	::System::Int32 _SingleCloudUpperType; // 0x9C
	::System::Int32 _SingleCloudShadowSampleCountMax; // 0xA0
	::System::Int32 _SingleCloudShadowTracingDistance; // 0xA4
	::UnityEngine::MeshRenderer* mr; // 0xA8
	::UnityEngine::MaterialPropertyBlock* mpb; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDLAYOUTHELPER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDLAYOUTHELPER__CCTOR_OFFSET))();
	}

	static ::System::Boolean get_HasSingleCloud()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDLAYOUTHELPER_GET_HASSINGLECLOUD_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDLAYOUTHELPER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDLAYOUTHELPER_ONDISABLE_OFFSET))(this);
	}

	::System::Void UpdateMPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDLAYOUTHELPER_UPDATEMPB_OFFSET))(this);
	}
};
