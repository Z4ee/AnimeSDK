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

#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCASTBOTHCULLMODES_OFFSET UNITYSDK_OFFSET(0x1EB16AD0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_1_OFFSET UNITYSDK_OFFSET(0x1EB15E50)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_2_OFFSET UNITYSDK_OFFSET(0x1EB172D0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_OFFSET UNITYSDK_OFFSET(0x1EB15E10)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1EB1BE80)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_2_OFFSET UNITYSDK_OFFSET(0x1EB1BF80)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_OFFSET UNITYSDK_OFFSET(0x1EB1B0F0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETEDGEROTATION_1_OFFSET UNITYSDK_OFFSET(0x1EB1AF20)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETEDGEROTATION_OFFSET UNITYSDK_OFFSET(0x1EB1AE60)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETFACEROTATION_1_OFFSET UNITYSDK_OFFSET(0x1EB1A6E0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETFACEROTATION_OFFSET UNITYSDK_OFFSET(0x1EB1A610)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETROTATION_OFFSET UNITYSDK_OFFSET(0x1EB188C0)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETVERTEXROTATION_1_OFFSET UNITYSDK_OFFSET(0x1EB1B030)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETVERTEXROTATION_OFFSET UNITYSDK_OFFSET(0x1EB1AF80)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_INVERSETRANSFORMRAY_OFFSET UNITYSDK_OFFSET(0x1EB17C10)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_MESHRAYCAST_1_OFFSET UNITYSDK_OFFSET(0x1EB18030)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_MESHRAYCAST_OFFSET UNITYSDK_OFFSET(0x1EB17E60)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_POINTISOCCLUDED_OFFSET UNITYSDK_OFFSET(0x1EB18640)
#define UNITYENGINE_PROBUILDER_HANDLEUTILITY_SCREENTOGUIPOINT_OFFSET UNITYSDK_OFFSET(0x1EB15DA0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int HandleUtility_TypeDefinitionIndex = 43170;

	class HandleUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 ScreenToGuiPoint(::UnityEngine::Camera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Camera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_SCREENTOGUIPOINT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean FaceRaycast(::UnityEngine::Ray a1, ::UnityEngine::ProBuilder::ProBuilderMesh* a2, ::UnityEngine::ProBuilder::RaycastHit*& a3, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::RaycastHit*&, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FaceRaycast_1(::UnityEngine::Ray a1, ::UnityEngine::ProBuilder::ProBuilderMesh* a2, ::UnityEngine::ProBuilder::RaycastHit*& a3, ::System::Single a4, ::UnityEngine::ProBuilder::CullingMode a5, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* a6)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::RaycastHit*&, ::System::Single, ::UnityEngine::ProBuilder::CullingMode, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_1_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean FaceRaycastBothCullModes(::UnityEngine::Ray a1, ::UnityEngine::ProBuilder::ProBuilderMesh* a2, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>& a3, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>& a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>&, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::Face*, ::UnityEngine::Vector3>&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCASTBOTHCULLMODES_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FaceRaycast_2(::UnityEngine::Ray a1, ::UnityEngine::ProBuilder::ProBuilderMesh* a2, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::RaycastHit*>*& a3, ::UnityEngine::ProBuilder::CullingMode a4, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::RaycastHit*>*&, ::UnityEngine::ProBuilder::CullingMode, ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_FACERAYCAST_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Ray InverseTransformRay(::UnityEngine::Transform* a1, ::UnityEngine::Ray a2)
		{
			return ((::UnityEngine::Ray(*)(::UnityEngine::Transform*, ::UnityEngine::Ray))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_INVERSETRANSFORMRAY_OFFSET))(a1, a2);
		}

		static ::System::Boolean MeshRaycast(::UnityEngine::Ray a1, ::UnityEngine::GameObject* a2, ::UnityEngine::ProBuilder::RaycastHit*& a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::GameObject*, ::UnityEngine::ProBuilder::RaycastHit*&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_MESHRAYCAST_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean MeshRaycast_1(::UnityEngine::Ray a1, ::Il2CppArray<::UnityEngine::Vector3>* a2, ::Il2CppArray<::System::Int32>* a3, ::UnityEngine::ProBuilder::RaycastHit*& a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::UnityEngine::Ray, ::Il2CppArray<::UnityEngine::Vector3>*, ::Il2CppArray<::System::Int32>*, ::UnityEngine::ProBuilder::RaycastHit*&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_MESHRAYCAST_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean PointIsOccluded(::UnityEngine::Camera* a1, ::UnityEngine::ProBuilder::ProBuilderMesh* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_POINTISOCCLUDED_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion GetRotation(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETROTATION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion GetFaceRotation(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::HandleOrientation a2, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::HandleOrientation, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETFACEROTATION_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion GetFaceRotation_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETFACEROTATION_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion GetEdgeRotation(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::HandleOrientation a2, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::HandleOrientation, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETEDGEROTATION_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion GetEdgeRotation_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Edge a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETEDGEROTATION_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Quaternion GetVertexRotation(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::HandleOrientation a2, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a3)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::HandleOrientation, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETVERTEXROTATION_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion GetVertexRotation_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETVERTEXROTATION_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetActiveElementPosition(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetActiveElementPosition_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetActiveElementPosition_2(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_HANDLEUTILITY_GETACTIVEELEMENTPOSITION_2_OFFSET))(a1, a2);
		}
	};
}
