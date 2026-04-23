#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/YieldInstruction.h"

#define UNITYENGINE_COROUTINE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A434E70)
#define UNITYENGINE_COROUTINE_RELEASECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1A434EE0)
#define UNITYENGINE_COROUTINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A434E60)

namespace UnityEngine
{
	inline static constexpr unsigned int Coroutine_TypeDefinitionIndex = 4129;

	class Coroutine : public ::UnityEngine::YieldInstruction
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COROUTINE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COROUTINE_FINALIZE_OFFSET))(this);
		}

		static ::System::Void ReleaseCoroutine(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_COROUTINE_RELEASECOROUTINE_OFFSET))(ptr);
		}
	};
}
