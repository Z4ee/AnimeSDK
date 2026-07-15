#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_IncrementalReadState_TypeDefinitionIndex = 1844;

	enum class XmlTextReaderImpl_IncrementalReadState : ::System::Int32
	{
		Text = 0,
		StartTag = 1,
		PI = 2,
		CDATA = 3,
		Comment = 4,
		Attributes = 5,
		AttributeValue = 6,
		ReadData = 7,
		EndElement = 8,
		End = 9,
		ReadValueChunk_OnCachedValue = 10,
		ReadValueChunk_OnPartialValue = 11,
		ReadContentAsBinary_OnCachedValue = 12,
		ReadContentAsBinary_OnPartialValue = 13,
		ReadContentAsBinary_End = 14,
	};
}
