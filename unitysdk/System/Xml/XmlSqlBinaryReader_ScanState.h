#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlSqlBinaryReader_ScanState_TypeDefinitionIndex = 1671;

	enum class XmlSqlBinaryReader_ScanState : ::System::Int32
	{
		Doc = 0,
		XmlText = 1,
		Attr = 2,
		AttrVal = 3,
		AttrValPseudoValue = 4,
		Init = 5,
		Error = 6,
		EOF = 7,
		Closed = 8,
	};
}
