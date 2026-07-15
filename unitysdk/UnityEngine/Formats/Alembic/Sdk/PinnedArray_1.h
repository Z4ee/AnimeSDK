#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine::Formats::Alembic::Sdk { template <typename T> class PinnedArray_1; }

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int PinnedArray_1_TypeDefinitionIndex = 42522;

	template <typename T>
	class PinnedArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* m_data; // 0x0
		::System::Runtime::InteropServices::GCHandle m_gch; // 0x0
	};
}
