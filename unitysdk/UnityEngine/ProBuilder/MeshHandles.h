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

#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_1_OFFSET UNITYSDK_OFFSET(0x1B0B8060)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_OFFSET UNITYSDK_OFFSET(0x1B0B75B0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_1_OFFSET UNITYSDK_OFFSET(0x1B0B5230)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_OFFSET UNITYSDK_OFFSET(0x1B0B4C40)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESHFROMFACES_OFFSET UNITYSDK_OFFSET(0x1B0B49B0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESH_OFFSET UNITYSDK_OFFSET(0x1B0B4720)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_1_OFFSET UNITYSDK_OFFSET(0x1B0B5CE0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_OFFSET UNITYSDK_OFFSET(0x1B0B69F0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTMESH_OFFSET UNITYSDK_OFFSET(0x1B0B5A10)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_1_OFFSET UNITYSDK_OFFSET(0x1B0B58B0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_OFFSET UNITYSDK_OFFSET(0x1B0B56A0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B0B8CC0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MeshHandles_TypeDefinitionIndex = 40757;

	class MeshHandles : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_SharedVertexIndexList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x524B0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_s_Vector4List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x524B8);
		}
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_IndexList()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x524C0);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_s_Vector3List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x524C8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_s_Vector2List()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x524D0);
		}
		static ::UnityEngine::Vector2* StaticGet_k_Billboard3()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x10300);
		}
		static ::UnityEngine::Vector2* StaticGet_k_Billboard1()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x10308);
		}
		static ::UnityEngine::Vector2* StaticGet_k_Billboard0()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x10310);
		}
		static ::UnityEngine::Vector2* StaticGet_k_Billboard2()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(MeshHandles_TypeDefinitionIndex)->GetStaticField(0x10318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES__CCTOR_OFFSET))();
		}

		static ::System::Void CreateFaceMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESH_OFFSET))(a1, a2);
		}

		static ::System::Void CreateFaceMeshFromFaces(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* a2, ::UnityEngine::Mesh* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEFACEMESHFROMFACES_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreateEdgeMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_OFFSET))(a1, a2);
		}

		static ::System::Void CreateEdgeMesh_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEMESH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreateVertexMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_OFFSET))(a1, a2);
		}

		static ::System::Void CreateVertexMesh_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2, ::System::Collections::Generic::IList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEVERTEXMESH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreatePointMesh(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::UnityEngine::Mesh* a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTMESH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreatePointBillboardMesh(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_OFFSET))(a1, a2);
		}

		static ::System::Void CreatePointBillboardMesh_1(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2, ::UnityEngine::Mesh* a3)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::IList_1<::System::Int32>*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEPOINTBILLBOARDMESH_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CreateEdgeBillboardMesh(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_OFFSET))(a1, a2);
		}

		static ::System::Void CreateEdgeBillboardMesh_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::Mesh* a2, ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::System::Collections::Generic::ICollection_1<::UnityEngine::ProBuilder::Edge>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES_CREATEEDGEBILLBOARDMESH_1_OFFSET))(a1, a2, a3);
		}
	};
}
