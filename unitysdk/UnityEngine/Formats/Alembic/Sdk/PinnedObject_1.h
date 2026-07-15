#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedObject_1; }

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int PinnedObject_1_TypeDefinitionIndex = 42521;

	template <typename T>
	class PinnedObject_1 : public ::System::Object
	{
	public:
		T m_data; // 0x0
		::System::Runtime::InteropServices::GCHandle m_gch; // 0x0
	};
}
