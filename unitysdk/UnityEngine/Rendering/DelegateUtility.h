#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class Type; }

#define UNITYENGINE_RENDERING_DELEGATEUTILITY_CAST_OFFSET UNITYSDK_OFFSET(0x1EBF96D0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DelegateUtility_TypeDefinitionIndex = 34930;

	class DelegateUtility : public ::System::Object
	{
	public:
		static ::System::Delegate* Cast(::System::Delegate* a1, ::System::Type* a2)
		{
			return ((::System::Delegate*(*)(::System::Delegate*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DELEGATEUTILITY_CAST_OFFSET))(a1, a2);
		}
	};
}
