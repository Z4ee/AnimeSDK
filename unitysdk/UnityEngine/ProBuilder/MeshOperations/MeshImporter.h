#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }
namespace UnityEngine::ProBuilder::MeshOperations { class MeshImportSettings; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_1_OFFSET UNITYSDK_OFFSET(0x188560F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_OFFSET UNITYSDK_OFFSET(0x18855F10)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x188580A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18855E40)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18855F00)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_OFFSET UNITYSDK_OFFSET(0x18855C90)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshImporter_TypeDefinitionIndex = 34241;

	class MeshImporter : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings** StaticGet_k_DefaultImportSettings()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings**)Il2CppClass::FromTypeDefinitionIndex(MeshImporter_TypeDefinitionIndex)->GetStaticField(0x28DB0);
		}
		::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* m_Vertices; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* m_SourceMaterials; // 0x18
		::UnityEngine::ProBuilder::ProBuilderMesh* m_Destination; // 0x20
		::UnityEngine::Mesh* m_SourceMesh; // 0x28

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
