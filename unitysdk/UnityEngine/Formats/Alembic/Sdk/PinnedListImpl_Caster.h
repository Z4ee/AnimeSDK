#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine::Formats::Alembic::Sdk { class PinnedListImpl_ListData; }

namespace UnityEngine::Formats::Alembic::Sdk
{
	inline static constexpr unsigned int PinnedListImpl_Caster_TypeDefinitionIndex = 42525;

	struct alignas(8) PinnedListImpl_Caster
	{
		::System::Object* list; // 0x10
		::UnityEngine::Formats::Alembic::Sdk::PinnedListImpl_ListData* data; // 0x10
	};
}
