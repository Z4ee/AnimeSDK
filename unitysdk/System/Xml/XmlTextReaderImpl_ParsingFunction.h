#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextReaderImpl_ParsingFunction_TypeDefinitionIndex = 1840;

	enum class XmlTextReaderImpl_ParsingFunction : ::System::Int32
	{
		ElementContent = 0,
		NoData = 1,
		OpenUrl = 2,
		SwitchToInteractive = 3,
		SwitchToInteractiveXmlDecl = 4,
		DocumentContent = 5,
		MoveToElementContent = 6,
		PopElementContext = 7,
		PopEmptyElementContext = 8,
		ResetAttributesRootLevel = 9,
		Error = 10,
		Eof = 11,
		ReaderClosed = 12,
		EntityReference = 13,
		InIncrementalRead = 14,
		FragmentAttribute = 15,
		ReportEndEntity = 16,
		AfterResolveEntityInContent = 17,
		AfterResolveEmptyEntityInContent = 18,
		XmlDeclarationFragment = 19,
		GoToEof = 20,
		PartialTextValue = 21,
		InReadAttributeValue = 22,
		InReadValueChunk = 23,
		InReadContentAsBinary = 24,
		InReadElementContentAsBinary = 25,
	};
}
