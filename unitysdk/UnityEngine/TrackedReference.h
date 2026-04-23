#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_TRACKEDREFERENCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A48F630)
#define UNITYENGINE_TRACKEDREFERENCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A48F6E0)
#define UNITYENGINE_TRACKEDREFERENCE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A48F5A0)
#define UNITYENGINE_TRACKEDREFERENCE_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A48F6F0)
#define UNITYENGINE_TRACKEDREFERENCE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A48F5E0)
#define UNITYENGINE_TRACKEDREFERENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A48F590)

namespace UnityEngine
{
	inline static constexpr unsigned int TrackedReference_TypeDefinitionIndex = 4165;

	class TrackedReference : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::TrackedReference* x, ::UnityEngine::TrackedReference* y)
		{
			return ((::System::Boolean(*)(::UnityEngine::TrackedReference*, ::UnityEngine::TrackedReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_OP_EQUALITY_OFFSET))(x, y);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::TrackedReference* x, ::UnityEngine::TrackedReference* y)
		{
			return ((::System::Boolean(*)(::UnityEngine::TrackedReference*, ::UnityEngine::TrackedReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_OP_INEQUALITY_OFFSET))(x, y);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Implicit(::UnityEngine::TrackedReference* exists)
		{
			return ((::System::Boolean(*)(::UnityEngine::TrackedReference*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRACKEDREFERENCE_OP_IMPLICIT_OFFSET))(exists);
		}
	};
}
