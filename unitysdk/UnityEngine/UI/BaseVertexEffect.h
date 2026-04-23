#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_UI_BASEVERTEXEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5370D0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int BaseVertexEffect_TypeDefinitionIndex = 5766;

	class BaseVertexEffect : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BASEVERTEXEFFECT__CTOR_OFFSET))(this);
		}
	};
}
