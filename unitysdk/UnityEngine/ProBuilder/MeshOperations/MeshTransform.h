#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/PivotLocation.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_CENTERPIVOT_OFFSET UNITYSDK_OFFSET(0x1B0EF5F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_FREEZESCALETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1B0F5960)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_SETPIVOT_1_OFFSET UNITYSDK_OFFSET(0x1B0D2880)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_SETPIVOT_OFFSET UNITYSDK_OFFSET(0x1B0F5580)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshTransform_TypeDefinitionIndex = 40889;

	class MeshTransform : public ::System::Object
	{
	public:
		static ::System::Void SetPivot(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::PivotLocation a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::PivotLocation))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_SETPIVOT_OFFSET))(a1, a2);
		}

		static ::System::Void CenterPivot(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_CENTERPIVOT_OFFSET))(a1, a2);
		}

		static ::System::Void SetPivot_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_SETPIVOT_1_OFFSET))(a1, a2);
		}

		static ::System::Void FreezeScaleTransform(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHTRANSFORM_FREEZESCALETRANSFORM_OFFSET))(a1);
		}
	};
}
