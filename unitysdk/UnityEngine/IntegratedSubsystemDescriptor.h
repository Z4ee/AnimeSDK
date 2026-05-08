#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_INTEGRATEDSUBSYSTEMDESCRIPTOR_UNITYENGINE_ISUBSYSTEMDESCRIPTORIMPL_SET_PTR_OFFSET UNITYSDK_OFFSET(0x1C548110)
#define UNITYENGINE_INTEGRATEDSUBSYSTEMDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C548120)

namespace UnityEngine
{
	inline static constexpr unsigned int IntegratedSubsystemDescriptor_TypeDefinitionIndex = 9646;

	class IntegratedSubsystemDescriptor : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INTEGRATEDSUBSYSTEMDESCRIPTOR__CTOR_OFFSET))(this);
		}

		::System::Void UnityEngine_ISubsystemDescriptorImpl_set_ptr(::System::IntPtr value)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INTEGRATEDSUBSYSTEMDESCRIPTOR_UNITYENGINE_ISUBSYSTEMDESCRIPTORIMPL_SET_PTR_OFFSET))(this, value);
		}
	};
}
