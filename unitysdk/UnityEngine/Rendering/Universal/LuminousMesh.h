#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/PrimitiveType.h"

namespace UnityEngine { class MaterialPropertyBlock; }

#define UNITYENGINE_RENDERING_UNIVERSAL_LUMINOUSMESH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C40AD90)
#define UNITYENGINE_RENDERING_UNIVERSAL_LUMINOUSMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C40AE90)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LuminousMesh_TypeDefinitionIndex = 26577;

	class LuminousMesh : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::PrimitiveType m_MeshType; // 0x18
		::UnityEngine::Color m_Color; // 0x1C
		::System::Single m_Intensity; // 0x2C
		::UnityEngine::MaterialPropertyBlock* m_MaterialPropertyBlock; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LUMINOUSMESH__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LUMINOUSMESH_ONENABLE_OFFSET))(this);
		}
	};
}
