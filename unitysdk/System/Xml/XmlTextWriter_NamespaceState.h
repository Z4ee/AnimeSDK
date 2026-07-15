#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int XmlTextWriter_NamespaceState_TypeDefinitionIndex = 1856;

	enum class XmlTextWriter_NamespaceState : ::System::Int32
	{
		Uninitialized = 0,
		NotDeclaredButInScope = 1,
		DeclaredButNotWrittenOut = 2,
		DeclaredAndWrittenOut = 3,
	};
}
