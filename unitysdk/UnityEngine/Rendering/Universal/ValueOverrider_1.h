#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ValueOverrider_1_TypeDefinitionIndex = 27403;

	template <typename T>
	class ValueOverrider_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_4<::System::String*, ::System::Int32, T, ::System::Int32>>* overridens; // 0x0
	};
}
