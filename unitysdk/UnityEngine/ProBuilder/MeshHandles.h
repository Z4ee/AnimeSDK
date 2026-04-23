#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_1_OFFSET UNITYSDK_OFFSET(0x1A2544F0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_OFFSET UNITYSDK_OFFSET(0x1A2535E0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_1_OFFSET UNITYSDK_OFFSET(0x1A2517F0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_OFFSET UNITYSDK_OFFSET(0x1A2510C0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESHFROMFACES_OFFSET UNITYSDK_OFFSET(0x1A250E60)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESH_OFFSET UNITYSDK_OFFSET(0x1A250BF0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_1_OFFSET UNITYSDK_OFFSET(0x1A252240)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_OFFSET UNITYSDK_OFFSET(0x1A252CB0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTMESH_OFFSET UNITYSDK_OFFSET(0x1A251F70)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_1_OFFSET UNITYSDK_OFFSET(0x1A251E10)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_OFFSET UNITYSDK_OFFSET(0x1A251C10)
#define UNITYENGINE_PROBUILDER_MESHHANDLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A254F60)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MeshHandles_TypeDefinitionIndex = 39930;

	class MeshHandles : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_s_Vector2List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x25E70);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_IndexList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x25E78);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_SharedVertexIndexList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x25E80);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_s_Vector4List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x25E88);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_s_Vector3List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x25E90);
		}
		static ::UnityEngine::Vector2* StaticGet_k_Billboard3()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x9F20);
		}
		static ::UnityEngine::Vector2* StaticGet_k_Billboard1()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x9F28);
		}
		static ::UnityEngine::Vector2* StaticGet_k_Billboard0()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x9F30);
		}
		static ::UnityEngine::Vector2* StaticGet_k_Billboard2()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x9F38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES__CCTOR_OFFSET))();
		}

		static ::System::Void CreateFaceMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESH_OFFSET))(mesh, target);
		}

		static ::System::Void CreateFaceMeshFromFaces(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* faces, ::UnityEngine::Mesh* target)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESHFROMFACES_OFFSET))(mesh, faces, target);
		}

		static ::System::Void CreateEdgeMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_OFFSET))(mesh, target);
		}

		static ::System::Void CreateEdgeMesh_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_1_OFFSET))(mesh, target, edges);
		}

		static ::System::Void CreateVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_OFFSET))(mesh, target);
		}

		static ::System::Void CreateVertexMesh_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_1_OFFSET))(mesh, target, indexes);
		}

		static ::System::Void CreatePointMesh(::Il2CppArray<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<::System::Int32>* indexes, ::UnityEngine::Mesh* target)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTMESH_OFFSET))(positions, indexes, target);
		}

		static ::System::Void CreatePointBillboardMesh(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::UnityEngine::Mesh* target)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_OFFSET))(positions, target);
		}

		static ::System::Void CreatePointBillboardMesh_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions, ::System::Collections::Generic::IList_1<::System::Int32>* indexes, ::UnityEngine::Mesh* target)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_1_OFFSET))(positions, indexes, target);
		}

		static ::System::Void CreateEdgeBillboardMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_OFFSET))(mesh, target);
		}

		static ::System::Void CreateEdgeBillboardMesh_1(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Mesh* target, ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>* edges)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_1_OFFSET))(mesh, target, edges);
		}
	};
}
