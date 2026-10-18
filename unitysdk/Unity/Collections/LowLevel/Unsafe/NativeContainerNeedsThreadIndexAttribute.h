#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace Unity::Collections::LowLevel::Unsafe
{
	inline static constexpr unsigned int NativeContainerNeedsThreadIndexAttribute_TypeDefinitionIndex = 3999;

	class NativeContainerNeedsThreadIndexAttribute : public ::System::Attribute
	{
	public:
	};
}
