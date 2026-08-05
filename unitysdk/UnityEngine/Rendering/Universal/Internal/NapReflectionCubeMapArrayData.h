#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class CubemapArray; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPREFLECTIONCUBEMAPARRAYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6675C0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapReflectionCubeMapArrayData_TypeDefinitionIndex = 27906;

	class NapReflectionCubeMapArrayData : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::CubemapArray*>* cubeMapArrayV2Data; // 0x10
		::UnityEngine::CubemapArray* cubeMapArrayData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPREFLECTIONCUBEMAPARRAYDATA__CTOR_OFFSET))(this);
		}
	};
}
