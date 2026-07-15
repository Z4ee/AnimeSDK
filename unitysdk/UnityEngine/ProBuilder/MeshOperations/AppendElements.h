#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class ActionResult; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }
namespace UnityEngine::ProBuilder { class PolyShape; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDFACES_OFFSET UNITYSDK_OFFSET(0xC0A2590)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDFACE_OFFSET UNITYSDK_OFFSET(0xC0A1610)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOEDGE_1_OFFSET UNITYSDK_OFFSET(0xC0AA8A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOEDGE_OFFSET UNITYSDK_OFFSET(0xC0AA830)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOFACE_1_OFFSET UNITYSDK_OFFSET(0xC0A9510)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOFACE_OFFSET UNITYSDK_OFFSET(0xC0A9500)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_BRIDGE_OFFSET UNITYSDK_OFFSET(0xC0A75C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CLEARANDREFRESHMESH_OFFSET UNITYSDK_OFFSET(0xC0A4BA0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATEPOLYGONWITHHOLE_OFFSET UNITYSDK_OFFSET(0xC0A3760)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATEPOLYGON_OFFSET UNITYSDK_OFFSET(0xC0A30A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_1_OFFSET UNITYSDK_OFFSET(0xC0A4B80)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_2_OFFSET UNITYSDK_OFFSET(0xC0A61C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_3_OFFSET UNITYSDK_OFFSET(0xC0A4BE0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_OFFSET UNITYSDK_OFFSET(0xC0A49F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_DUPLICATEANDFLIP_OFFSET UNITYSDK_OFFSET(0xC0A6690)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_FACEWITHVERTICESANDHOLE_OFFSET UNITYSDK_OFFSET(0xC0A4510)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_FACEWITHVERTICES_OFFSET UNITYSDK_OFFSET(0xC0A36C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXINFACE_OFFSET UNITYSDK_OFFSET(0xC0AE070)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXINMESH_OFFSET UNITYSDK_OFFSET(0xC0B0B60)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXONEDGE_OFFSET UNITYSDK_OFFSET(0xC0AF1C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_TENTCAPWITHVERTICES_OFFSET UNITYSDK_OFFSET(0xC0A71E0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int AppendElements_TypeDefinitionIndex = 41671;

	class AppendElements : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::Face* AppendFace(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::Il2CppArray<::UnityEngine::Color>* a3, ::Il2CppArray<::UnityEngine::Vector2>* a4, ::Il2CppArray<::UnityEngine::Vector4>* a5, ::Il2CppArray<::UnityEngine::Vector4>* a6, ::UnityEngine::ProBuilder::Face* a7, ::Il2CppArray<::System::Int32>* a8)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Color>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector4>*, ::UnityEngine::ProBuilder::Face*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDFACE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* AppendFaces(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* a2, ::Il2CppArray<::Il2CppArray<::UnityEngine::Color>*>* a3, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector2>*>* a4, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* a5, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* a6)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>*, ::Il2CppArray<::Il2CppArray<::UnityEngine::Color>*>*, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector2>*>*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDFACES_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::ProBuilder::Face* CreatePolygon(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATEPOLYGON_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::Face* CreatePolygonWithHole(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::System::Int32>*>* a3)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATEPOLYGONWITHHOLE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(::UnityEngine::ProBuilder::PolyShape* a1)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::PolyShape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_OFFSET))(a1);
		}

		static ::System::Void ClearAndRefreshMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CLEARANDREFRESHMESH_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a2, ::System::Single a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon_2(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a2, ::System::Single a3, ::System::Boolean a4, ::UnityEngine::Vector3 a5, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>* a6)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_2_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon_3(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a2, ::System::Single a3, ::System::Boolean a4, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>* a5)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::ProBuilder::FaceRebuildData* FaceWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::System::Boolean a2)
		{
			return ((::UnityEngine::ProBuilder::FaceRebuildData*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_FACEWITHVERTICES_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::FaceRebuildData* FaceWithVerticesAndHole(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* a2)
		{
			return ((::UnityEngine::ProBuilder::FaceRebuildData*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_FACEWITHVERTICESANDHOLE_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* TentCapWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_TENTCAPWITHVERTICES_OFFSET))(a1);
		}

		static ::System::Void DuplicateAndFlip(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_DUPLICATEANDFLIP_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Face* Bridge(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2, ::UnityEngine::ProBuilder::Edge a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_BRIDGE_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::ProBuilder::Face* AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2, ::Il2CppArray<::UnityEngine::Vector3>* a3)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOFACE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::Face* AppendVerticesToFace_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2, ::Il2CppArray<::UnityEngine::Vector3>* a3, ::System::Boolean a4)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOFACE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOEDGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* AppendVerticesToEdge_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* a2, ::System::Int32 a3)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOEDGE_1_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* InsertVertexInFace(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXINFACE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::Vertex* InsertVertexOnEdge(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXONEDGE_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::ProBuilder::Vertex* InsertVertexInMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXINMESH_OFFSET))(a1, a2, a3);
		}
	};
}
