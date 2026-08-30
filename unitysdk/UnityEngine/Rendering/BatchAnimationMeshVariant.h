#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_PREPARERESOLVERES_OFFSET UNITYSDK_OFFSET(0x1ED53160)
#define UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_SETPARTMAT_OFFSET UNITYSDK_OFFSET(0x1ED53180)
#define UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_SETPARTMESH_OFFSET UNITYSDK_OFFSET(0x1ED53170)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BatchAnimationMeshVariant_TypeDefinitionIndex = 4779;

	class BatchAnimationMeshVariant : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void PrepareResolveRes(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_PREPARERESOLVERES_OFFSET))(this, a1);
		}

		::System::Boolean SetPartMesh(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Mesh* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_SETPARTMESH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetPartMat(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Material* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BATCHANIMATIONMESHVARIANT_SETPARTMAT_OFFSET))(this, a1, a2, a3);
		}
	};
}
