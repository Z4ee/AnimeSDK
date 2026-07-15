#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/PropertyName.h"

namespace UnityEngine { class IExposedPropertyTable; }
namespace UnityEngine { class Object; }

namespace UnityEngine
{
	inline static constexpr unsigned int ExposedReference_1_TypeDefinitionIndex = 4064;

	template <typename T>
	struct ExposedReference_1
	{
		::UnityEngine::PropertyName exposedName; // 0x0
		::UnityEngine::Object* defaultValue; // 0x0
	};
}
