#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/MeshTopology.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_SUBMESH_GETSUBMESHCOUNT_OFFSET UNITYSDK_OFFSET(0x1A2E8D40)
#define UNITYENGINE_PROBUILDER_SUBMESH_GETSUBMESHES_OFFSET UNITYSDK_OFFSET(0x1A2B0080)
#define UNITYENGINE_PROBUILDER_SUBMESH_GET_INDEXES_OFFSET UNITYSDK_OFFSET(0x1A2E8A30)
#define UNITYENGINE_PROBUILDER_SUBMESH_GET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x1A2E8AD0)
#define UNITYENGINE_PROBUILDER_SUBMESH_GET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0x1A2E8AB0)
#define UNITYENGINE_PROBUILDER_SUBMESH_MAPFACEMATERIALSTOSUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x1A2AFDE0)
#define UNITYENGINE_PROBUILDER_SUBMESH_SET_INDEXES_OFFSET UNITYSDK_OFFSET(0x1A2E8A90)
#define UNITYENGINE_PROBUILDER_SUBMESH_SET_SUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x1A2E8AE0)
#define UNITYENGINE_PROBUILDER_SUBMESH_SET_TOPOLOGY_OFFSET UNITYSDK_OFFSET(0x1A2E8AC0)
#define UNITYENGINE_PROBUILDER_SUBMESH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A2E8C40)
#define UNITYENGINE_PROBUILDER_SUBMESH__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2E8B80)
#define UNITYENGINE_PROBUILDER_SUBMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2E8AF0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Submesh_TypeDefinitionIndex = 39995;

	class Submesh : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* m_Indexes; // 0x10
		::UnityEngine::MeshTopology m_Topology; // 0x18
		::System::Int32 m_SubmeshIndex; // 0x1C

		::System::Void _ctor(::System::Int32 submeshIndex, ::UnityEngine::MeshTopology topology, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* indexes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH__CTOR_OFFSET))(this, submeshIndex, topology, indexes);
		}

		::System::Void _ctor_1(::UnityEngine::Mesh* mesh, ::System::Int32 subMeshIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH__CTOR_1_OFFSET))(this, mesh, subMeshIndex);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* get_indexes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH_GET_INDEXES_OFFSET))(this);
		}

		::System::Void set_indexes(::System::Collections::Generic::IEnumerable_1<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH_SET_INDEXES_OFFSET))(this, value);
		}

		::UnityEngine::MeshTopology get_topology()
		{
			return ((::UnityEngine::MeshTopology(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH_GET_TOPOLOGY_OFFSET))(this);
		}

		::System::Void set_topology(::UnityEngine::MeshTopology value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MeshTopology))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH_SET_TOPOLOGY_OFFSET))(this, value);
		}

		::System::Int32 get_submeshIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH_GET_SUBMESHINDEX_OFFSET))(this);
		}

		::System::Void set_submeshIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH_SET_SUBMESHINDEX_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH_TOSTRING_OFFSET))(this);
		}

		static ::System::Int32 GetSubmeshCount(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Int32(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH_GETSUBMESHCOUNT_OFFSET))(mesh);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Submesh*>* GetSubmeshes(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces, ::System::Int32 submeshCount, ::UnityEngine::MeshTopology preferredTopology)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Submesh*>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, ::System::Int32, ::UnityEngine::MeshTopology))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH_GETSUBMESHES_OFFSET))(faces, submeshCount, preferredTopology);
		}

		static ::System::Void MapFaceMaterialsToSubmeshIndex(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_SUBMESH_MAPFACEMATERIALSTOSUBMESHINDEX_OFFSET))(mesh);
		}
	};
}
