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

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDFACES_OFFSET UNITYSDK_OFFSET(0x1881C090)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDFACE_OFFSET UNITYSDK_OFFSET(0x1881B150)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOEDGE_1_OFFSET UNITYSDK_OFFSET(0x18823E40)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOEDGE_OFFSET UNITYSDK_OFFSET(0x18823DC0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOFACE_1_OFFSET UNITYSDK_OFFSET(0x18822D60)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOFACE_OFFSET UNITYSDK_OFFSET(0x18822D50)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_BRIDGE_OFFSET UNITYSDK_OFFSET(0x18820A00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CLEARANDREFRESHMESH_OFFSET UNITYSDK_OFFSET(0x1881E630)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATEPOLYGONWITHHOLE_OFFSET UNITYSDK_OFFSET(0x1881D210)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATEPOLYGON_OFFSET UNITYSDK_OFFSET(0x1881CB70)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_1_OFFSET UNITYSDK_OFFSET(0x1881E610)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_2_OFFSET UNITYSDK_OFFSET(0x1881F910)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_3_OFFSET UNITYSDK_OFFSET(0x1881E670)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_OFFSET UNITYSDK_OFFSET(0x1881E470)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_DUPLICATEANDFLIP_OFFSET UNITYSDK_OFFSET(0x1881FE20)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_FACEWITHVERTICESANDHOLE_OFFSET UNITYSDK_OFFSET(0x1881DFD0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_FACEWITHVERTICES_OFFSET UNITYSDK_OFFSET(0x1881D170)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXINFACE_OFFSET UNITYSDK_OFFSET(0x18827930)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXINMESH_OFFSET UNITYSDK_OFFSET(0x18829FB0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXONEDGE_OFFSET UNITYSDK_OFFSET(0x18828670)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_TENTCAPWITHVERTICES_OFFSET UNITYSDK_OFFSET(0x188207B0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int AppendElements_TypeDefinitionIndex = 34210;

	class AppendElements : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::Face* AppendFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::UnityEngine::Vector3>* positions, ::Il2CppArray<::UnityEngine::Color>* colors, ::Il2CppArray<::UnityEngine::Vector2>* uv0s, ::Il2CppArray<::UnityEngine::Vector4>* uv2s, ::Il2CppArray<::UnityEngine::Vector4>* uv3s, ::UnityEngine::ProBuilder::Face* face, ::Il2CppArray<::System::Int32>* common)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::UnityEngine::Color>*, ::Il2CppArray<::UnityEngine::Vector2>*, ::Il2CppArray<::UnityEngine::Vector4>*, ::Il2CppArray<::UnityEngine::Vector4>*, ::UnityEngine::ProBuilder::Face*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDFACE_OFFSET))(mesh, positions, colors, uv0s, uv2s, uv3s, face, common);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* AppendFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>* positions, ::Il2CppArray<::Il2CppArray<::UnityEngine::Color>*>* colors, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector2>*>* uvs, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* faces, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* shared)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector3>*>*, ::Il2CppArray<::Il2CppArray<::UnityEngine::Color>*>*, ::Il2CppArray<::Il2CppArray<::UnityEngine::Vector2>*>*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDFACES_OFFSET))(mesh, positions, colors, uvs, faces, shared);
		}

		static ::UnityEngine::ProBuilder::Face* CreatePolygon(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::System::Int32>* indexes, ::System::Boolean unordered)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATEPOLYGON_OFFSET))(mesh, indexes, unordered);
		}

		static ::UnityEngine::ProBuilder::Face* CreatePolygonWithHole(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::System::Int32>* indexes, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::System::Int32>*>* holes)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::System::Int32>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATEPOLYGONWITHHOLE_OFFSET))(mesh, indexes, holes);
		}

		static ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon(::UnityEngine::ProBuilder::PolyShape* poly)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::PolyShape*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_OFFSET))(poly);
		}

		static ::System::Void ClearAndRefreshMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CLEARANDREFRESHMESH_OFFSET))(mesh);
		}

		static ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Single extrude, ::System::Boolean flipNormals)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_1_OFFSET))(mesh, points, extrude, flipNormals);
		}

		static ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon_2(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Single extrude, ::System::Boolean flipNormals, ::UnityEngine::Vector3 cameraLookAt, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>* holePoints)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::UnityEngine::Vector3, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_2_OFFSET))(mesh, points, extrude, flipNormals, cameraLookAt, holePoints);
		}

		static ::UnityEngine::ProBuilder::ActionResult* CreateShapeFromPolygon_3(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* points, ::System::Single extrude, ::System::Boolean flipNormals, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>* holePoints)
		{
			return ((::UnityEngine::ProBuilder::ActionResult*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Single, ::System::Boolean, ::System::Collections::Generic::IList_1<::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_CREATESHAPEFROMPOLYGON_3_OFFSET))(mesh, points, extrude, flipNormals, holePoints);
		}

		static ::UnityEngine::ProBuilder::FaceRebuildData* FaceWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Boolean unordered)
		{
			return ((::UnityEngine::ProBuilder::FaceRebuildData*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_FACEWITHVERTICES_OFFSET))(vertices, unordered);
		}

		static ::UnityEngine::ProBuilder::FaceRebuildData* FaceWithVerticesAndHole(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* borderVertices, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>* holes)
		{
			return ((::UnityEngine::ProBuilder::FaceRebuildData*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_FACEWITHVERTICESANDHOLE_OFFSET))(borderVertices, holes);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* TentCapWithVertices(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>* path)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*(*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_TENTCAPWITHVERTICES_OFFSET))(path);
		}

		static ::System::Void DuplicateAndFlip(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_DUPLICATEANDFLIP_OFFSET))(mesh, faces);
		}

		static ::UnityEngine::ProBuilder::Face* Bridge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge a, ::UnityEngine::ProBuilder::Edge b, ::System::Boolean allowNonManifoldGeometry)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::Edge, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_BRIDGE_OFFSET))(mesh, a, b, allowNonManifoldGeometry);
		}

		static ::UnityEngine::ProBuilder::Face* AppendVerticesToFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::Il2CppArray<::UnityEngine::Vector3>* points)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOFACE_OFFSET))(mesh, face, points);
		}

		static ::UnityEngine::ProBuilder::Face* AppendVerticesToFace_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::Il2CppArray<::UnityEngine::Vector3>* points, ::System::Boolean insertOnEdge)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOFACE_1_OFFSET))(mesh, face, points, insertOnEdge);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* AppendVerticesToEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge, ::System::Int32 count)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOEDGE_OFFSET))(mesh, edge, count);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* AppendVerticesToEdge_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges, ::System::Int32 count)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_APPENDVERTICESTOEDGE_1_OFFSET))(mesh, edges, count);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Face*>* InsertVertexInFace(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face, ::UnityEngine::Vector3 point)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXINFACE_OFFSET))(mesh, face, point);
		}

		static ::UnityEngine::ProBuilder::Vertex* InsertVertexOnEdge(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge originalEdge, ::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXONEDGE_OFFSET))(mesh, originalEdge, point);
		}

		static ::UnityEngine::ProBuilder::Vertex* InsertVertexInMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 point, ::UnityEngine::Vector3 normal)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_APPENDELEMENTS_INSERTVERTEXINMESH_OFFSET))(mesh, point, normal);
		}
	};
}
