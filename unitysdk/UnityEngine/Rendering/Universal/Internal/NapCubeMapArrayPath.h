#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPCUBEMAPARRAYPATH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6A30F0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapCubeMapArrayPath_TypeDefinitionIndex = 30382;

	class NapCubeMapArrayPath : public ::System::Object
	{
	public:
		::System::String* CubeMapArrayPath; // 0x10
		::Il2CppArray<::System::String*>* CubeMapArrayV2Path; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_NAPCUBEMAPARRAYPATH__CTOR_OFFSET))(this);
		}
	};
}
