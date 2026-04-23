#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"
#include "unitysdk/UnityEngine/ProBuilder/ExtrudeMethod.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_DETACHFACES_1_OFFSET UNITYSDK_OFFSET(0x1A288B70)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_DETACHFACES_OFFSET UNITYSDK_OFFSET(0x1A288B60)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDEASGROUPS_OFFSET UNITYSDK_OFFSET(0x1A2819B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDEPERFACE_OFFSET UNITYSDK_OFFSET(0x1A27FCA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDE_1_OFFSET UNITYSDK_OFFSET(0x1A287570)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDE_OFFSET UNITYSDK_OFFSET(0x1A25A6A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_GETFACEGROUPS_OFFSET UNITYSDK_OFFSET(0x1A289840)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_GETPERIMETEREDGES_OFFSET UNITYSDK_OFFSET(0x1A289D60)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ExtrudeElements_TypeDefinitionIndex = 40052;

	class ExtrudeElements : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* Extrude(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::ProBuilder::ExtrudeMethod method, ::System::Single distance)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::ProBuilder::ExtrudeMethod, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDE_OFFSET))(mesh, faces, method, distance);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* Extrude_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Single distance, ::System::Boolean extrudeAsGroup, ::System::Boolean enableManifoldExtrude)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDE_1_OFFSET))(mesh, edges, distance, extrudeAsGroup, enableManifoldExtrude);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* DetachFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_DETACHFACES_OFFSET))(mesh, faces);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* DetachFaces_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Boolean deleteSourceFaces)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_DETACHFACES_1_OFFSET))(mesh, faces, deleteSourceFaces);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* ExtrudePerFace(::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Single distance)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDEPERFACE_OFFSET))(pb, faces, distance);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* ExtrudeAsGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Boolean compensateAngleVertexDistance, ::System::Single distance)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDEASGROUPS_OFFSET))(mesh, faces, compensateAngleVertexDistance, distance);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* GetFaceGroups(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_GETFACEGROUPS_OFFSET))(wings);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Face*>* GetPerimeterEdges(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* lookup)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Face*>*(*)(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_GETPERIMETEREDGES_OFFSET))(faces, lookup);
		}
	};
}
