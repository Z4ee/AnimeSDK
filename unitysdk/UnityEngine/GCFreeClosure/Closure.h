#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/GCFreeClosure/SValue.h"

namespace System { class Delegate; }
namespace System { class Object; }

#define UNITYENGINE_GCFREECLOSURE_CLOSURE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BB8CA0)
#define UNITYENGINE_GCFREECLOSURE_CLOSURE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BB8C40)
#define UNITYENGINE_GCFREECLOSURE_CLOSURE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BB8D50)
#define UNITYENGINE_GCFREECLOSURE_CLOSURE_ISVALID_OFFSET UNITYSDK_OFFSET(0x3BB8C20)
#define UNITYENGINE_GCFREECLOSURE_CLOSURE_RESET_OFFSET UNITYSDK_OFFSET(0x3BB8C30)

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int Closure_TypeDefinitionIndex = 4451;

	struct alignas(8) Closure
	{
		::UnityEngine::GCFreeClosure::SValue _0; // 0x10
		::UnityEngine::GCFreeClosure::SValue _1; // 0x28
		::UnityEngine::GCFreeClosure::SValue _2; // 0x40
		::UnityEngine::GCFreeClosure::SValue _3; // 0x58
		::System::Delegate* _delegate; // 0x70

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSURE_ISVALID_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSURE_RESET_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::GCFreeClosure::Closure a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GCFreeClosure::Closure))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSURE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSURE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_CLOSURE_GETHASHCODE_OFFSET))(this);
		}
	};
}
