#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/XR/MeshGenerationStatus.h"
#include "unitysdk/UnityEngine/XR/MeshId.h"
#include "unitysdk/UnityEngine/XR/MeshVertexAttributes.h"

namespace System { class Object; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshCollider; }

#define UNITYENGINE_XR_MESHGENERATIONRESULT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xACA850)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_EQUALS_OFFSET UNITYSDK_OFFSET(0xACA7D0)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xACA890)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x32E5E0)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESHCOLLIDER_OFFSET UNITYSDK_OFFSET(0x2BBFE0)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESHID_OFFSET UNITYSDK_OFFSET(0x31EA80)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESH_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define UNITYENGINE_XR_MESHGENERATIONRESULT_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x3FDE90)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int MeshGenerationResult_TypeDefinitionIndex = 28259;

	struct alignas(8) MeshGenerationResult
	{
		::UnityEngine::XR::MeshId _MeshId_k__BackingField; // 0x10
		::UnityEngine::Mesh* _Mesh_k__BackingField; // 0x20
		::UnityEngine::MeshCollider* _MeshCollider_k__BackingField; // 0x28
		::UnityEngine::XR::MeshGenerationStatus _Status_k__BackingField; // 0x30
		::UnityEngine::XR::MeshVertexAttributes _Attributes_k__BackingField; // 0x34

		::UnityEngine::XR::MeshId get_MeshId()
		{
			return ((::UnityEngine::XR::MeshId(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESHID_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_Mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESH_OFFSET))(this);
		}

		::UnityEngine::MeshCollider* get_MeshCollider()
		{
			return ((::UnityEngine::MeshCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_MESHCOLLIDER_OFFSET))(this);
		}

		::UnityEngine::XR::MeshGenerationStatus get_Status()
		{
			return ((::UnityEngine::XR::MeshGenerationStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_STATUS_OFFSET))(this);
		}

		::UnityEngine::XR::MeshVertexAttributes get_Attributes()
		{
			return ((::UnityEngine::XR::MeshVertexAttributes(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::XR::MeshGenerationResult other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::XR::MeshGenerationResult))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_MESHGENERATIONRESULT_GETHASHCODE_OFFSET))(this);
		}
	};
}
