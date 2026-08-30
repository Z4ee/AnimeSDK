#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AstraFXRenderItem_Type.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Rendering/ShadowCastingMode.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXRenderItem_TypeDefinitionIndex = 4092;

	struct alignas(8) AstraFXRenderItem
	{
		::UnityEngine::AstraFXRenderItem_Type type; // 0x10
		::UnityEngine::Mesh* mesh; // 0x18
		::System::Int32 submeshIndex; // 0x20
		::UnityEngine::Material* material; // 0x28
		::System::Int32 instanceCount; // 0x30
		::UnityEngine::Rendering::ShadowCastingMode castShadows; // 0x34
		::System::Boolean receiveShadows; // 0x38
		::System::Int32 layer; // 0x3C
		::System::UInt32 renderingLayerMask; // 0x40
		::System::String* indirectArgumentBufferName; // 0x48
		::System::Int32 argsOffset; // 0x50
		::UnityEngine::MeshTopology topology; // 0x54
		::System::Int32 vertexOrIndexCount; // 0x58
		::System::String* indexBufferName; // 0x60
	};
}
