#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_PREPARERESOLVERES_OFFSET UNITYSDK_OFFSET(0x18A3B760)
#define UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_SETPARTMAT_OFFSET UNITYSDK_OFFSET(0x18A3B780)
#define UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_SETPARTMESH_OFFSET UNITYSDK_OFFSET(0x18A3B770)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimationMeshVariant_TypeDefinitionIndex = 4588;

	class BatchAnimationMeshVariant : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void PrepareResolveRes(::System::Int32 part)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_PREPARERESOLVERES_OFFSET))(this, part);
		}

		::System::Boolean SetPartMesh(::System::Int32 part, ::System::Int32 index, ::UnityEngine::Mesh* mesh)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_SETPARTMESH_OFFSET))(this, part, index, mesh);
		}

		::System::Void SetPartMat(::System::Int32 part, ::System::Int32 index, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_SETPARTMAT_OFFSET))(this, part, index, mat);
		}
	};
}
