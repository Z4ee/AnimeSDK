#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NapRenderEntityBindings_SerializedData_TypeDefinitionIndex = 6123;

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
		::UnityEngine::Vector3 customLightDirection; // 0x64
		::System::Single customBlendedDirectionalLightSize; // 0x70
		::System::Single rootBoneClipOffset; // 0x74
		::System::Single perObjectShadowResolveAlpha; // 0x78
		::System::Int32 lodIndexedRenderersCount; // 0x7C
		::Il2CppArray<::UnityEngine::Renderer*>* lodIndexedRenderers; // 0x80
		::System::Int32 lodRenderersCount; // 0x88
		::Il2CppArray<::UnityEngine::Renderer*>* lodRenderers; // 0x90
		::System::Int32 lodRendererPartIdOffsetsCount; // 0x98
		::Il2CppArray<::System::Int32>* lodRendererPartIdOffsets; // 0xA0
	};
}
