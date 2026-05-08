#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define UNITYENGINE_CONTROLPARAMHANDLEWRAPPER_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1C55DA40)
#define UNITYENGINE_CONTROLPARAMHANDLEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x9EBAE0)

namespace UnityEngine
{
	inline static constexpr unsigned int ControlParamHandleWrapper_TypeDefinitionIndex = 37657;

	struct alignas(8) ControlParamHandleWrapper
	{
		::System::UInt32 m_CRC; // 0x10
		::System::IntPtr Ptr; // 0x18
		::System::UInt16 m_Index; // 0x20
		::System::UInt16 m_Version; // 0x22

		::System::Void _ctor(::System::String* InName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTROLPARAMHANDLEWRAPPER__CTOR_OFFSET))(this, InName);
		}

		static ::System::Void Internal_Create(::System::String* InName, ::UnityEngine::ControlParamHandleWrapper& Wrapper)
		{
			return ((::System::Void(*)(::System::String*, ::UnityEngine::ControlParamHandleWrapper&))((::PBYTE)hIl2Cpp + UNITYENGINE_CONTROLPARAMHANDLEWRAPPER_INTERNAL_CREATE_OFFSET))(InName, Wrapper);
		}
	};
}
