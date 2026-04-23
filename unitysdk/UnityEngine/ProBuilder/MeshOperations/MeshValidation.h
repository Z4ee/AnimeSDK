#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/Triangle.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_COLLECTFACEGROUPS_OFFSET UNITYSDK_OFFSET(0x1A2934F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_1_OFFSET UNITYSDK_OFFSET(0x1A292960)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_2_OFFSET UNITYSDK_OFFSET(0x1A293050)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_OFFSET UNITYSDK_OFFSET(0x1A292940)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSNONCONTIGUOUSTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1A2932F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREFACESARECOMPOSEDOFCONTIGUOUSTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1A26F300)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREMESHISVALID_OFFSET UNITYSDK_OFFSET(0x1A26CC40)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDEDGES_OFFSET UNITYSDK_OFFSET(0x1A293BA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDINDEXES_OFFSET UNITYSDK_OFFSET(0x1A293810)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDSELECTIONINDEXES_OFFSET UNITYSDK_OFFSET(0x1A293FC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEDEGENERATETRIANGLES_OFFSET UNITYSDK_OFFSET(0x1A276790)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1A277660)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshValidation_TypeDefinitionIndex = 40063;

	class MeshValidation : public ::System::Object
	{
	public:
		static ::System::Boolean ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_OFFSET))(mesh);
		}

		static ::System::Boolean ContainsDegenerateTriangles_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_1_OFFSET))(mesh, faces);
		}

		static ::System::Boolean ContainsDegenerateTriangles_2(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_2_OFFSET))(mesh, face);
		}

		static ::System::Boolean ContainsNonContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSNONCONTIGUOUSTRIANGLES_OFFSET))(mesh, face);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* EnsureFacesAreComposedOfContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREFACESARECOMPOSEDOFCONTIGUOUSTRIANGLES_OFFSET))(mesh, faces);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>* CollectFaceGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_COLLECTFACEGROUPS_OFFSET))(mesh, face);
		}

		static ::System::Boolean RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::System::Int32>* removed)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEDEGENERATETRIANGLES_OFFSET))(mesh, removed);
		}

		static ::System::Boolean RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::System::Int32>* removed)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEUNUSEDVERTICES_OFFSET))(mesh, removed);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* RebuildIndexes(::System::Collections::Generic::IEnumerable_1<::System::Int32>* indices, ::System::Collections::Generic::List_1<::System::Int32>* removed)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDINDEXES_OFFSET))(indices, removed);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* RebuildEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Collections::Generic::List_1<::System::Int32>* removed)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDEDGES_OFFSET))(edges, removed);
		}

		static ::System::Void RebuildSelectionIndexes(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*& faces, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*& edges, ::Il2CppArray<::System::Int32>*& indices, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* removed)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*&, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*&, ::Il2CppArray<::System::Int32>*&, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDSELECTIONINDEXES_OFFSET))(mesh, faces, edges, indices, removed);
		}

		static ::System::Boolean EnsureMeshIsValid(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Int32& removedVertices)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREMESHISVALID_OFFSET))(mesh, removedVertices);
		}
	};
}
