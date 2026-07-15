#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/YieldInstruction.h"

#define UNITYENGINE_COROUTINE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C16AA70)
#define UNITYENGINE_COROUTINE_RELEASECOROUTINE_OFFSET UNITYSDK_OFFSET(0x1C16AAE0)
#define UNITYENGINE_COROUTINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C16AA60)

namespace UnityEngine
{
	inline static constexpr unsigned int Coroutine_TypeDefinitionIndex = 4308;

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

		static ::System::Void ReleaseCoroutine(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_COROUTINE_RELEASECOROUTINE_OFFSET))(a1);
		}
	};
}
