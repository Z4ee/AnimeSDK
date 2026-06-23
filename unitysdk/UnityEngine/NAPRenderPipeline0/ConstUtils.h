#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_CONSTUTILS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6A5C50)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ConstUtils_TypeDefinitionIndex = 5846;

	class ConstUtils : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_Vector2_01()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(ConstUtils_TypeDefinitionIndex)->GetStaticField(0x2390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CONSTUTILS__CCTOR_OFFSET))();
		}
	};
}
