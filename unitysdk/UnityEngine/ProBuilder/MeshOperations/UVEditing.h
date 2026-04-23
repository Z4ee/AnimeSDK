#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_ALIGNEDGES_OFFSET UNITYSDK_OFFSET(0x1A299970)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_APPLYUVS_OFFSET UNITYSDK_OFFSET(0x1A29B2A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_AUTOSTITCH_OFFSET UNITYSDK_OFFSET(0x1A2996E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_COLLAPSEUVS_OFFSET UNITYSDK_OFFSET(0x1A29C670)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_FINDMINIMALUV_OFFSET UNITYSDK_OFFSET(0x1A29DD30)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_FITUVS_OFFSET UNITYSDK_OFFSET(0x1A29EC00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_GETUVS_OFFSET UNITYSDK_OFFSET(0x1A29AB90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESAUTO_OFFSET UNITYSDK_OFFSET(0x1A29CE20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESBOX_1_OFFSET UNITYSDK_OFFSET(0x1A29DED0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESBOX_OFFSET UNITYSDK_OFFSET(0x1A29D550)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESSPHERE_OFFSET UNITYSDK_OFFSET(0x1A29E700)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SEWUVS_OFFSET UNITYSDK_OFFSET(0x1A29BF70)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SPLITUVS_1_OFFSET UNITYSDK_OFFSET(0x1A29C750)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SPLITUVS_OFFSET UNITYSDK_OFFSET(0x1A29AE70)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int UVEditing_TypeDefinitionIndex = 40074;

	class UVEditing : public ::System::Object
	{
	public:
		static ::System::Boolean AutoStitch(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* f1, ::UnityEngine::ProBuilder::Face* f2, ::System::Int32 channel)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Face*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_AUTOSTITCH_OFFSET))(mesh, f1, f2, channel);
		}

		static ::System::Boolean AlignEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* faceToMove, ::UnityEngine::ProBuilder::Edge edgeToAlignTo, ::UnityEngine::ProBuilder::Edge edgeToBeAligned, ::System::Int32 channel)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_ALIGNEDGES_OFFSET))(mesh, faceToMove, edgeToAlignTo, edgeToBeAligned, channel);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GetUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Int32 channel)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_GETUVS_OFFSET))(mesh, channel);
		}

		static ::System::Void ApplyUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::UnityEngine::Vector2>* uvs, ::System::Int32 channel, ::System::Boolean applyToMesh)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::Vector2>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_APPLYUVS_OFFSET))(mesh, uvs, channel, applyToMesh);
		}

		static ::System::Void SewUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::System::Int32>* indexes, ::System::Single delta)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SEWUVS_OFFSET))(mesh, indexes, delta);
		}

		static ::System::Void CollapseUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::System::Int32>* indexes)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_COLLAPSEUVS_OFFSET))(mesh, indexes);
		}

		static ::System::Void SplitUVs(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* indexes)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SPLITUVS_OFFSET))(mesh, indexes);
		}

		static ::System::Void SplitUVs_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_SPLITUVS_1_OFFSET))(mesh, faces);
		}

		static ::System::Void ProjectFacesAuto(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* faces, ::System::Int32 channel)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESAUTO_OFFSET))(mesh, faces, channel);
		}

		static ::System::Void ProjectFacesBox(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* faces, ::System::Int32 channel)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESBOX_OFFSET))(mesh, faces, channel);
		}

		static ::UnityEngine::Vector2 FindMinimalUV(::Il2CppArray<::UnityEngine::Vector2>* uvs, ::Il2CppArray<::System::Int32>* indices, ::System::Single xMin, ::System::Single yMin)
		{
			return ((::UnityEngine::Vector2(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::System::Int32>*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_FINDMINIMALUV_OFFSET))(uvs, indices, xMin, yMin);
		}

		static ::System::Void ProjectFacesBox_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::Vector2 lowerLeftAnchor, ::System::Int32 channel)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESBOX_1_OFFSET))(mesh, faces, lowerLeftAnchor, channel);
		}

		static ::System::Void ProjectFacesSphere(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::Il2CppArray<::System::Int32>* indexes, ::System::Int32 channel)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::System::Int32>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_PROJECTFACESSPHERE_OFFSET))(pb, indexes, channel);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* FitUVs(::Il2CppArray<::UnityEngine::Vector2>* uvs)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING_FITUVS_OFFSET))(uvs);
		}
	};
}
