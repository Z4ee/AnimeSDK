#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockProperty_1_TypeDefinitionIndex = 26495;

	template <typename T>
	class MaterialPropertyBlockProperty_1 : public ::System::Object
	{
	public:
		::System::Int32 propertyID; // 0x0
		::System::String* propertyName; // 0x0
		T value; // 0x0
	};
}
