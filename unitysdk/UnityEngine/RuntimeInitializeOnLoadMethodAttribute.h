#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/RuntimeInitializeLoadType.h"
#include "unitysdk/UnityEngine/Scripting/PreserveAttribute.h"

#define UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_SET_LOADTYPE_OFFSET UNITYSDK_OFFSET(0x1D7B77A0)
#define UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D7B77B0)
#define UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B7790)

namespace UnityEngine
{
	inline static constexpr unsigned int RuntimeInitializeOnLoadMethodAttribute_TypeDefinitionIndex = 5356;

	class RuntimeInitializeOnLoadMethodAttribute : public ::UnityEngine::Scripting::PreserveAttribute
	{
	public:
		::UnityEngine::RuntimeInitializeLoadType m_LoadType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::RuntimeInitializeLoadType loadType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeInitializeLoadType))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE__CTOR_1_OFFSET))(this, loadType);
		}

		::System::Void set_loadType(::UnityEngine::RuntimeInitializeLoadType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RuntimeInitializeLoadType))((::PBYTE)hIl2Cpp + UNITYENGINE_RUNTIMEINITIALIZEONLOADMETHODATTRIBUTE_SET_LOADTYPE_OFFSET))(this, value);
		}
	};
}
