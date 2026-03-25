#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_MESHUTILITY_COLLAPSESHAREDVERTICES_OFFSET UNITYSDK_OFFSET(0x1886CB30)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_COMPILE_OFFSET UNITYSDK_OFFSET(0x1886BF30)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_COPYTO_OFFSET UNITYSDK_OFFSET(0x18867C00)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_DEEPCOPY_OFFSET UNITYSDK_OFFSET(0x18867BC0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_FITTOSIZE_OFFSET UNITYSDK_OFFSET(0x1886D2D0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GENERATEPERTRIANGLEMESH_OFFSET UNITYSDK_OFFSET(0x18866AD0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GENERATETANGENT_OFFSET UNITYSDK_OFFSET(0x18867110)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GETBOUNDS_OFFSET UNITYSDK_OFFSET(0x188582B0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GETINDEXCOUNT_OFFSET UNITYSDK_OFFSET(0x1886BCC0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GETPRIMITIVECOUNT_OFFSET UNITYSDK_OFFSET(0x1886BD90)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x18856DE0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_ISUSEDINPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1886DAB0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_PRINT_OFFSET UNITYSDK_OFFSET(0x18868BF0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_RESTOREPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1886DC40)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_1_OFFSET UNITYSDK_OFFSET(0x1886DA90)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_2_OFFSET UNITYSDK_OFFSET(0x1886D6D0)
#define UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_OFFSET UNITYSDK_OFFSET(0x1886D6A0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int MeshUtility_TypeDefinitionIndex = 34113;

	class MeshUtility : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* GeneratePerTriangleMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GENERATEPERTRIANGLEMESH_OFFSET))(mesh);
		}

		static ::System::Void GenerateTangent(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GENERATETANGENT_OFFSET))(mesh);
		}

		static ::UnityEngine::Mesh* DeepCopy(::UnityEngine::Mesh* source)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_DEEPCOPY_OFFSET))(source);
		}

		static ::System::Void CopyTo(::UnityEngine::Mesh* source, ::UnityEngine::Mesh* destination)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_COPYTO_OFFSET))(source, destination);
		}

		static ::System::String* Print(::UnityEngine::Mesh* mesh)
		{
			return ((::System::String*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_PRINT_OFFSET))(mesh);
		}

		static ::System::UInt32 GetIndexCount(::UnityEngine::Mesh* mesh)
		{
			return ((::System::UInt32(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GETINDEXCOUNT_OFFSET))(mesh);
		}

		static ::System::UInt32 GetPrimitiveCount(::UnityEngine::Mesh* mesh)
		{
			return ((::System::UInt32(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GETPRIMITIVECOUNT_OFFSET))(mesh);
		}

		static ::System::Void Compile(::UnityEngine::ProBuilder::ProBuilderMesh* probuilderMesh, ::UnityEngine::Mesh* targetMesh, ::UnityEngine::MeshTopology preferredTopology)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Mesh*, ::UnityEngine::MeshTopology))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_COMPILE_OFFSET))(probuilderMesh, targetMesh, preferredTopology);
		}

		static ::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* GetVertices(::UnityEngine::Mesh* mesh)
		{
			return ((::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GETVERTICES_OFFSET))(mesh);
		}

		static ::System::Void CollapseSharedVertices(::UnityEngine::Mesh* mesh, ::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* vertices)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_COLLAPSESHAREDVERTICES_OFFSET))(mesh, vertices);
		}

		static ::System::Void FitToSize(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Bounds currentSize, ::UnityEngine::Vector3 sizeToFit)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::Bounds, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_FITTOSIZE_OFFSET))(mesh, currentSize, sizeToFit);
		}

		static ::System::String* SanityCheck(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::System::String*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_OFFSET))(mesh);
		}

		static ::System::String* SanityCheck_1(::UnityEngine::Mesh* mesh)
		{
			return ((::System::String*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_1_OFFSET))(mesh);
		}

		static ::System::String* SanityCheck_2(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices)
		{
			return ((::System::String*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_SANITYCHECK_2_OFFSET))(vertices);
		}

		static ::System::Boolean IsUsedInParticleSystem(::UnityEngine::ProBuilder::ProBuilderMesh* pbmesh)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_ISUSEDINPARTICLESYSTEM_OFFSET))(pbmesh);
		}

		static ::System::Void RestoreParticleSystem(::UnityEngine::ProBuilder::ProBuilderMesh* pbmesh)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_RESTOREPARTICLESYSTEM_OFFSET))(pbmesh);
		}

		static ::UnityEngine::Bounds GetBounds(::UnityEngine::ProBuilder::ProBuilderMesh* mesh)
		{
			return ((::UnityEngine::Bounds(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHUTILITY_GETBOUNDS_OFFSET))(mesh);
		}
	};
}
