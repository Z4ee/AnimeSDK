#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Font; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int FontUpdateTracker___O_TypeDefinitionIndex = 5872;

	class FontUpdateTracker___O : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::Font*>** StaticGet__0___RebuildForFont()
		{
			return (::System::Action_1<::UnityEngine::Font*>**)Il2CppClass::FromTypeDefinitionIndex(FontUpdateTracker___O_TypeDefinitionIndex)->GetStaticField(0x45C10);
		}
	};
}
