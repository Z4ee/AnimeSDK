#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PRCUBEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA5D2C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PRCubeData_TypeDefinitionIndex = 6015;

	struct alignas(8) PRCubeData
	{
		::System::Int32 CubeBlendNum; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Vector4>* CubeCentersAndWeights; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Texture*>* CubeTexs; // 0x20

		::System::Void _ctor(::System::Int32 Num)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PRCUBEDATA__CTOR_OFFSET))(this, Num);
		}
	};
}
