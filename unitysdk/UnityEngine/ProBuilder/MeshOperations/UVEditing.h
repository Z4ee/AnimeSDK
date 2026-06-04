#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_ALIGNEDGES_OFFSET UNITYSDK_OFFSET(0x1B0FCFC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_APPLYUVS_OFFSET UNITYSDK_OFFSET(0x1B0FE630)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_AUTOSTITCH_OFFSET UNITYSDK_OFFSET(0x1B0FCD50)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_COLLAPSEUVS_OFFSET UNITYSDK_OFFSET(0x1B0FFA60)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_FINDMINIMALUV_OFFSET UNITYSDK_OFFSET(0x1B1010B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_FITUVS_OFFSET UNITYSDK_OFFSET(0x1B101EE0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_GETUVS_OFFSET UNITYSDK_OFFSET(0x1B0FDF10)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESAUTO_OFFSET UNITYSDK_OFFSET(0x1B1001A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESBOX_1_OFFSET UNITYSDK_OFFSET(0x1B101220)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESBOX_OFFSET UNITYSDK_OFFSET(0x1B1008A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESSPHERE_OFFSET UNITYSDK_OFFSET(0x1B101AD0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SEWUVS_OFFSET UNITYSDK_OFFSET(0x1B0FF400)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SPLITUVS_1_OFFSET UNITYSDK_OFFSET(0x1B0FFB20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SPLITUVS_OFFSET UNITYSDK_OFFSET(0x1B0FE220)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int UVEditing_TypeDefinitionIndex = 40901;

	class UVEditing : public ::System::Object
	{
	public:
		static ::System::Boolean AutoStitch(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2, ::UnityEngine::ProBuilder::Face* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_AUTOSTITCH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean AlignEdges(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2, ::UnityEngine::ProBuilder::Edge a3, ::UnityEngine::ProBuilder::Edge a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_ALIGNEDGES_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GetUVs(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_GETUVS_OFFSET))(a1, a2);
		}

		static ::System::Void ApplyUVs(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::UnityEngine::Vector2>* a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_APPLYUVS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void SewUVs(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SEWUVS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CollapseUVs(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_COLLAPSEUVS_OFFSET))(a1, a2);
		}

		static ::System::Void SplitUVs(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SPLITUVS_OFFSET))(a1, a2);
		}

		static ::System::Void SplitUVs_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SPLITUVS_1_OFFSET))(a1, a2);
		}

		static ::System::Void ProjectFacesAuto(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESAUTO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ProjectFacesBox(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESBOX_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector2 FindMinimalUV(::Il2CppArray<::UnityEngine::Vector2>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_FINDMINIMALUV_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ProjectFacesBox_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* a2, ::UnityEngine::Vector2 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESBOX_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void ProjectFacesSphere(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESSPHERE_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* FitUVs(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_FITUVS_OFFSET))(a1);
		}
	};
}
