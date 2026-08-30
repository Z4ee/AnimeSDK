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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_COLLECTFACEGROUPS_OFFSET UNITYSDK_OFFSET(0xCFF1D50)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_1_OFFSET UNITYSDK_OFFSET(0xCFF11C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_2_OFFSET UNITYSDK_OFFSET(0xCFF1940)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_OFFSET UNITYSDK_OFFSET(0xCFF11A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSNONCONTIGUOUSTRIANGLES_OFFSET UNITYSDK_OFFSET(0xCFF1B90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREFACESARECOMPOSEDOFCONTIGUOUSTRIANGLES_OFFSET UNITYSDK_OFFSET(0xCFCDB30)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREMESHISVALID_OFFSET UNITYSDK_OFFSET(0xCFCADC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDEDGES_OFFSET UNITYSDK_OFFSET(0xCFF26E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDINDEXES_OFFSET UNITYSDK_OFFSET(0xCFF2180)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDSELECTIONINDEXES_OFFSET UNITYSDK_OFFSET(0xCFF2CF0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEDEGENERATETRIANGLES_OFFSET UNITYSDK_OFFSET(0xCFD5EF0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0xCFD6E90)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshValidation_TypeDefinitionIndex = 43316;

	class MeshValidation : public ::System::Object
	{
	public:
		static ::System::Boolean ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_OFFSET))(a1);
		}

		static ::System::Boolean ContainsDegenerateTriangles_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean ContainsDegenerateTriangles_2(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean ContainsNonContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSNONCONTIGUOUSTRIANGLES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* EnsureFacesAreComposedOfContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREFACESARECOMPOSEDOFCONTIGUOUSTRIANGLES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>* CollectFaceGroups(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_COLLECTFACEGROUPS_OFFSET))(a1, a2);
		}

		static ::System::Boolean RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEDEGENERATETRIANGLES_OFFSET))(a1, a2);
		}

		static ::System::Boolean RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEUNUSEDVERTICES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* RebuildIndexes(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDINDEXES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* RebuildEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDEDGES_OFFSET))(a1, a2);
		}

		static ::System::Void RebuildSelectionIndexes(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*& a2, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*& a3, ::Il2CppArray<::System::Int32>*& a4, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a5)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*&, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*&, ::Il2CppArray<::System::Int32>*&, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDSELECTIONINDEXES_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean EnsureMeshIsValid(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREMESHISVALID_OFFSET))(a1, a2);
		}
	};
}
