#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_CLOTH_GET_NORMALS_OFFSET UNITYSDK_OFFSET(0x1ECFB800)
#define UNITYENGINE_CLOTH_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1ECFB7F0)

namespace UnityEngine
{
	inline static constexpr unsigned int Cloth_TypeDefinitionIndex = 5766;

	class Cloth : public ::UnityEngine::Component
	{
	public:
		::System::Single _useContinuousCollision_k__BackingField; // 0x18
		::System::Boolean _selfCollision_k__BackingField; // 0x1C

		::Il2CppArray<::UnityEngine::Vector3>* get_vertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CLOTH_GET_VERTICES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_normals()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_CLOTH_GET_NORMALS_OFFSET))(this);
		}
	};
}
