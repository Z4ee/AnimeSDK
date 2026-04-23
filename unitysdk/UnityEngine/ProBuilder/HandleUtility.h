#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/CullingMode.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/HandleOrientation.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class RaycastHit; }

#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCASTBOTHCULLMODES_OFFSET UNITYSDK_OFFSET(0x1A23F600)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_1_OFFSET UNITYSDK_OFFSET(0x1A23E900)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_2_OFFSET UNITYSDK_OFFSET(0x1A23FE80)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_OFFSET UNITYSDK_OFFSET(0x1A23E8C0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1A244A20)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_2_OFFSET UNITYSDK_OFFSET(0x1A244B40)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1A243FC0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETEDGEROTATION_1_OFFSET UNITYSDK_OFFSET(0x1A243DE0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETEDGEROTATION_OFFSET UNITYSDK_OFFSET(0x1A243D20)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETFACEROTATION_1_OFFSET UNITYSDK_OFFSET(0x1A243500)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETFACEROTATION_OFFSET UNITYSDK_OFFSET(0x1A243430)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1A2415B0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETVERTEXROTATION_1_OFFSET UNITYSDK_OFFSET(0x1A243EF0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETVERTEXROTATION_OFFSET UNITYSDK_OFFSET(0x1A243E40)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_INVERSETRANSFORMRAY_OFFSET UNITYSDK_OFFSET(0x1A2408A0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_MESHRAYCAST_1_OFFSET UNITYSDK_OFFSET(0x1A240CD0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_MESHRAYCAST_OFFSET UNITYSDK_OFFSET(0x1A240B00)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_POINTISOCCLUDED_OFFSET UNITYSDK_OFFSET(0x1A241330)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_SCREENTOGUIPOINT_OFFSET UNITYSDK_OFFSET(0x1A23E850)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int HandleUtility_TypeDefinitionIndex = 39917;

	class HandleUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 ScreenToGuiPoint(::UnityEngine::Camera* camera, ::UnityEngine::Vector3 point, ::System::Single pixelsPerPoint)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_SCREENTOGUIPOINT_OFFSET))(camera, point, pixelsPerPoint);
		}

		static ::System::Boolean FaceRaycast(::UnityEngine::Ray worldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::RaycastHit*& hit, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* ignore)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::RaycastHit*&, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_OFFSET))(worldRay, mesh, hit, ignore);
		}

		static ::System::Boolean FaceRaycast_1(::UnityEngine::Ray worldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::RaycastHit*& hit, ::System::Single distance, ::UnityEngine::ProBuilder::CullingMode cullingMode, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* ignore)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::RaycastHit*&, ::System::Single, ::UnityEngine::ProBuilder::CullingMode, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_1_OFFSET))(worldRay, mesh, hit, distance, cullingMode, ignore);
		}

		static ::System::Boolean FaceRaycastBothCullModes(::UnityEngine::Ray worldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>& back, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>& front)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>&, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCASTBOTHCULLMODES_OFFSET))(worldRay, mesh, back, front);
		}

		static ::System::Boolean FaceRaycast_2(::UnityEngine::Ray InWorldRay, ::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::RaycastHit*>*& hits, ::UnityEngine::ProBuilder::CullingMode cullingMode, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* ignore)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::RaycastHit*>*&, ::UnityEngine::ProBuilder::CullingMode, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_2_OFFSET))(InWorldRay, mesh, hits, cullingMode, ignore);
		}

		static ::UnityEngine::Ray InverseTransformRay(::UnityEngine::Transform* transform, ::UnityEngine::Ray InWorldRay)
		{
			return ((::UnityEngine::Ray(*)(::UnityEngine::Transform*, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_INVERSETRANSFORMRAY_OFFSET))(transform, InWorldRay);
		}

		static ::System::Boolean MeshRaycast(::UnityEngine::Ray InWorldRay, ::UnityEngine::GameObject* gameObject, ::UnityEngine::ProBuilder::RaycastHit*& hit, ::System::Single distance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::GameObject*, ::UnityEngine::ProBuilder::RaycastHit*&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_MESHRAYCAST_OFFSET))(InWorldRay, gameObject, hit, distance);
		}

		static ::System::Boolean MeshRaycast_1(::UnityEngine::Ray InRay, ::Il2CppArray<::UnityEngine::Vector3>* mesh, ::Il2CppArray<::System::Int32>* triangles, ::UnityEngine::ProBuilder::RaycastHit*& hit, ::System::Single distance)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*, ::UnityEngine::ProBuilder::RaycastHit*&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_MESHRAYCAST_1_OFFSET))(InRay, mesh, triangles, hit, distance);
		}

		static ::System::Boolean PointIsOccluded(::UnityEngine::Camera* cam, ::UnityEngine::ProBuilder::ProBuilderMesh* pb, ::UnityEngine::Vector3 worldPoint)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_POINTISOCCLUDED_OFFSET))(cam, pb, worldPoint);
		}

		static ::UnityEngine::Quaternion GetRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* indices)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETROTATION_OFFSET))(mesh, indices);
		}

		static ::UnityEngine::Quaternion GetFaceRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::HandleOrientation orientation, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::HandleOrientation, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETFACEROTATION_OFFSET))(mesh, orientation, faces);
		}

		static ::UnityEngine::Quaternion GetFaceRotation_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Face* face)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETFACEROTATION_1_OFFSET))(mesh, face);
		}

		static ::UnityEngine::Quaternion GetEdgeRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::HandleOrientation orientation, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::HandleOrientation, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETEDGEROTATION_OFFSET))(mesh, orientation, edges);
		}

		static ::UnityEngine::Quaternion GetEdgeRotation_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::Edge edge)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETEDGEROTATION_1_OFFSET))(mesh, edge);
		}

		static ::UnityEngine::Quaternion GetVertexRotation(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::ProBuilder::HandleOrientation orientation, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* vertices)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::HandleOrientation, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETVERTEXROTATION_OFFSET))(mesh, orientation, vertices);
		}

		static ::UnityEngine::Quaternion GetVertexRotation_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Int32 vertex)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETVERTEXROTATION_1_OFFSET))(mesh, vertex);
		}

		static ::UnityEngine::Vector3 GetActiveElementPosition(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_OFFSET))(mesh, faces);
		}

		static ::UnityEngine::Vector3 GetActiveElementPosition_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_1_OFFSET))(mesh, edges);
		}

		static ::UnityEngine::Vector3 GetActiveElementPosition_2(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* vertices)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_2_OFFSET))(mesh, vertices);
		}
	};
}
