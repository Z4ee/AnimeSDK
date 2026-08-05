#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E790890)
#define UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY___C__DISPLAYCLASS4_0__TRYSAMPLEPOINTSONMESHSURFACE_B__0_OFFSET UNITYSDK_OFFSET(0x1E7908A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GPUGrassBillboardSamplingUtility___c__DisplayClass4_0_TypeDefinitionIndex = 27024;

	class GPUGrassBillboardSamplingUtility___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* perTriangleRemainders; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _TrySamplePointsOnMeshSurface_b__0(::System::Int32 a, ::System::Int32 b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GPUGRASSBILLBOARDSAMPLINGUTILITY___C__DISPLAYCLASS4_0__TRYSAMPLEPOINTSONMESHSURFACE_B__0_OFFSET))(this, a, b);
		}
	};
}
