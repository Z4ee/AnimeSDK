#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class MonoBehaviour; }

namespace UnityEngine::UI::CoroutineTween
{
	inline static constexpr unsigned int TweenRunner_1_TypeDefinitionIndex = 6062;

	template <typename T>
	class TweenRunner_1 : public ::System::Object
	{
	public:
		::UnityEngine::MonoBehaviour* m_CoroutineContainer; // 0x0
		::System::Collections::IEnumerator* m_Tween; // 0x0
	};
}
