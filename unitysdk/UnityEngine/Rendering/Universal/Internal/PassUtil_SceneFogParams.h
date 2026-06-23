#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SCENEFOGPARAMS_FLUSH_OFFSET UNITYSDK_OFFSET(0x675640)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SCENEFOGPARAMS__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7A3A50)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PassUtil_SceneFogParams_TypeDefinitionIndex = 26824;

	struct alignas(4) PassUtil_SceneFogParams
	{
		static ::UnityEngine::Matrix4x4* StaticGet__SceneFogParamsPart3()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_SceneFogParams_TypeDefinitionIndex)->GetStaticField(0x75B0);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneFogParamsPart1()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_SceneFogParams_TypeDefinitionIndex)->GetStaticField(0x75F0);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneFogParamsPart2()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_SceneFogParams_TypeDefinitionIndex)->GetStaticField(0x7630);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneFogParamsPart4()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_SceneFogParams_TypeDefinitionIndex)->GetStaticField(0x7670);
		}
		::UnityEngine::Vector3 _FogExtinctColor; // 0x10
		::UnityEngine::Vector3 _FogRayColor; // 0x1C
		::UnityEngine::Vector4 _FogMieColorG; // 0x28
		::UnityEngine::Vector4 _FogParams0; // 0x38
		::UnityEngine::Vector4 _FogParams1; // 0x48
		::UnityEngine::Vector4 _FogMaskCenterRange; // 0x58
		::UnityEngine::Vector4 _FogMaskScatteringAbsorption; // 0x68
		::UnityEngine::Vector4 _FogMaskParams; // 0x78
		::UnityEngine::Vector4 _Fog2ColorA; // 0x88
		::UnityEngine::Vector4 _Fog2ColorB; // 0x98
		::UnityEngine::Vector4 _Fog2Params0; // 0xA8
		::UnityEngine::Vector4 _Fog2Params1; // 0xB8
		::UnityEngine::Vector4 _RainGroundFogParams1; // 0xC8
		::UnityEngine::Vector4 _RainGroundFogParams2; // 0xD8
		::UnityEngine::Vector4 _RainGroundFogColor; // 0xE8

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SCENEFOGPARAMS__CCTOR_OFFSET))();
		}

		::System::Void Flush(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SCENEFOGPARAMS_FLUSH_OFFSET))(this, cmd);
		}
	};
}
