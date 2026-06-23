#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDBAKEASSET_GET_GROUPCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDBA8D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDBAKEASSET_GET_SCATTERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BDBA880)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDBAKEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDBA920)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassBillboardBakeAsset_TypeDefinitionIndex = 26213;

	class GPUGrassBillboardBakeAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::UnityEngine::Vector3>* surfaceScatterLocalPositions; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* surfaceScatterLocalNormals; // 0x20
		::Il2CppArray<::System::Int32>* surfaceScatterGroupIndices; // 0x28
		::Il2CppArray<::System::Int32>* surfaceScatterMaterialIndices; // 0x30
		::Il2CppArray<::System::Single>* scatterGroupSizeMins; // 0x38
		::Il2CppArray<::System::Single>* scatterGroupSizeMaxs; // 0x40
		::Il2CppArray<::System::Single>* scatterGroupSourceVisibleScales; // 0x48
		::Il2CppArray<::System::Int32>* scatterGroupMaterialSwitchStages; // 0x50
		::Il2CppArray<::System::String*>* scatterGroupBindingKeys; // 0x58
		::Il2CppArray<::UnityEngine::Material*>* bakedMaterials; // 0x60
		::System::Int32 fallbackBillboardCount; // 0x68
		::System::Int32 randomSeed; // 0x6C
		::System::Boolean hasBakedData; // 0x70
		::System::Boolean pointsStoredInTargetLocalSpace; // 0x71

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDBAKEASSET__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ScatterCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDBAKEASSET_GET_SCATTERCOUNT_OFFSET))(this);
		}

		::System::Int32 get_GroupCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDBAKEASSET_GET_GROUPCOUNT_OFFSET))(this);
		}
	};
}
