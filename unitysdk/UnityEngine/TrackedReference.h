#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TRACKEDREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1ED6F5F0)
#define UNITYENGINE_TRACKEDREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1ED6F6B0)
#define UNITYENGINE_TRACKEDREFERENCE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1ED6F560)
#define UNITYENGINE_TRACKEDREFERENCE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1ED6F6C0)
#define UNITYENGINE_TRACKEDREFERENCE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1ED6F5A0)
#define UNITYENGINE_TRACKEDREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED6F550)

namespace UnityEngine
{
	inline static constexpr unsigned int TrackedReference_TypeDefinitionIndex = 4354;

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
