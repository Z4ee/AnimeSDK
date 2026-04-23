#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/PivotLocation.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_CENTERPIVOT_OFFSET UNITYSDK_OFFSET(0x1A28C5F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_FREEZESCALETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1A2927A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_SETPIVOT_1_OFFSET UNITYSDK_OFFSET(0x1A26E810)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_SETPIVOT_OFFSET UNITYSDK_OFFSET(0x1A2923B0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshTransform_TypeDefinitionIndex = 40062;

	class MeshTransform : public ::System::Object
	{
	public:
		static ::System::Void SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::PivotLocation pivotLocation)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_SETPIVOT_OFFSET))(mesh, pivotLocation);
		}

		static ::System::Void CenterPivot(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::System::Int32>* indexes)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_CENTERPIVOT_OFFSET))(mesh, indexes);
		}

		static ::System::Void SetPivot_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_SETPIVOT_1_OFFSET))(mesh, worldPosition);
		}

		static ::System::Void FreezeScaleTransform(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_FREEZESCALETRANSFORM_OFFSET))(mesh);
		}
	};
}
