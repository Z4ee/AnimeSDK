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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_DETACHFACES_1_OFFSET UNITYSDK_OFFSET(0xC0D6E70)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_DETACHFACES_OFFSET UNITYSDK_OFFSET(0xC0D6E60)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDEASGROUPS_OFFSET UNITYSDK_OFFSET(0xC0D1210)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDEPERFACE_OFFSET UNITYSDK_OFFSET(0xC0CFA20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDE_1_OFFSET UNITYSDK_OFFSET(0xC0D5640)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDE_OFFSET UNITYSDK_OFFSET(0xC0A6E20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_GETFACEGROUPS_OFFSET UNITYSDK_OFFSET(0xC0D7AB0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_GETPERIMETEREDGES_OFFSET UNITYSDK_OFFSET(0xC0D8010)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ExtrudeElements_TypeDefinitionIndex = 41694;

	class ExtrudeElements : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* Extrude(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2, ::UnityEngine::ProBuilder::ExtrudeMethod a3, ::System::Single a4)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::ProBuilder::ExtrudeMethod, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDE_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* Extrude_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDE_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* DetachFaces(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_DETACHFACES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* DetachFaces_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Boolean a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_DETACHFACES_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* ExtrudePerFace(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Single a3)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDEPERFACE_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* ExtrudeAsGroups(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2, ::System::Boolean a3, ::System::Single a4)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_EXTRUDEASGROUPS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>* GetFaceGroups(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_GETFACEGROUPS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Face*>* GetPerimeterEdges(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Face*>*(*)(::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS_GETPERIMETEREDGES_OFFSET))(a1, a2);
		}
	};
}
