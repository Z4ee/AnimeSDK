#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_EntityType_TypeDefinitionIndex = 1842;

	enum class XmlTextReaderImpl_EntityType : ::System::Int32
	{
		CharacterDec = 0,
		CharacterHex = 1,
		CharacterNamed = 2,
		Expanded = 3,
		Skipped = 4,
		FakeExpanded = 5,
		Unexpanded = 6,
		ExpandedInAttribute = 7,
	};
}
