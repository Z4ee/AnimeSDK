#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapRenderEntityBindings_SerializedData_TypeDefinitionIndex = 6125;

	struct alignas(8) NapRenderEntityBindings_SerializedData
	{
		::System::Int32 monoRenderEntity_InstanceID; // 0x10
		::UnityEngine::Transform* middlePoint; // 0x18
		::UnityEngine::Transform* headBone; // 0x20
		::UnityEngine::Transform* rootBone; // 0x28
		::UnityEngine::Vector4 headSphereNormalCenter; // 0x30
		::UnityEngine::Vector4 cullingSphere; // 0x40
		::System::Int32 cullingSphereAnchor; // 0x50
		::System::Byte disableCullingSphere; // 0x54
		::System::Byte usePerObjectShadow; // 0x55
		::System::Byte fixShadowSamplePointOutOfFrustum; // 0x56
		::System::Byte useCustomLightDirection; // 0x57
		::System::Byte useCustomBlendedDirectionalLightSize; // 0x58
		::System::Byte clipVerticesUnderRootBone; // 0x59
		::System::Byte preferPerRendererMpb; // 0x5A
		::System::Byte preferPerMaterialMpb; // 0x5B
		::System::Byte isOrderedRenderers; // 0x5C
		::System::Byte skipClearMpb; // 0x5D
		::System::Byte fixRed; // 0x5E
		::System::Byte enabled; // 0x5F
		::System::Byte syncWithMonoRenderEntity; // 0x60
		::System::Byte shadowFadeWithHeight; // 0x61
		::System::Byte needResetShadowCasting; // 0x62
		::UnityEngine::Vector3 customLightDirection; // 0x64
		::System::Single customBlendedDirectionalLightSize; // 0x70
		::System::Single rootBoneClipOffset; // 0x74
		::System::Single perObjectShadowResolveAlpha; // 0x78
		::System::Single perObjectShadowCullDistanceScale; // 0x7C
		::System::Single fadeStartHeight; // 0x80
		::System::Single fadeEndHeight; // 0x84
		::System::Single fadeStartDistance; // 0x88
		::System::Single fadeEndDistance; // 0x8C
		::System::Int32 lodIndexedRenderersCount; // 0x90
		::Il2CppArray<::UnityEngine::Renderer*>* lodIndexedRenderers; // 0x98
		::System::Int32 lodRenderersCount; // 0xA0
		::Il2CppArray<::UnityEngine::Renderer*>* lodRenderers; // 0xA8
		::System::Int32 lodRendererPartIdOffsetsCount; // 0xB0
		::Il2CppArray<::System::Int32>* lodRendererPartIdOffsets; // 0xB8
		::System::Byte perObjectShadowOptimizeSize; // 0xC0
		::System::Single perObjectShadowMaxBoundsSize; // 0xC4
		::System::Int32 perObjectShadowLowPriorityRenderersCount; // 0xC8
		::Il2CppArray<::UnityEngine::Renderer*>* perObjectShadowLowPriorityRenderers; // 0xD0
	};
}
