#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::NVIDIA
{
	inline static constexpr unsigned int NativeData_1_TypeDefinitionIndex = 5010;

	template <typename T>
	class NativeData_1 : public ::System::Object
	{
	public:
		::System::IntPtr m_MarshalledValue; // 0x0
		T Value; // 0x0
	};
}
