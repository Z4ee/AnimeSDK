#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ComponentSingleton_1_TypeDefinitionIndex = 34038;

	template <typename TType>
	class ComponentSingleton_1 : public ::System::Object
	{
	public:
		static TType* StaticGet_s_Instance()
		{
			return (TType*)Il2CppClass::FromTypeDefinitionIndex(ComponentSingleton_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
