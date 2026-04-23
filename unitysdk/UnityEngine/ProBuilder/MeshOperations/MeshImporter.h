#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }
namespace UnityEngine::ProBuilder::MeshOperations { class MeshImportSettings; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x1A290330)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_OFFSET UNITYSDK_OFFSET(0x1A290150)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2922E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A290080)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A290140)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A28FED0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshImporter_TypeDefinitionIndex = 40060;

	class MeshImporter : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings** StaticGet_k_DefaultImportSettings()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings**)Il2CppClass::FromTypeDefinitionIndex(MeshImporter_TypeDefinitionIndex)->GetStaticField(0x28000);
		}
		::UnityEngine::ProBuilder::ProBuilderMesh* m_Destination; // 0x10
		::UnityEngine::Mesh* m_SourceMesh; // 0x18
		::Il2CppArray<::UnityEngine::Material*>* m_SourceMaterials; // 0x20
		::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* m_Vertices; // 0x28

		::System::Void _ctor(::UnityEngine::GameObject* gameObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_OFFSET))(this, gameObject);
		}

		::System::Void _ctor_1(::UnityEngine::Mesh* sourceMesh, ::Il2CppArray<::UnityEngine::Material*>* sourceMaterials, ::UnityEngine::ProBuilder::ProBuilderMesh* destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Material*>*, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_1_OFFSET))(this, sourceMesh, sourceMaterials, destination);
		}

		::System::Void _ctor_2(::UnityEngine::ProBuilder::ProBuilderMesh* destination)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_2_OFFSET))(this, destination);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CCTOR_OFFSET))();
		}

		::System::Boolean Import(::UnityEngine::GameObject* go, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_OFFSET))(this, go, importSettings);
		}

		::System::Void Import_1(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* importSettings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_1_OFFSET))(this, importSettings);
		}
	};
}
