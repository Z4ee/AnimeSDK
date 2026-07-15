#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_EntityExpandType_TypeDefinitionIndex = 1843;

	enum class XmlTextReaderImpl_EntityExpandType : ::System::Int32
	{
		All = 0,
		OnlyGeneral = 1,
		OnlyCharacter = 2,
	};
}
