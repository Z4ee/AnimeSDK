#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class VolumetricCloudBlocker;
class VolumetricCloudLayoutHelper;
namespace System { class String; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class RenderTexture; }

#define VOLUMETRICCLOUDBOXVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1B825050)

inline static constexpr unsigned int VolumetricCloudBoxVolume_TypeDefinitionIndex = 26878;

class VolumetricCloudBoxVolume : public ::UnityEngine::MonoBehaviour
{
public:
	static ::VolumetricCloudBoxVolume** StaticGet_instance()
	{
		return (::VolumetricCloudBoxVolume**)Il2CppClass::FromTypeDefinitionIndex(VolumetricCloudBoxVolume_TypeDefinitionIndex)->GetStaticField(0x4F3D0);
	}
	// static const ::System::Int32 sliceSize = 0x100; // 0x0
	::System::Boolean layoutEditMode; // 0x18
	::UnityEngine::RenderTexture* volumeDataTexture; // 0x20
	::UnityEngine::BoxCollider* boxCollider; // 0x28
	::UnityEngine::Object* hda; // 0x30
	::UnityEngine::ComputeBuffer* modelDataBuffer; // 0x38
	::Il2CppArray<::VolumetricCloudLayoutHelper*>* layoutHelpers; // 0x40
	::UnityEngine::ComputeBuffer* blockerDataBuffer; // 0x48
	::Il2CppArray<::VolumetricCloudBlocker*>* cloudBlockers; // 0x50
	::System::String* textureAssetPath; // 0x58
	::System::String* sdfAssetPath; // 0x60
	::System::Int32 _ModelDataBuffer; // 0x68
	::System::Int32 _CloudCount; // 0x6C
	::System::Int32 _VolumeCenter; // 0x70
	::System::Int32 _VolumeHalfExtent; // 0x74
	::System::Int32 _CloudModelDataTexture; // 0x78
	::System::Int32 _VolumeDataTexture; // 0x7C
	::System::Int32 _CurrentCloudIndex; // 0x80
	::System::Int32 _BlockerDataBuffer; // 0x84
	::System::Int32 _BlockerCount; // 0x88
	::System::Int32 initKernel; // 0x8C
	::System::Int32 rebuildKernel; // 0x90
	::System::Int32 bakeKernel; // 0x94
	::UnityEngine::ComputeShader* computeShader; // 0x98
	::System::Boolean initialized; // 0xA0
	::System::Int32 _BakeShadowMaxDistance; // 0xA4
	::System::Int32 _BakeShadowStepCount; // 0xA8
	::System::Int32 _BakeDetailNoiseScale; // 0xAC
	::System::Int32 _BakeDetailNoiseMipLevel; // 0xB0
	::System::Int32 _BakeDetailMipMapDistanceScale; // 0xB4
	::System::Int32 _NoiseTex; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDBOXVOLUME__CTOR_OFFSET))(this);
	}
};
