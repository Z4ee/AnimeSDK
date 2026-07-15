#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Formats::Alembic::Importer
{
	inline static constexpr unsigned int AlembicStreamPlayer_AlembicStreamSource_TypeDefinitionIndex = 42550;

	enum class AlembicStreamPlayer_AlembicStreamSource : ::System::Int32
	{
		Internal = 0,
		External = 1,
	};
}
