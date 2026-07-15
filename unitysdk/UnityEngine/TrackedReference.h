#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TRACKEDREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D0D7810)
#define UNITYENGINE_TRACKEDREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D0D78D0)
#define UNITYENGINE_TRACKEDREFERENCE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D0D7780)
#define UNITYENGINE_TRACKEDREFERENCE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D0D78E0)
#define UNITYENGINE_TRACKEDREFERENCE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D0D77C0)
#define UNITYENGINE_TRACKEDREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D7770)

namespace UnityEngine
{
	inline static constexpr unsigned int TrackedReference_TypeDefinitionIndex = 4344;

	class TrackedReference : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::TrackedReference* a1, ::UnityEngine::TrackedReference* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::TrackedReference*, ::UnityEngine::TrackedReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::TrackedReference* a1, ::UnityEngine::TrackedReference* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::TrackedReference*, ::UnityEngine::TrackedReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::TrackedReference* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::TrackedReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_OP_IMPLICIT_OFFSET))(a1);
		}
	};
}
