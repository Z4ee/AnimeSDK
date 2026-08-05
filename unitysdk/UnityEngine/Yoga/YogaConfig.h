#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_YOGA_YOGACONFIG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D015E10)
#define UNITYENGINE_YOGA_YOGACONFIG_GET_HANDLE_OFFSET UNITYSDK_OFFSET(0x1D015EF0)
#define UNITYENGINE_YOGA_YOGACONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D015F00)
#define UNITYENGINE_YOGA_YOGACONFIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D015D90)
#define UNITYENGINE_YOGA_YOGACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D015D20)

namespace UnityEngine::Yoga
{
	inline static constexpr unsigned int YogaConfig_TypeDefinitionIndex = 28034;

	class YogaConfig : public ::System::Object
	{
	public:
		static ::UnityEngine::Yoga::YogaConfig** StaticGet_Default()
		{
			return (::UnityEngine::Yoga::YogaConfig**)Il2CppClass::FromTypeDefinitionIndex(YogaConfig_TypeDefinitionIndex)->GetStaticField(0x23E40);
		}
		::System::IntPtr _ygConfig; // 0x10

		::System::Void _ctor(::System::IntPtr ygConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG__CTOR_OFFSET))(this, ygConfig);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG__CTOR_1_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_FINALIZE_OFFSET))(this);
		}

		::System::IntPtr get_Handle()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_YOGA_YOGACONFIG_GET_HANDLE_OFFSET))(this);
		}
	};
}
