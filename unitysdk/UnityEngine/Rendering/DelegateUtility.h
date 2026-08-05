#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class Type; }

#define UNITYENGINE_RENDERING_DELEGATEUTILITY_CAST_OFFSET UNITYSDK_OFFSET(0x1CA798A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DelegateUtility_TypeDefinitionIndex = 18734;

	class DelegateUtility : public ::System::Object
	{
	public:
		static ::System::Delegate* Cast(::System::Delegate* source, ::System::Type* type)
		{
			return ((::System::Delegate*(*)(::System::Delegate*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DELEGATEUTILITY_CAST_OFFSET))(source, type);
		}
	};
}
