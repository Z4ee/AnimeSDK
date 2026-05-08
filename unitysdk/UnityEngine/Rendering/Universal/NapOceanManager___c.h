#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x192A68E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x192A6920)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER___C__UPDATEOCEANFLOATOBJS_B__60_0_OFFSET UNITYSDK_OFFSET(0x192A6930)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER___C__UPDATEOCEANFLOATOBJS_B__60_1_OFFSET UNITYSDK_OFFSET(0x192A69D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapOceanManager___c_TypeDefinitionIndex = 29931;

	class NapOceanManager___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>** StaticGet___9__60_1()
		{
			return (::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager___c_TypeDefinitionIndex)->GetStaticField(0x23940);
		}
		static ::UnityEngine::Rendering::Universal::NapOceanManager___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::NapOceanManager___c**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager___c_TypeDefinitionIndex)->GetStaticField(0x23948);
		}
		static ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>** StaticGet___9__60_0()
		{
			return (::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager___c_TypeDefinitionIndex)->GetStaticField(0x23950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::Void _UpdateOceanFloatObjs_b__60_0(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER___C__UPDATEOCEANFLOATOBJS_B__60_0_OFFSET))(this, request);
		}

		::System::Void _UpdateOceanFloatObjs_b__60_1(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER___C__UPDATEOCEANFLOATOBJS_B__60_1_OFFSET))(this, request);
		}
	};
}
