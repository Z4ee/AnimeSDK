#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }
namespace UnityEngine::ProBuilder { class Vertex; }
namespace UnityEngine::ProBuilder::MeshOperations { class MeshImportSettings; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_1_OFFSET UNITYSDK_OFFSET(0xCFEEA90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_OFFSET UNITYSDK_OFFSET(0xCFEE8C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CCTOR_OFFSET UNITYSDK_OFFSET(0xCFF0B70)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCFEE7F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_2_OFFSET UNITYSDK_OFFSET(0xCFEE8B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_OFFSET UNITYSDK_OFFSET(0xCFEE650)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshImporter_TypeDefinitionIndex = 43313;

	class MeshImporter : public ::System::Object
	{
	public:
		static ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings** StaticGet_k_DefaultImportSettings()
		{
			return (::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings**)Il2CppClass::FromTypeDefinitionIndex(MeshImporter_TypeDefinitionIndex)->GetStaticField(0x641A0);
		}
		::Il2CppArray<::UnityEngine::ProBuilder::Vertex*>* m_Vertices; // 0x10
		::UnityEngine::Mesh* m_SourceMesh; // 0x18
		::UnityEngine::ProBuilder::ProBuilderMesh* m_Destination; // 0x20
		::Il2CppArray<::UnityEngine::Material*>* m_SourceMaterials; // 0x28

		::System::Void _ctor(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::Mesh* a1, ::Il2CppArray<::UnityEngine::Material*>* a2, ::UnityEngine::ProBuilder::ProBuilderMesh* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Material*>*, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER__CCTOR_OFFSET))();
		}

		::System::Boolean Import(::UnityEngine::GameObject* a1, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_OFFSET))(this, a1, a2);
		}

		::System::Void Import_1(::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::MeshOperations::MeshImportSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER_IMPORT_1_OFFSET))(this, a1);
		}
	};
}
