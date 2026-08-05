#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/XR/FeatureType.h"
#include "unitysdk/UnityEngine/InputSystem/XR/UsageHint.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::InputSystem::XR
{
	inline static constexpr unsigned int XRFeatureDescriptor_TypeDefinitionIndex = 32345;

	struct alignas(8) XRFeatureDescriptor
	{
		::System::String* name; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::XR::UsageHint>* usageHints; // 0x18
		::UnityEngine::InputSystem::XR::FeatureType featureType; // 0x20
		::System::UInt32 customSize; // 0x24
	};
}
