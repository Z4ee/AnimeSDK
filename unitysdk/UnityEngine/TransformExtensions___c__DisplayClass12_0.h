#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Transform; }

#define UNITYENGINE_TRANSFORMEXTENSIONS___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4D880)
#define UNITYENGINE_TRANSFORMEXTENSIONS___C__DISPLAYCLASS12_0__SAFEFINDALLCHILDTRANSWITHNAMERECURSIVELY_B__0_OFFSET UNITYSDK_OFFSET(0x1DA4D890)

namespace UnityEngine
{
	inline static constexpr unsigned int TransformExtensions___c__DisplayClass12_0_TypeDefinitionIndex = 52938;

	class TransformExtensions___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::UnityEngine::Transform* trans; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _SafeFindAllChildTransWithNameRecursively_b__0(::UnityEngine::Transform* a, ::UnityEngine::Transform* b)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_TRANSFORMEXTENSIONS___C__DISPLAYCLASS12_0__SAFEFINDALLCHILDTRANSWITHNAMERECURSIVELY_B__0_OFFSET))(this, a, b);
		}
	};
}
