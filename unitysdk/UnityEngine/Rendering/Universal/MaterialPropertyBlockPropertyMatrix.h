#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/Universal/MaterialPropertyBlockProperty_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1968F2D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockPropertyMatrix_TypeDefinitionIndex = 29859;

	class MaterialPropertyBlockPropertyMatrix : public ::UnityEngine::Rendering::Universal::MaterialPropertyBlockProperty_1<::UnityEngine::Matrix4x4>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYMATRIX__CTOR_OFFSET))(this);
		}
	};
}
