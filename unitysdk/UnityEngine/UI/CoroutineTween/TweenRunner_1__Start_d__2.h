#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int TweenRunner_1__Start_d__2_TypeDefinitionIndex = 6063;

	template <typename T>
	class TweenRunner_1__Start_d__2 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		::System::Object* __2__current; // 0x0
		T tweenInfo; // 0x0
		::System::Single _elapsedTime_5__2; // 0x0
	};
}
