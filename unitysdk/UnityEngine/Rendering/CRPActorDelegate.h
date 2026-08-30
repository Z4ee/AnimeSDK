#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_RENDERING_CRPACTORDELEGATE_SETSAFEDELETE_OFFSET UNITYSDK_OFFSET(0x1ED53D80)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPActorDelegate_TypeDefinitionIndex = 4866;

	class CRPActorDelegate : public ::UnityEngine::Behaviour
	{
	public:
		static ::System::Void SetSafeDelete(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CRPACTORDELEGATE_SETSAFEDELETE_OFFSET))(a1);
		}
	};
}
